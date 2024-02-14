## Writing to binary files

```cpp
#include <fstream> // for the file streams
#include <vector>

using namespace std;


int main() {


    string file_name = "image.dat";

    ofstream file(file_name, ios_base::out| ios_base::binary);

    int rows = 2;
    int cols = 3;

    vector<float> vec(rows*cols);
    
    file.write(reinterpret_cast<char*>(&rows),sizeof(rows));


    return 0;
}
```



Important facts

pros 
- I/O binary files is faster ASCI format
- Size of files is frastically smaller
- There are mayn lib to facilitate serilization

cons 
- Ugly sytanx
- file is not readable by  human
- you need to now format before reading


## Filesystem Library

- Use to perform operations on ;
  - Paths
  - Regular files
  - Directories
- Inspired in boost::filesystem
- Makes your life easier

```cpp
#include <filesystem>

namespace fs = std::filesyste;

int main() {
    fs::create_directories("sandbox")
}

```

























