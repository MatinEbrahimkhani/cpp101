# Teacher Notes

## Lesson order and pacing

| # | Lesson | Suggested time | Core objective |
|---|--------|-----------------|-----------------|
| 00 | Playground | 5 min | Immediate payoff, zero pressure |
| 01 | Hello World | 30 min | Program structure, compiling |
| 02 | Variables | 45 min | Types, int-vs-float division |
| 03 | Input/Output | 30-45 min | cin, interactive programs |
| 04 | Conditionals | 45 min | Decision-making, && / \|\| |
| 05 | Loops | 60 min | for/while, modulo, FizzBuzz |
| 06 | Functions | 45-60 min | Decomposition, return values |
| 07 | Vectors | 45-60 min | Growable lists, iteration |
| 08 | Strings | 45 min | Text, getline vs cin >> |
| 09 | Structs | 45 min | Custom types, vectors of structs |
| 10 | File I/O | 45 min | Persistence, ifstream/ofstream |
| 11 | Simple Algorithm | 60 min | Search, sort, recursion |
| 12 | Debugging | 45-60 min | Reading errors, using the debugger |
| 13 | Capstone | 1-2 sessions | Everything, combined into a game |

Adjust freely - a motivated 15-year-old might fly through 03-06 in
one sitting, or want to linger on loops for an extra session. Follow
their energy over the clock.

## Teaching philosophy for this course

- **Every lesson produces visible output when run as-is.** A
  compile-and-nothing-happens lesson feels like failure even when
  the code is "correct." Never leave a lesson's main() calling
  nothing (this was fixed in this revision - Lesson 02 previously
  had all its example calls commented out).
- **Personalize constantly.** Use the student's own name, friends,
  and interests in examples wherever you can - it's already woven
  through this course (Amirreza, Sadra, Mina) and it works. Swap in
  whatever names/interests fit your student.
- **Let them break things on purpose.** Lesson 12 exists because
  debugging confidence, not perfect first-try code, is what keeps
  someone enrolled in this hobby for years.
- **The capstone is the point.** Everything before Lesson 13 is in
  service of that final "I built a real game" moment. Don't skip it,
  and don't let them see the source until they've played it once.

## Common pitfalls by lesson

- **02:** `4/3` style integer division silently truncating to `1`.
  Now demonstrated explicitly in `divisionTrap()` - make sure the
  student can explain WHY before moving on, not just that casting to
  double "fixes" it.
- **03:** `std::cin >> name` stopping at the first space. Don't
  over-explain it here - the fix (getline) has its own payoff in
  Lesson 08.
- **05:** Off-by-one loop bounds (`<=` vs `<`), and forgetting to
  update the loop variable, causing an infinite loop.
- **07/09:** Index out of range on a vector - C++ won't stop you,
  it'll just read garbage memory. Worth demonstrating once, safely.
- **10:** Forgetting to check `is_open()` before reading/writing.
- **12:** This lesson exists specifically to drill the previous four
  pitfalls plus `=` vs `==`. Make them predict the bug before
  running it.

## Assessment ideas

- Have them explain a bug out loud before fixing it - articulating
  the "why" is a stronger signal of understanding than the fix
  itself.
- The EXERCISES sections are meant to be done, not skimmed -
  spot-check a couple per lesson rather than requiring all of them
  every time.
- The capstone project (13) is the natural final assessment: working
  code, a saved high score, and one of the "make it your own" ideas
  implemented is a great bar for "finished this course."

## Deployment / environment

- Windows students: MSYS2 + `mingw-w64-ucrt-x86_64-gcc`, add
  `ucrt64/bin` to PATH. Avoid spaces in the project's folder path.
- `./run.sh <lesson_name>` works cross-platform (including inside
  the MSYS2 shell) and doesn't depend on VS Code being configured
  correctly - useful as a fallback when a student's editor setup
  breaks.
- `.vscode/tasks.json` and `launch.json` are committed on purpose
  (most of `.vscode/` is gitignored, but these two files are shared)
  so a fresh clone can Ctrl+Shift+B / F5 immediately.
