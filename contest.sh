#!/bin/bash
xclip -i /home/siddhartha/Desktop/CP/template.cpp;
cd /home/siddhartha/Desktop/CP/codeforces;
mkdir /home/siddhartha/Desktop/CP/codeforces/$* ;
cd /home/siddhartha/Desktop/CP/codeforces/$* 
touch a.cpp b.cpp c.cpp d.cpp e.cpp f.cpp;
xclip -o > a.cpp
xclip -i  a.cpp
xclip -o > b.cpp
xclip -i a.cpp
xclip -o > c.cpp 
xclip -i a.cpp
xclip -o > d.cpp
xclip -i a.cpp
xclip -o > e.cpp
xclip -i a.cpp
xclip -o >  f.cpp
geany a.cpp b.cpp c.cpp d.cpp e.cpp f.cpp;


