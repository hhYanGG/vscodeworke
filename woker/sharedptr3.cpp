//util/sharedptr3.cpp
#include <memory>
#include <mmc.h>
#include <fcntl.h>
#include <unistd.h>
#include <cstring>
#include <cerrno>
#include <string>
#include <iostream>

class SharedMemoryDetacher{
    public:
        void operator() (int* p){
            std::cout << "unlink /tmp1234" << std::endl;
            if(shm_unlink("/tmp1234") != 0){
                std::cerr << "opps shm-unlink() failed" << std::endl;
            }
        }

};

std::shared_ptr<int> getSharedIntMemory (int num)
{
    void* mem;
    int shmfd = shm_open("/tmp1234",O_CREAT | O_RDWR, S_IRWXU | S_IRWXG);
     if(shmfd < 0){
         throw std::string(strerror(errno));
     }
}