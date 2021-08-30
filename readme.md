# Timeline Updater

## Problem Statement
The program intends to create a sequence of times in between two timestamps, each split by `3 minutes and 1 second`.

## Issue
If the End Time does not exactly match the end sequence, it goes into an infinite loop, endlessly writing to the output file.

## Objective
Fix the issue mentioned above, and make sure the edge cases of input are appropriately handled.

<br>

### Input
The program takes 2 inputs: A `Start Time` and an `End Time`
The input for each time is taken in split fashion (hours, then minutes, then seconds)

### Output
The program writes a file called `ouput.txt` which contains the sequence of times in the inputted time range.