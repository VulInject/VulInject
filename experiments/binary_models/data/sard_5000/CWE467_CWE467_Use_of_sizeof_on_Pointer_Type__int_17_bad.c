void CWE467_Use_of_sizeof_on_Pointer_Type__int_17_bad()
{
    int j;
    for(j = 0; j < 1; j++)
    {
        {
            int * badInt = NULL;
            /* FLAW: Using sizeof the pointer and not the data type in malloc() */
            badInt = (int *)malloc(sizeof(badInt));
            if (badInt == NULL) {exit(-1);}
            *badInt = 5;
            printIntLine(*badInt);
            free(badInt);
        }
    }
}
