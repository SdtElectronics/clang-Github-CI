# clang-Github-CI 
CI scripts for clang-format and clang-tidy. 

## Repository layout
* ### .github/workflows
  Contains workflow configurations for Github actions.
* ### scripts
  Contains shell scripts to run code analysis on CI platforms.
* ### examples
  Contains examples to trigger code analysis.

## Notices
* Checks only. Will not alter the commit.
* Checks on changed files only.
* `.clang-format` and `.clang-tidy` files should be placed in the root of the repository. `.clang-format` and `.clang-tidy` files in this repo are just examples. Users should provide their own configurations.

## Credits
Scripts in this repository are extracted from [the CERN Root Project](https://github.com/root-project/root). Use of these scripts should comply with [the ROOT license](https://github.com/root-project/root/blob/master/LICENSE).