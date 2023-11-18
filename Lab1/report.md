## Lab1 Report
**PB21050996**
**徐航宇**

#### 1
>Q:请比较汇编文件和反汇编文件，说明它们的区别

A:汇编文件使用助记符和符号名称，而反汇编文件使用机器指令的文本表示形式。


#### 2
>Q:请阅读 software/base-port/Makefile，找到 LIBS 变量的定义，并据此写出编译程序时链接了哪些库

A:LIBS 变量的定义在第24行：
`LIBS 	  += $(BASE_PORT)/base/build/libbase.a $(BASE_PORT)/tool/build/libtool.a`
编译程序时链接了：`/software/baseport/base/build/libbase.a`,`/software/baseport/tool/build/libtool.a`

#### 3:
>Q:software/base-port/Makefile 中也是用了 riscv64-unknown-linux-gnu-ld 工具来完成最后的链接，为什么没有报出找不到 _start 的警告？

A:因为该文件中第23行用`LDFLAGS   += -T $(BASE_PORT)/script/linker.ld --defsym=_pmem_start=0x80000000 --defsym=_entry_offset=0x0 `添加了一些选项，其中就包括对`_pmem_start`与`_entry_offset`的定义。

#### 4:
>你对本次实验有什么意见或建议？

A:环境搭建步骤与课程中心关系不够紧密。较枯燥乏味，容易使学生失去对这门课的兴趣。