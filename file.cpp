#include "file.hpp"
File::File(){

}
void File::creative_matrix(unsigned int value){
    if(value>0){
        V_data.resize(value);
    }
}
File::~File(){

}