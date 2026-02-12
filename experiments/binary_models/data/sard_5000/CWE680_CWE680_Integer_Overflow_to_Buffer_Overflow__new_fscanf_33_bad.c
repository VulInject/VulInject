void bad()
{
    int data;
    int &dataRef = data;
    /* Initialize data */
    data = -1;
    /* POTENTIAL FLAW: Read data from the console using fscanf() */
    fscanf(stdin, "%d", &data);
    {
        int data = dataRef;
        {
            size_t dataBytes,i;
            int *intPointer;
            /* POTENTIAL FLAW: dataBytes may overflow to a small value */
            dataBytes = data * sizeof(int); /* sizeof array in bytes */
            intPointer = (int*)new char[dataBytes];
            for (i = 0; i < (size_t)data; i++)
            {
                intPointer[i] = 0; /* may write beyond limit of intPointer if integer overflow occured above */
            }
            printIntLine(intPointer[0]);
            delete [] intPointer;
        }
    }
}
