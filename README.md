# 0x00. C - ls

## Resources
_Read or watch:_
* [Everything you need to know to write your own ls](https://intranet.hbtn.io/concepts/71)
* man ls

## Learning objectives
* How does ls work?
* What are all the functions used by ls?

## Requirements
### General
* Allowed editors: vi, vim, emacs
* All your files will be compiled on Ubuntu 14.04 LTS
* Your C programs and functions will be compiled with gcc 4.8.4 using the flags -Wall -Werror -Wextra and -pedantic
* All your files should end with a new line
* A README.md file, at the root of the folder of the project is mandatory
* Your code should use the Betty style. It will be checked using betty-style.pl and betty-doc.pl
* No more than 5 functions per file
* All your header files should be include guarded
* Valgrind should show 0 memory leak and 0 error
* Unless specified otherwise, your program must have the exact same output as ls as well as the exact same error output - except for alignment.

## Allowed Functions and System Calls
* opendir (man 3 opendir)
* readdir (man 3 readdir)
* closedir (man 3 closedir)
* exit (man 3 exit)
* free (man 3 free)
* lstat (man 2 lstat)
* malloc (man 3 malloc)
* perror (man 3 perror)
* write (man 2 write)
* printf (man 3 printf)
* sprintf (man 3 sprintf)
* fprintf (man 3 fprintf)
* readlink (man 2 readlink)
* ctime (man 3 ctime)
* getpwuid (man 3 getpwuid)
* getgrgid (man 3 getgrgid)
* errno (man 3 errno)

## Compilation

```
gcc -Wall -Werror -Wextra -pedantic *.c -o hls
```

## Testing

```
$ ls test
abc  BCD  file  file2  file3  folder1  folder2  folder3
$ ./hls test
abc  BCD  file  file2  file3  folder1  folder2  folder3
$ ls -1
abc
BCD
file
file2
file3
folder1
folder2
folder3
hls
$ ./hls -1
abc
BCD
file
file2
file3
folder1
folder2
folder3
hls
$
```

## Author
Alejandro Rusca Moreno [GitHub](https://github.com/dondropo) | [Twitter](https://twitter.com/don_dropo) | [Linkedin](https://www.linkedin.com/in/alejandro-rusca-moreno-59138b1a1/)
