APP = processkernel
CLEANBROKEN = '1'
LDFLAGS += -I .
DEPS = 
SRC = processkernel.cpp kernels.cpp xbilateralfilterkernel.cpp xbilateralfilterkernel_linux.cpp xbilateralfilterkernel_sinit.cpp xmm2meterskernel.cpp xmm2meterskernel_linux.cpp xmm2meterskernel_sinit.cpp
OBJ = $(SRC:.cpp=.o)
IDIR = include/
CFLAGS=-I $(IDIR)
THPARTY = -I thirdparty/ 
SDK = -I SdkHW/


all: build

build: $(APP)
	
clean:

$(APP): $(OBJ) 
	$(CXX)  -g -O3 -fopenmp  $(LDFLAGS)  -o $@ $^ $(LDLIBS)  $(CFLAGS) $(THPARTY) $(SDK) -fpermissive 

%.o: %.cpp $(DEPS)
	$(CXX)  -g  -O3 -fopenmp $(LDFLAGS) -c -o $@ $< $(LDLIBS)  $(CFLAGS) $(THPARTY) $(SDK) -fpermissive





