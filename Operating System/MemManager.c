#include <stdio.h>
#include <size_t.h>
#include <sys/mman.h>


int main(int argc, char **argv)
{
    //link object
    typedef link{
        struct link *next;
        struct link *prev;
        size_t size;
        int memAdress;
        bool free;
    }
    
    //takes in size of memory wanting to be allocated and creates a link that is that size
    void malloc(size_t s){
        
        void *memAdress = mmap(0);
        void *allocateMem = mmap(s)
        
        if (free){
            
            link -> next = NULL;
            link -> free = false;
            link -> size = s;
            link -> memAdress = memAdress + s;
            return link;
        }
        
        
        
    }
    
    // frees the link so that memory is albe to be allocated here
    void free(void link){
        
        if (!free)
            link -> free = true;
    }
    
    // allocates memory that was already allcated without having to free it
    void realloc(void *next n, size_t s){
        link -> next = n;
        link -> size = s;
        link -> free = false;
        link -> memAdress = memAdress + s;
    }
    
    //allocates memory of the next link in the list
    void mallocNext(size_t s, link &next){
        
    }
}
