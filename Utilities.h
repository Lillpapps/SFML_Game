#ifndef UTILITIES_H
#define UTILITIES_H

#define DELETE( ptr ) 
if (ptr != NULL)      
{                     
    delete ptr;       
    ptr = NULL;       
};

#define DELETE_TABLE( ptr )
if (ptr != NULL)            
{                           
    delete[] ptr;           
    ptr = NULL;             
};

#endif UTILITIES_H