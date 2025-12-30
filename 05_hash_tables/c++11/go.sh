clear
if [ -e "a.out" ]; then
	echo "rm a.out"
	rm a.out
fi

g++ j_print_book.cpp
./a.out 