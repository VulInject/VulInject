void CWE121_Stack_Based_Buffer_Overflow__CWE131_loop_32_bad()
{
    int * data;
    int * *dataPtr1 = &data;
    int * *dataPtr2 = &data;
    data = NULL;
    {
        int * data = *dataPtr1;
        /* FLAW: Allocate memory without using sizeof(int) */
        data = (int *)ALLOCA(10);
        *dataPtr1 = data;
    }
    {
        int * data = *dataPtr2;
        {
            int source[10] = {0};
            size_t i;
            /* POTENTIAL FLAW: Possible buffer overflow if data was not allocated correctly in the source */
            for (i = 0; i < 10; i++)
            {
                data[i] = source[i];
            }
            printIntLine(data[0]);
        }
    }
}
