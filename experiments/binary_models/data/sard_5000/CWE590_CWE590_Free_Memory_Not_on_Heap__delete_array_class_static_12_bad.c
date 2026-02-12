void bad()
{
    TwoIntsClass * data;
    data = NULL; /* Initialize data */
    if(globalReturnsTrueOrFalse())
    {
        {
            /* FLAW: data is allocated on the stack and deallocated in the BadSink */
            static TwoIntsClass dataBuffer[100];
            {
                size_t i;
                for (i = 0; i < 100; i++)
                {
                    dataBuffer[i].intOne = 1;
                    dataBuffer[i].intTwo = 1;
                }
            }
            data = dataBuffer;
        }
    }
    else
    {
        {
            /* FIX: data is allocated on the heap and deallocated in the BadSink */
            TwoIntsClass * dataBuffer = new TwoIntsClass[100];
            {
                size_t i;
                for (i = 0; i < 100; i++)
                {
                    dataBuffer[i].intOne = 1;
                    dataBuffer[i].intTwo = 1;
                }
            }
            data = dataBuffer;
        }
    }
    printIntLine(data[0].intOne);
    /* POTENTIAL FLAW: Possibly deallocating memory allocated on the stack */
    delete [] data;
}
