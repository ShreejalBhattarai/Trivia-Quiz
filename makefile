output: QuizDriver.o Question.o
	g++ QuizDriver.o Question.o -o output

QuizDriver.o: QuizDriver.cpp
	g++ -c QuizDriver.cpp

Question.o: Question.cpp
	g++ -c Question.cpp

clean:
	rm *.o output