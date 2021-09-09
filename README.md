# tinyos
操作系统の学习
```
.
├── README.md
└── tinyos
    ├── boot
    │   ├── include
    │   │   └── boot.inc
    │   ├── loader.bin
    │   ├── loader.S
    │   ├── mbr.bin
    │   └── mbr.S
    ├── build
    │   ├── bitmap.o
    │   ├── console.o
    │   ├── debug.o
    │   ├── init.o
    │   ├── interrupt.o
    │   ├── kernel.bin
    │   ├── kernel.map
    │   ├── kernel.o
    │   ├── list.o
    │   ├── main.o
    │   ├── memory.o
    │   ├── print.o
    │   ├── string.o
    │   ├── switch.o
    │   ├── sync.o
    │   ├── thread.o
    │   └── timer.o
    ├── device
    │   ├── console.c
    │   ├── console.h
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
    │   │   └── print.S
    │   ├── stdint.h
    │   ├── string.c
    │   ├── string.h
    │   └── user
    ├── makefile
    └── thread
        ├── switch.S
        ├── sync.c
        ├── sync.h
        ├── thread.c
        └── thread.h

10 directories, 54 files
```        