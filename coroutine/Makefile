
CXX := g++

CFLAGS := -std=c++20 -lpthread

TARGET := Generator  Optional  PromiseCtor AsyncCall

all: $(TARGET)

AsyncCall: AsyncCall.o
	$(CXX) $(CFLAGS) -o $@ $^

PromiseCtor: PromiseCtor.o
	$(CXX) $(CFLAGS) -o $@ $^

Optional: Optional.o
	$(CXX) $(CFLAGS) -o $@ $^

Generator: Generator.o
	$(CXX) $(CFLAGS) -o $@ $^

%.o:%.cpp
	$(CXX) $(CFLAGS)  -o $@ -c $^

clean:
	rm *.o  $(TARGET)

