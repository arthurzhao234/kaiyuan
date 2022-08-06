+ cc kern/init/init.c
kern/init/init.c:95:1: warning: \u2018lab1_switch_test\u2019 defined but not used [-Wunused-function]
 lab1_switch_test(void) {
 ^
+ cc kern/libs/readline.c
+ cc kern/libs/stdio.c
+ cc kern/debug/kdebug.c
kern/debug/kdebug.c:251:1: warning: \u2018read_eip\u2019 defined but not used [-Wunused-function]
 read_eip(void) {
 ^
+ cc kern/debug/kmonitor.c
+ cc kern/debug/panic.c
+ cc kern/driver/clock.c
+ cc kern/driver/console.c
+ cc kern/driver/intr.c
+ cc kern/driver/picirq.c
+ cc kern/trap/trap.c
kern/trap/trap.c:14:13: warning: \u2018print_ticks\u2019 defined but not used [-Wunused-function]
 static void print_ticks() {
             ^
kern/trap/trap.c:30:26: warning: \u2018idt_pd\u2019 defined but not used [-Wunused-variable]
 static struct pseudodesc idt_pd = {
                          ^
+ cc kern/trap/trapentry.S
+ cc kern/trap/vectors.S
+ cc kern/mm/pmm.c
+ cc libs/printfmt.c
+ cc libs/string.c
+ ld bin/kernel
+ cc boot/bootasm.S
+ cc boot/bootmain.c
+ cc tools/sign.c
+ ld bin/bootblock
'obj/bootblock.out' size: 472 bytes
build 512 bytes boot sector: 'bin/bootblock' success! //这边就建立了一个大小为512byte的引导扇区
\u8bb0\u5f55\u4e8610000+0 \u7684\u8bfb\u5165
\u8bb0\u5f55\u4e8610000+0 \u7684\u5199\u51fa
5120000\u5b57\u8282(5.1 MB)\u5df2\u590d\u5236\uff0c0.0831158 \u79d2\uff0c61.6 MB/\u79d2
\u8bb0\u5f55\u4e861+0 \u7684\u8bfb\u5165
\u8bb0\u5f55\u4e861+0 \u7684\u5199\u51fa
512\u5b57\u8282(512 B)\u5df2\u590d\u5236\uff0c0.000134308 \u79d2\uff0c3.8 MB/\u79d2
\u8bb0\u5f55\u4e86138+1 \u7684\u8bfb\u5165
\u8bb0\u5f55\u4e86138+1 \u7684\u5199\u51fa
70775\u5b57\u8282(71 kB)\u5df2\u590d\u5236\uff0c0.000440035 \u79d2\uff0c161 MB/\u79d2
shiyanlou:lab1/ (master) $ ls                                         [6:36:55]
bin  boot  kern  libs  Makefile  obj  q.log  tools
shiyanlou:lab1/ (master) $ cd obj                                     [6:37:10]
shiyanlou:obj/ (master) $ ls                                          [6:37:14]
boot           bootblock.o    kern        kernel.sym  sign
bootblock.asm  bootblock.out  kernel.asm  libs
shiyanlou:obj/ (master) $ cd ..                                       [6:37:19]
shiyanlou:lab1/ (master) $ ls                                         [6:37:28]
bin  boot  kern  libs  Makefile  obj  q.log  tools
shiyanlou:lab1/ (master) $ make qemu                                  [6:37:31]
(THU.CST) os is loading ...

Special kernel symbols:
  entry  0x00100000 (phys)
  etext  0x00103209 (phys)
  edata  0x0010da16 (phys)
  end    0x0010ed20 (phys)
Kernel executable memory footprint: 60KB
++ setup timer interrupts
