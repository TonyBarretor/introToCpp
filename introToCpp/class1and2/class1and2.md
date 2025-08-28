Computers understands x86 language by Intel

#Assambly Language
    close to machine language that is 0 and 1
    Then develoop the object oriented languages (eiaser to solvem problems)

    Customer as an object
    
    Hills sever for assigments

    cygwin.com - simulator a Unix system

    g++ convert to x86 so the CPU can understand the instrutctions

    #TRANSFER FILES IN MAC - use :
    sftp (user)

    get (file)

    put (file) - to put in the remote server

    OBJECT FILE AND EXECUTABLE FILES

    OBJECT FILE
        g++ -c hello.cpp , this creates the file.o that has x86 instructions but i can not run it. Compile faster

        g++ hello.o (this is linked), that creates the a.exe file that you can execute

        cpp can be edited in any text editor

        why do we need the object file?
            Its better to work with many files, bc you only change the object file you want to modify and then do the g++ for the object files and your execution would be faster bc is in x86. Also modifies the file even if is connected to the other files.

        WHEN YOU LINKED
            It creates the executable in one file, it also checkes if you have the main, the body and the syntax

        MAKEFILE UTILITY (you can use this to execute multiple files) Targeting, depedencies and tabspaces
        If the depedencies changes It executes the command

        hello.exe: hello.o
            g++ -o hello.exe hello.o

        hello.o: hello.cpp
            g++ -c hello.cpp

        C++11 is the more important

        In windows the executable are .exe, it couldnt have any extension

        CLASS 2

        int main is the point to start to execute the program

        Delcaration has the signature thas specifies what the function is goin to do

         



        