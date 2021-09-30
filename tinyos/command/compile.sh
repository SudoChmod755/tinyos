####  此脚本应该在command目录下执行

# if [[ ! -d ../lib || ! -d ../build ]];then
#    echo "dependent dir don\`t exist!"
#    cwd=$(pwd)
#    cwd=${cwd##*/}
#    cwd=${cwd%/}
#    if [[ $cwd != "command" ]];then
#       echo -e "you\`d better in command dir\n"
#    fi 
#    exit
# fi


##########   以上核心就是下面这三条命令   ##########
gcc -m32 -fno-stack-protector -Wall -c -fno-builtin -W -Wstrict-prototypes -Wmissing-prototypes \
  -Wsystem-headers -I ../lib -o prog_no_arg.o prog_no_arg.c
ld -m elf_i386 -e main prog_no_arg.o ../build/string.o ../build/syscall.o\
  ../build/stdio.o ../build/assert.o -o prog_no_arg
dd if=prog_no_arg of=/home/sz123/soft/bochs-2.6.2/bin/hd60M.img \
  bs=512 count=10 seek=300 conv=notrunc