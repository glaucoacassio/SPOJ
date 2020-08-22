#include <cstdint>
#include <cstdlib>
#include <cstdio>
#include <unistd.h>
#include <sys/mman.h>
#include <sys/stat.h>
#include <bits/stdc++.h>
 
inline char* stdin_ptr()
{
    struct stat sb;
    (void)fstat( STDIN_FILENO, &sb );
    return (char*)mmap (0, sb.st_size, PROT_READ, MAP_SHARED | MAP_POPULATE, STDIN_FILENO, 0);
}
inline int fast_atoi(char*& data)
{
    int val = 0;
 
    do
    {
        val = val*10 + *data++ - '0';
    } while(*data & (1<<4)); // '\n' doesn't have that bit
    
    ++data;
    return val;
}
 
int main()
{
    char* ptr = stdin_ptr();
    
    int int_count = fast_atoi(ptr);
    int k = fast_atoi(ptr);
    
    int count = 0;
    while (*ptr)
    {
        if (fast_atoi(ptr) % k == 0)
        	++count;
    }
        
    printf("%d", count);
} 
