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
    │   ├── assert.o
    │   ├── bitmap.o
    │   ├── buildin_cmd.o
    │   ├── console.o
    │   ├── debug.o
    │   ├── dir.o
    │   ├── exec.o
    │   ├── file.o
    │   ├── fork.o
    │   ├── fs.o
    │   ├── ide.o
    │   ├── init.o
    │   ├── inode.o
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
    │   ├── shell.o
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
    ├── command
    │   ├── compile.sh
    │   ├── prog_no_arg
    │   ├── prog_no_arg.c
    │   └── prog_no_arg.o
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
    ├── fs
    │   ├── dir.c
    │   ├── dir.h
    │   ├── file.c
    │   ├── file.h
    │   ├── fs.c
    │   ├── fs.h
    │   ├── inode.c
    │   ├── inode.h
    │   └── super_block.h
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
    │       ├── assert.c
    │       ├── assert.h
    │       ├── syscall.c
    │       └── syscall.h
    ├── makefile
    ├── shell
    │   ├── buildin_cmd.c
    │   ├── buildin_cmd.h
    │   ├── shell.c
    │   └── shell.h
    ├── thread
    │   ├── switch.S
    │   ├── sync.c
    │   ├── sync.h
    │   ├── thread.c
    │   └── thread.h
    └── userprog
        ├── exec.c
        ├── exec.h
        ├── fork.c
        ├── fork.h
        ├── process.c
        ├── process.h
        ├── syscall-init.c
        ├── syscall-init.h
        ├── tss.c
        └── tss.h

14 directories, 111 files
```        