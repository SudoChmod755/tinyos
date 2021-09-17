# tinyos
操作系统の学习
```
.
├── README.md
└── tinyos
    ├── boot
    │   ├── include
    │   │   └── boot.inc
    │   ├── loader.S
    │   └── mbr.S
    ├── build
    │   ├── bitmap.o
    │   ├── console.o
    │   ├── debug.o
    │   ├── ide.o
    │   ├── init.o
    │   ├── interrupt.o
    │   ├── ioqueue.o
    │   ├── kernel.bin
    │   ├── kernel.map
    │   ├── kernel.o
    │   ├── keyboard.o
    │   ├── list.o
    │   ├── main.o
    │   ├── memory.o
    │   ├── print.o
    │   ├── process.o
    │   ├── stdio-kernel.o
    │   ├── stdio.o
    │   ├── string.o
    │   ├── switch.o
    │   ├── sync.o
    │   ├── syscall-init.o
    │   ├── syscall.o
    │   ├── thread.o
    │   ├── timer.o
    │   └── tss.o
    ├── device
    │   ├── console.c
    │   ├── console.h
    │   ├── ide.c
    │   ├── ide.h
    │   ├── ioqueue.c
    │   ├── ioqueue.h
    │   ├── keyboard.c
    │   ├── keyboard.h
    │   ├── timer.c
    │   └── timer.h
    ├── kernel
    │   ├── debug.c
    │   ├── debug.h
    │   ├── global.h
    │   ├── init.c
    │   ├── init.h
    │   ├── interrupt.c
    │   ├── interrupt.h
    │   ├── kernel.S
    │   ├── main.c
    │   ├── memory.c
    │   └── memory.h
    ├── lib
    │   ├── kernel
    │   │   ├── bitmap.c
    │   │   ├── bitmap.h
    │   │   ├── io.h
    │   │   ├── list.c
    │   │   ├── list.h
    │   │   ├── print.h
    │   │   ├── print.S
    │   │   ├── stdio-kernel.c
    │   │   └── stdio-kernel.h
    │   ├── stdint.h
    │   ├── stdio.c
    │   ├── stdio.h
    │   ├── string.c
    │   ├── string.h
    │   └── user
    │       ├── syscall.c
    │       └── syscall.h
    ├── makefile
    ├── thread
    │   ├── switch.S
    │   ├── sync.c
    │   ├── sync.h
    │   ├── thread.c
    │   └── thread.h
    └── userprog
        ├── process.c
        ├── process.h
        ├── syscall-init.c
        ├── syscall-init.h
        ├── tss.c
        └── tss.h

11 directories, 79 files
```        