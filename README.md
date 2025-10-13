# 🐾 custom-linux-cat

A minimalist reimplementation of the classic **Linux `cat` command**, written in **C**.  
This project focuses on mastering low-level file I/O, dynamic memory allocation, and efficient reading from file descriptors — without relying on high-level libraries.

---

## 🧠 Overview

`custom-linux-cat` reads files line by line and outputs their content to standard output, just like the original `cat` utility.  
It’s built entirely using **system calls** (`open`, `read`, `write`, `close`) and a **custom line-reading function** similar to `get_next_line()`.

This project demonstrates:
- Manual buffer management  
- Working directly with file descriptors  
- Handling end-of-file (EOF) and partial reads  
- Clean and safe memory usage  

---

## ⚙️ Features
- Handles both small and large files efficiently  
- Implements line-by-line reading logic using static buffers  

---


### 🏗️ Build
```bash
make
```

### ▶️ Run
```bash
./custom-linux-cat file.txt
```

---

## 🧰 Technologies
- **Language:** C  
- **System Calls:** `open`, `read`, `write`, `close`  
- **Build System:** Makefile  
- **Platform:** Linux / macOS  

---

## 🎯 Learning Goals
- Practice **low-level file operations** in C  
- Understand **buffered input/output mechanisms**  
- Write **robust, memory-safe, and modular** C code  

---

## 📝 Example Output
```bash
$ ./custom-linux-cat hello.txt
Hello world!
This is a test file.
```
