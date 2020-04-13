#include "file.hpp"
File::File(){

}
void File::creative_matrix(unsigned int value){
    if(value>0){
        V_data.resize(value);
    }
    for(auto x: V_data){
        x = "";
    }
}
void File::Clear_empty_matrix_value(){
    int size_empty =0;
    for(auto x:V_data){
        if(x=="") size_empty++;
    }
    if(size_empty>1){
        for(int i =0; i<V_data.size(); i++){
            if(V_data[i]==""&&size_empty>1){
                V_data.erase(V_data.begin()+i);
            }
        }
    }
}
File::~File(){

}