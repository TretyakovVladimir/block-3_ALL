#include <iostream>
#include <fstream>
#include <string>
#include <cstring>

class address {
public:
    std::string сity;
    std::string street;
    int number_house;
    int number_apartment;
//public:
//    address(std::string city, std::string street, int number_house, int number_apartment) {}
//    address() {}


};

int main()
{

    setlocale(LC_ALL, "rus");
    std::ifstream rfile("in.txt");
    std::ofstream sfile("out.txt");
    if (sfile.is_open() || rfile.is_open()) {
        std::cout << "file opened succerssfulle!" << std::endl;
    }
       else {
       std::cout << "Error file opened!" << std::endl;
    }
    int N;
    rfile >> N;
    sfile << N << std::endl;
    address* addresses = new address[N];
    for (int i = 0; i < N; i++) {
        rfile >> addresses[i].сity;
        rfile >> addresses[i].street;
        rfile >> addresses[i].number_house;
        rfile >> addresses[i].number_apartment;
        std::cout << addresses[i].сity << ", " << addresses[i].street << ", " << addresses[i].number_house << ", " << addresses[i].number_apartment << std::endl;
       
    }


    for (int i = 0; i < N; i++)
    {
        for (int j = 0; j < N; j++) {
            address temp;
            if (addresses[j].сity > addresses[j + 1].сity) {
                temp = addresses[j];
                addresses[j] = addresses[j + 1];
                addresses[j + 1] = temp;
                std::cout << addresses[j].сity /*<< ", " << addresses[j].street << ", " << addresses[j].number_house << ", " << addresses[j].number_apartment*/ << std::endl;
        }
    }

    for (int i = N - 1; i >= 0; i--) {
       
        sfile << addresses[i].сity << ", Улица " << addresses[i].street << ", Дом " << addresses[i].number_house << ", квартира " << addresses[i].number_apartment << std::endl;

    }
    



    delete[] addresses;
    rfile.close();
    sfile.close();
    return 0;
}

