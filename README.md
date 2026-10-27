# Homework 9 · Menu on the lab

**Week 09 · Functions**  
**Theme:** Name the process  
**Due:** Monday night. This assignment is not due Sunday.


## Demo video (required)

Paste a link to a short video of you running this assignment (tool + code + run).
Work without a working video link is incomplete.

The video is half the grade. Explain each function, what goes in, and what comes back. Then show choice 1, choice 2, and quit.

**Your demo:** https://youtu.be/0OZvDAxs3gE


## What to build

This is Lab 9 plus a menu. One file covers both. If you already wrote `average` and `printSummary` in the lab repo, paste them here. If you start here, do the lab functions in this file first.

Same scores: `{80, 90, 70, 100}`.

- `average` returns a `double` and does not print. If `n == 0`, return `0`.
- `printSummary` only prints. It is `void`.
- `printMenu` only prints the choices. It is `void`.
- The menu repeats until the user types 3.
- Choice 1 stores the average, then calls `printSummary`. A bare `average(scores, N);` prints `Average: 0`.
- Choice 2 calls `high`, which returns the largest `int`. Print that returned value. The walk stays inside `high`. Seed the max from `a[0]`.
- Choice 3 quits.
- `main` reads the choice and calls. `main` does not walk the array.
- In this README, name each function in one line: what goes in, what comes back.

```
1) Average  2) High  3) Quit
Choice: 1
Average: 85
1) Average  2) High  3) Quit
Choice: 2
High: 100
1) Average  2) High  3) Quit
Choice: 3
```

`cout` prints `85` for the value `85.0`.

## Starter

Use `main.cpp`. Put your name in the file-top comment. The menu is sketched. Fill in `average` and `high`.

## Environment

VS 2022 · **GitHub Codespaces** · Replit · library machines

## Deliverables

1. Course-visible GitHub repo
2. README names each function
3. Short demo video (tool + code + run)
4. Canvas links

## Scope fence

No classes. No globals.

## Integrity

- AI = tutor, not ghostwriter
- Fake ownership → zero
- Due: Monday night (not Sunday)
- Discussions (every week): first post Friday, replies Sunday
- Late: course policy (−10%/day unless stated otherwise)

## Rubric (100)

The lab helpers have to be in this file. Homework adds the menu and `high`.

| Criterion | Pts |
|-----------|----:|
| Code submitted that does the work | 50 |
| Video explanation | 50 |

## Getting started

1. Fork this repo on GitHub.
2. Clone your fork.
3. Compile and run:

```bash
g++ -std=c++17 -o program main.cpp && ./program
```

On Windows (Visual Studio), open `main.cpp` and use **Local Windows Debugger**.
4. Record a short demo that shows your tool, your code, and a real run.
5. Paste the video link in the **Demo video** section above.
6. Submit your fork URL on Canvas.
