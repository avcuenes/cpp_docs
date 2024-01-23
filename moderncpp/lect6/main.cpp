#include <iostream>
#include <string>
#include <vector>



void SaveImage(const std::string& filename, const std::vector<uint8_t>& data,
                int rows, int cols);

void LoadImage(const std::string& filename, std::vector<uint8_t>& data,
                int& rows, int& cols);

bool IsImageEmpty(const std::vector<uint8_t>& data);


int main() {
    std::vector<uint8_t> data;
    
    int rows = 0;
    int cols = 0;

    // Populate image
    LoadImage("lenna.png",data,rows,cols);

    if(IsImageEmpty(data) || (rows == 0 && cols == 0)) {
        std::cerr << "[ERROR] Image not loaded \n";
        return 1;
    }

    // do something with image data ...

    SaveImage("lenna_new.png",data,rows,cols);

    return 0;
}














