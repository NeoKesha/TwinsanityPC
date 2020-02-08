# TwinsanityPC
TwinsanityPC project

Code generated with Ghidra, polished by Smartkin

TwinsanityPC is a small experiment on running Twinsanity decompiled code on PC architecture by, step by step, fixing internal decompiller errors and rewriting external calls, like IO and etc.

Development goes in tree-like style:

1) Take a Method
2) Find all methods it depends on and uncomment them
3) Comment their dependencies
4) Fix code in said Method
5) Once fixed, pick up one of methods it depends on and repeat step 1
