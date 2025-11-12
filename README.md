┌──(dmitriy㉿kali)-[~/my_repoz/battleship_game]
└─$ mkdir build && cd build
cmake ..
make
./battleship 
-- The C compiler identification is GNU 15.2.0
-- The CXX compiler identification is GNU 15.2.0
-- Detecting C compiler ABI info
-- Detecting C compiler ABI info - done
-- Check for working C compiler: /usr/bin/cc - skipped
-- Detecting C compile features
-- Detecting C compile features - done
-- Detecting CXX compiler ABI info
-- Detecting CXX compiler ABI info - done
-- Check for working CXX compiler: /usr/bin/c++ - skipped
-- Detecting CXX compile features
-- Detecting CXX compile features - done
-- Configuring done (0.7s)
-- Generating done (0.0s)
-- Build files have been written to: /home/dmitriy/my_repoz/battleship_game/build
[ 33%] Building CXX object CMakeFiles/battleship.dir/src/main.cpp.o
[ 66%] Building CXX object CMakeFiles/battleship.dir/src/Board.cpp.o
[100%] Linking CXX executable battleship
[100%] Built target battleship
   0  1  2  3  4  5  6  7  8  9 
 0  ~  ~  ~  ~  ~  ~  ~  ~  ~  ~ 
 1  ~  ~  ~  ~  ~  ~  ~  ~  ~  ~ 
 2  ~  ~  ~  S  ~  ~  ~  ~  ~  ~ 
 3  ~  ~  ~  ~  ~  ~  ~  ~  ~  ~ 
 4  ~  ~  ~  ~  ~  ~  ~  ~  ~  ~ 
 5  ~  ~  ~  ~  ~  ~  ~  X  ~  ~ 
 6  ~  ~  ~  ~  ~  ~  ~  ~  ~  ~ 
 7  ~  ~  ~  ~  ~  ~  ~  ~  ~  ~ 
 8  ~  ~  ~  ~  ~  ~  ~  ~  ~  ~ 
 9  ~  ~  ~  ~  ~  ~  ~  ~  ~  ~ 

┌──(dmitriy㉿kali)-[~/my_repoz/battleship_game/build]