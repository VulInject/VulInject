void CWE401_Memory_Leak__malloc_realloc_int_12_bad()
{
    if(globalReturnsTrueOrFalse())
    {
        {
            int * data = (int *)malloc(100*sizeof(int));
            if (data == NULL) {exit(-1);}
            /* Initialize and make use of data */
            data[0] = 5;
            printIntLine(data[0]);
            /* FLAW: If realloc() fails, the initial memory block will not be freed() */
            data = (int *)realloc(data, (130000)*sizeof(int));
            if (data != NULL)
            {
                /* Reinitialize and make use of data */
                data[0] = 10;
                printIntLine(data[0]);
                free(data);
            }
        }
    }
    else
    {
        {
            int * data = (int *)malloc(100*sizeof(int));
            if (data == NULL) {exit(-1);}
            int * tmpData;
            /* Initialize and make use of data */
            data[0] = 5;
            printIntLine(data[0]);
            tmpData = (int *)realloc(data, (130000)*sizeof(int));
            /* FIX: Ensure realloc() was successful before assigning data to the memory block
            * allocated with realloc() */
            if (tmpData != NULL)
            {
                data = tmpData;
                /* Reinitialize and make use of data */
                data[0] = 10;
                printIntLine(data[0]);
            }
            free(data);
        }
    }
}
