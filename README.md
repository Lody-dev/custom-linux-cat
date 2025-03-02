# Get Next Line

## Overview

The **Get Next Line** project implements a function that reads a line from a file descriptor. This project focuses on file handling, memory allocation, and file I/O in C. 
The function should return one line at a time, including the newline character, until the end of the file.

## Objective

The goal is to implement the following function:

char *get_next_line(int fd);

It reads from the specified file descriptor and returns the next line of text. The function should handle multiple consecutive calls to return lines one at a time, managing memory efficiently.

## Installation

Clone the repository and compile the project using the following commands:

```
git clone git@github.com:Lody-dev/get_next_line.git

cd get_next_line

gcc -Wall -Wextra -Werror -c get_next_line.c get_next_line_utils.c

gcc -o get_next_line get_next_line.o get_next_line_utils.
```

## Files

- **`get_next_line.c`**: Contains the main function to read a line from a file descriptor.
- **`get_next_line_utils.c`**: Utility functions to manage strings, such as `ft_strjoin` and `ft_strlen`.
- **`get_next_line.h`**: Header file containing function prototypes.

## How it Works

1. **Reading Data**: Reads data from a file descriptor into a static buffer until a newline or EOF is encountered.
2. **Dynamic Memory Allocation**: Allocates memory dynamically for each line returned.
3. **Buffer Management**: Keeps track of leftover data for subsequent reads.
4. **Return Value**: Returns the next line or `NULL` when EOF is reached.

## Testing

Test the function by calling `get_next_line` on different file descriptors. Make sure to handle edge cases like empty files or files without newlines.

## Notes

- Always free the memory returned by `get_next_line` to prevent memory leaks.
- Handle file descriptors and potential errors carefully.

## Bonus

In the bonus part of the project, I added support for handling multiple file descriptors, allowing the `get_next_line` function to work with several files simultaneously. This required modifications to properly manage separate buffers for each file descriptor, ensuring that the function works efficiently even when reading from multiple sources concurrently.
