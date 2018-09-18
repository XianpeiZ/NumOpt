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

    sudo apt install antlr4=4.7.1
    sudo pip3 install antlr4-python3-runtime==4.7.1
    sudo pip3 install sympy

download the [iRRAM library](http://irram.uni-trier.de/download/) and install it. And then check the irram_home path in Source/backend/config.py and method save_makefile in Source/backend/herbie_report.py and Source/backend/irram_report.py, to make sure the path of iRRAM correct 

run
---
run command in ./Script/:

    sh testcases.sh

results
-------
you can get some result files of each case in ./Result/casename, in which there is a file named error.rd that record the errors of the case with optimization and without. 

The optimization generate a new code for the cases, which are in Banary/OptimizedCode/.

What in directory herbieOptimized and irramOptimized are the codes optimized by our program, by herbie and original. The corresponding executable file and points file are stored in Banary/obj/.
