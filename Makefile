build :
	g++ -o bin/yugi src/main.cpp -lsqlite3
clean : 
	rm /tmp/yugi.db

