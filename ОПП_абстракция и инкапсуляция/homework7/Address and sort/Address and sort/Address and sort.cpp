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

    std::string out_address(address address) {
        return address.сity + ", " + address.street + ", " + std::to_string(address.number_house) + ", " + std::to_string(address.number_apartment);
    }
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
        for (int j = 0; j < N - 1; j++) {
            address temp;
            if (addresses[0].out_address(addresses[j]) > addresses[0].out_address(addresses[j + 1]))
            {
                temp = addresses[j];
                addresses[j] = addresses[j + 1];
                addresses[j + 1] = temp;
            }
        }
        sfile << addresses[i].сity << ", Улица " << addresses[i].street << ", Дом " << addresses[i].number_house << ", квартира " << addresses[i].number_apartment << std::endl;
    }


    delete[] addresses;
    rfile.close();
    sfile.close();
    return 0;
}