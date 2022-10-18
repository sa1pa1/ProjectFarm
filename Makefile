all: WateringCan.o Fertiliser.o GardeningHoe.o Player.o Inventory.o Potato.o Tomato.o Cabbage.o Carrot.o main

WateringCan.o: WateringCan.cpp
	g++ -c WateringCan.cpp

Fertiliser.o: Fertiliser.cpp
	g++ -c Fertiliser.cpp

GardeningHoe.o: GardeningHoe.cpp
	g++ -c GardeningHoe.cpp

Player.o: Player.cpp
	g++ -c Player.cpp

Inventory.o: Inventory.cpp
	g++ -c Inventory.cpp

Potato.o: Potato.cpp
	g++ -c Potato.cpp

Tomato.o: Tomato.cpp
	g++ -c Tomato.cpp

Cabbage.o: Cabbage.cpp
	g++ -c Cabbage.cpp

Carrot.o: Carrot.cpp
	g++ -c Carrot.cpp

main: WateringCan.h WateringCan.o Fertiliser.h Fertiliser.o GardeningHoe.h GardeningHoe.o Player.h Player.o Inventory.h Inventory.o Potato.h Potato.o Tomato.h Tomato.o Cabbage.h Cabbage.o Carrot.h Carrot.o main.cpp
	g++ -o main WateringCan.o Fertiliser.o GardeningHoe.o Player.o Inventory.o Potato.o Tomato.o Cabbage.o Carrot.o main.cpp

run:
	main

clean:
	rm -f main *.o

