# CreateCppCourse.ps1
param(
    [string]$CourseDir = ".\"
)

# Create base folder
New-Item -ItemType Directory -Path $CourseDir -Force | Out-Null

# Create .vscode folder and config files
$vsCodeDir = Join-Path $CourseDir ".vscode"
New-Item -ItemType Directory -Path $vsCodeDir -Force | Out-Null

# Sample tasks.json content for building with g++
@"
{
    "version": "2.0.0",
    "tasks": [
        {
            "label": "build C++ (g++)",
            "type": "shell",
            "command": "g++",
            "args": [
                "-g",
                "\${file}",
                "-o",
                "\${fileDirname}\\\${fileBasenameNoExtension}.exe"
            ],
            "group": { "kind": "build", "isDefault": true },
            "problemMatcher": ["$gcc"]
        }
    ]
}
"@ | Out-File -FilePath (Join-Path $vsCodeDir "tasks.json") -Encoding UTF8

# Sample launch.json content for debugging
@"
{
    "version": "0.2.0",
    "configurations": [
        {
            "name": "Debug C++ (GDB)",
            "type": "cppdbg",
            "request": "launch",
            "program": "\${fileDirname}\\\${fileBasenameNoExtension}.exe",
            "args": [],
            "stopAtEntry": false,
            "cwd": "\${fileDirname}",
            "externalConsole": true,
            "MIMode": "gdb",
            "miDebuggerPath": "C:\\msys64\\ucrt64\\bin\\gdb.exe",
            "preLaunchTask": "build C++ (g++)"
        }
    ]
}
"@ | Out-File -FilePath (Join-Path $vsCodeDir "launch.json") -Encoding UTF8

# Create lesson files and content
$lessons = @(
    @{ Name="01_HelloWorld"; Content=@"
#include <iostream>
int main() {
    std::cout << "Hello, World!" << std::endl;
    return 0;
}
"@ },
    @{ Name="02_Variables"; Content=@"
#include <iostream>
int main() {
    int a = 5;
    double b = 3.14;
    char c = 'X';
    std::cout << "a=" << a << " b=" << b << " c=" << c << std::endl;
    return 0;
}
"@ },
    @{ Name="03_InputOutput"; Content=@"
#include <iostream>
int main() {
    int age;
    std::cout << "Enter your age: ";
    std::cin >> age;
    std::cout << "You are " << age << " years old." << std::endl;
    return 0;
}
"@ },
    @{ Name="04_Conditionals"; Content=@"
#include <iostream>
int main() {
    int x;
    std::cout << "Enter a number: ";
    std::cin >> x;
    if (x > 0) {
        std::cout << "Positive" << std::endl;
    } else if (x == 0) {
        std::cout << "Zero" << std::endl;
    } else {
        std::cout << "Negative" << std::endl;
    }
    return 0;
}
"@ },
    @{ Name="05_Loops"; Content=@"
#include <iostream>
int main() {
    for (int i = 1; i <= 5; i++) {
        std::cout << i << " ";
    }
    std::cout << std::endl;
    return 0;
}
"@ },
    @{ Name="06_Functions"; Content=@"
#include <iostream>
int square(int x) {
    return x * x;
}
int main() {
    int num = 4;
    std::cout << "Square of " << num << " is " << square(num) << std::endl;
    return 0;
}
"@ },
    @{ Name="07_Vectors"; Content=@"
#include <iostream>
#include <vector>
int main() {
    std::vector<int> nums = {1,2,3,4,5};
    for (int n : nums) {
        std::cout << n << " ";
    }
    std::cout << std::endl;
    return 0;
}
"@ },
    @{ Name="08_Strings"; Content=@"
#include <iostream>
#include <string>
int main() {
    std::string name;
    std::cout << "Enter your name: ";
    std::cin >> name;
    std::cout << "Hello " << name << std::endl;
    return 0;
}
"@ },
    @{ Name="09_Structs"; Content=@"
#include <iostream>
#include <string>
struct Person {
    std::string name;
    int age;
};
int main() {
    Person p = { "Alice", 30 };
    std::cout << p.name << " is " << p.age << " years old." << std::endl;
    return 0;
}
"@ },
    @{ Name="10_FileIO"; Content=@"
#include <iostream>
#include <fstream>
int main() {
    std::ofstream file("data.txt");
    file << 123 << " " << 4.56;
    file.close();
    std::cout << "Data written to data.txt" << std::endl;
    return 0;
}
"@ },
    @{ Name="11_SimpleAlgorithm"; Content=@"
#include <iostream>
int main() {
    int sum = 0;
    for (int i = 1; i <= 10; i++) sum += i;
    std::cout << "Sum 1+...+10 = " << sum << std::endl;
    return 0;
}
"@ },
    @{ Name="12_DebuggingExample"; Content=@"
// Intentional bug: division by zero
#include <iostream>
int main() {
    int x = 10, y = 0;
    int z = x / y; // debugger can help find this
    std::cout << z << std::endl;
    return 0;
}
"@ }
)

# Create files with content
foreach ($lesson in $lessons) {
    $filePath = Join-Path $CourseDir ("$($lesson.Name).cpp")
    $lesson.Content | Out-File -FilePath $filePath -Encoding UTF8
}

# README for students
@"
# C++ Course Examples

Open each numbered file (`01_HelloWorld.cpp`, `02_Variables.cpp`, …) in VS Code.  
Use **Terminal** → **Run Build Task** (or the Run ▶ button) to compile and run.  
Each file demonstrates key concepts (Hello World, variables, etc.).

Common commands:
- Build: `Ctrl+Shift+B` (g++ will compile the active file).
- Run without debugging: `Ctrl+F5` (shows output).
- Debug: `F5` (set breakpoints and step through).

Problems? See teacher notes.
"@ | Out-File -FilePath (Join-Path $CourseDir "README.md") -Encoding UTF8

# Teacher notes
@"
# Teacher Notes

- **Lesson order:** The files are numbered in suggested order (HelloWorld → Variables → … → MiniProject).  
- **Timing:** Each lesson ~30–60 min (see table below). Adjust depth to students.
- **Objectives:** Each example focuses on one concept (I/O, loops, etc.).
- **Pitfalls:** E.g. forgetting `return 0;`, infinite loops, off-by-one in loops, dividing by zero.
- **Exercises:** Encourage modifications (change messages, add input).
- **Assessment:** Combine quizzes, code challenges, or have students extend examples.
- **Deployment:** Ensure all students have MSYS2 and VS Code installed. Advise avoiding spaces in path names.

"@ | Out-File -FilePath (Join-Path $CourseDir "TEACHER_NOTES.md") -Encoding UTF8

Write-Host "C++ course setup complete in $CourseDir"
