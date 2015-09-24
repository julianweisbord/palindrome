palindrome: palindrome.o
	gcc palindrome.c -o palindrome
palindrome.o: palindrome.c
	gcc -c palindrome.c
clean:
	rm -rf *.o *.out *.exe
