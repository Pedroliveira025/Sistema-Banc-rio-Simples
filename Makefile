# Makefile for LP1 - Sistema Bancário Simples
# Created by Pedro Oliveira de Sousa 15/05/2025

PROG = simpleBankingSystem
CXX = g++
CXXFLAGS = -Wall -pedantic -O3
SRC_DIR = .
OBJS = $(SRC_DIR)/main.o $(SRC_DIR)/client.o $(SRC_DIR)/bankaccount.o

all: $(PROG)

$(PROG): $(OBJS)
	$(CXX) $(CXXFLAGS) -o $@ $^

$(SRC_DIR)/main.o: $(SRC_DIR)/main.cpp $(SRC_DIR)/client.hpp $(SRC_DIR)/bankaccount.hpp
	$(CXX) $(CXXFLAGS) -c $< -o $@

$(SRC_DIR)/client.o: $(SRC_DIR)/client.cpp $(SRC_DIR)/client.hpp
	$(CXX) $(CXXFLAGS) -c $< -o $@

$(SRC_DIR)/bankaccount.o: $(SRC_DIR)/bankaccount.cpp $(SRC_DIR)/bankaccount.hpp $(SRC_DIR)/client.hpp
	$(CXX) $(CXXFLAGS) -c $< -o $@

clean:
	rm -f $(PROG) $(OBJS)

.PHONY: all clean
