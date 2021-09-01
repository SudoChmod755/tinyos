#include "global.h"
#include "debug.h"

void memset(void* address,uint8_t value,uint32_t size){
    ASSERT(address!=NULL);
    uint8_t* addr =(uint8_t*) address;
    while (size-->0){
        *addr++=value;
    }
}

void memcpy(void* dst,const void* src,uint32_t size){
    ASSERT(dst!=NULL&& src!=NULL);
    uint8_t* _dst =(uint8_t*) dst;
    const uint8_t* _src =(uint8_t*) src;
    while(size-->0){
        *_dst++=*_src++;
    }
}

int memcmp(const void* left,const void* right,uint32_t size){
    ASSERT(left!=NULL&&right!=NULL);
    const char* a=left;
    const char* b=right;
    while(size-->0){
        if(*a!=*b){
            return *a>*b? 1:-1;
        }
        a++;
        b++;
    }
    return 0;
}   

char* strcpy(char* dst_,const char* src_){
    ASSERT(dst_!=NULL&&src_!=NULL);
    char* r=dst_;
    while((*dst_++=*src_++));
    return r;
}


uint32_t strlen(const char* str){
    ASSERT(str!=NULL);
    const char* p =str;
    while(*p++);
    return (p-str-1);
}

int8_t strcmp (const char*a,const char*b){
    ASSERT(a!=NULL&&b!=NULL);
    while(*a!=0&&*a==*b){
        a++;
        b++;
    }
    return *a<*b?-1:*a>*b;
}

char* strchr(const char*str,const uint8_t ch){
    ASSERT(str!=NULL);
    while (*str!=0)
    {
        /* code */
        if(*str==ch){
            return (char*)str;
        }
        str++;
    }
    return NULL;
    
}


char* strrchr(const char* str,const uint8_t ch){
    ASSERT(str!=NULL);
    const  char* last_char=NULL;
    while(*str!=0){
        if(*str==ch){
            last_char=str;
        }
        str++;
    }
    return (char*)last_char;
}

char* strcat(char* dst_,const char* src_){
    ASSERT(dst_!=NULL&&src_!=NULL);
    char* str=dst_;
    while(*str++);
    --str;
    while((*str++=*src_++));
    return dst_;
}

uint32_t strchrs(const char* str,uint8_t ch){
    ASSERT(str!=NULL);
    uint32_t ch_cnt=0;
    const char* p=str;
    while(*p!=0){
        if(*p==ch){
            ch_cnt++;
        }
        p++;
    }
    return ch_cnt;
}