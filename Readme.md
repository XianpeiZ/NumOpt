environment config
------------------
Our program run on ubuntu16.04 with python3.6, you can install python3.6 and pip3 on ubuntu16.04 with:

    sudo add-apt-repository ppa:jonathonf/python-3.6
    sudo apt-get update
    sudo apt-get install python3.6
    sudo apt install curl
    curl https://bootstrap.pypa.io/get-pip.py -o get-pip.py
    sudo python3.6 get-pip.py

install antlr4 and python packege antlr4-python3-runtime :

    sudo apt install antlr4
    sudo pip3 install antlr4-python3-runtime==4.7.1
    sudo pip3 install sympy==1.1.1


install clang

    sudo apt install clang


install iRRAM
安装iRRAM之前，先运行以下命令

    sudo apt install m4
    sudo apt-get install autoconf automake libtool

download the [iRRAM library](http://irram.uni-trier.de/irram-files/iRRAM_2013_01.tar.bz2) and [gmp-5.1.3](ftp://ftp.gmplib.org/pub/gmp/gmp-5.1.3.tar.bz2) and [mpfr-3.1.2](https://www.mpfr.org/mpfr-3.1.2/mpfr-3.1.2.tar.bz2).


first, install gmp-5.1.3

    tar -zxvf gmp-5.1.3.tar.bz2
    cd gmp-5.1.3
    ./configure
    make
    sudo make install

然后安装mpfr-3.1.2

    tar -zxvf mpfr-3.1.2.tar.bz2
    cd mpfr-3.1.2
    ./configure
    make
    sudo make install

最后安装iRRAM

    进入解压后得到的iRRAM文件夹
    sudo ./QUICKINSTALL_run_me
    按照提示，选择1选项， use versions of GMP and MPFR already installed on your system, 即可完成安装

最后检查代码的Scipt/makefile中irram路径，Source/backend/config.py中irram_home路径，herbie_report.py和irram_report.py中save_makefile函数中irram路径是否与安装位置一致。
默认的irram安装位置是iRRAM/installed, 王怀瑾虚拟机和代码的irram路径都是iRRAM
    

run
---
run command in ./Script/:

    sh bench_eval.sh

results
-------
you can get some result files of each case in ./Result/casename, in which there is a file named error.rd that record the errors of the case with optimization and without. 

The optimization generate a new code for the cases, which are in Banary/OptimizedCode/.

What in directory herbieOptimized and irramOptimized are the codes optimized by our program, by herbie and original. The corresponding executable file and points file are stored in Banary/obj/.
