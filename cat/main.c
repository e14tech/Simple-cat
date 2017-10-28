//
//  main.c
//  cat
//
//  Created by Joshua Ernzen on 10/27/17.
//  Copyright © 2017 Joshua Ernzen. All rights reserved.
//

#include <stdio.h>

int main(int argc, const char * argv[])
{
    char FileData;
    
    FILE *fp = NULL;
    
    if(argc != 2)
    {
        fprintf(stderr, "Please enter one file name.\n");
        return 1;
    }
    
    fp = fopen(argv[1], "r");
    
    if(fp == NULL)
    {
        fprintf(stderr, "No such file found.\n");
        return 1;
    }
    
    FileData = getc(fp);
    while(FileData != EOF)
    {
        printf("%c", FileData);
        FileData = getc(fp);
    }
    
    fclose(fp);
    
    return 0;
}
