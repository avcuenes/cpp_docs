#include <iostream>
#include <string>
#include <vector>

class Image {
    public:
        Image() = default;
        explicit Image(const std::string& filename);
        ~Image();

        bool IsImageEmpty() const;

        void SaveImage(const std::string& filename);

    private:
        std::vector<uint8_t> data_;
        int rows_ = 0;
        int cols_ = 0;
}


int main() {
    Image img("lenna.png")

    if (img.empty()){
        std::cerr << "error";
        return 1
    }
    img.SaveImage("lennanew.png");

    return 0;
}














