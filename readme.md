# Timeline Updater

## Problem Statement
The program intends to create a sequence of times in between two timestamps, each split by `3 minutes and 1 second`.

## Issue
If the End Time does not exactly match the end sequence, it goes into an infinite loop, endlessly writing to the output file.

## Objective
Fix the issue mentioned above, and make sure the edge cases of input are appropriately handled.

***

### Input
The program takes 2 inputs: A `Start Time` and an `End Time`<br>
The input for each time is taken in split fashion (minutes, then seconds, then milliseconds)

### Output
The program writes a file called `ouput.txt` which contains the sequence of times in the inputted time range.

***

### Example
##### Input
```
        How many Starting Time Divisions : 3
        Input 2th Division : 2
        Input 2th Division : 5
        Input 2th Division : 0

        How many Finishing Time Divisions : 3
        Input 2th Division : 14
        Input 2th Division : 8
        Input 2th Division : 0
```

##### Output - ouput.txt
```
'02:05:00
'08:06:00
'11:07:00
'14:08:00
```

***

### Execute Program
> g++ main.cpp; ./a.out
