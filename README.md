# Monogram-
Project: Monogramming your Pi

# Author
Sofia Arenas sarenas@udel.edu

# About
My project displays my initials using a Raspberry Pi, "SA," in capital letters. It begins by showing the letter "S," waits for one second, and then presents the letter "A" in the same orientation. After waiting for another second, it clears the screen and exits.

# Instructions
To complile my program, use the following command:
cc -o sarenas sarenas.c -L ~/lib -I ~/include -lsense
To run the program, execute:
./sarenas
