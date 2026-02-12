void bad()
{
    TwoIntsClass * data;
    data = NULL; /* Initialize data */
    if(globalReturnsTrue())
    {
        {
            /* FLAW: data is allocated on the stack and deallocated in the BadSink */
            TwoIntsClass * dataBuffer = (TwoIntsClass *)ALLOCA(100*sizeof(TwoIntsClass));
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
