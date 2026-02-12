void bad()
{
    twoIntsStruct * data;
    data = NULL; /* Initialize data */
    if(globalReturnsTrueOrFalse())
    {
        {
            /* FLAW: data is allocated on the stack and deallocated in the BadSink */
            static twoIntsStruct dataBuffer;
            dataBuffer.intOne = 1;
            dataBuffer.intTwo = 1;
            data = &dataBuffer;
        }
    }
    else
    {
        {
            /* FIX: data is allocated on the heap and deallocated in the BadSink */
            twoIntsStruct * dataBuffer = new twoIntsStruct;
            dataBuffer->intOne = 2;
            dataBuffer->intTwo = 2;
            data = dataBuffer;
        }
    }
    printStructLine(data);
    /* POTENTIAL FLAW: Possibly deallocating memory allocated on the stack */
    delete data;
}
