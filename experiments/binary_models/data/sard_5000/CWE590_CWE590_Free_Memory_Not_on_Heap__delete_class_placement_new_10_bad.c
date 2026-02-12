void bad()
{
    TwoIntsClass * data;
    data = NULL; /* Initialize data */
    if(globalTrue)
    {
        {
            /* FLAW: data is allocated on the stack and deallocated in the BadSink */
            char buffer[sizeof(TwoIntsClass)];
            TwoIntsClass * dataBuffer = new(buffer) TwoIntsClass;
            dataBuffer->intOne = 2;
            dataBuffer->intTwo = 2;
            data = dataBuffer;
        }
    }
    printIntLine(data->intOne);
    /* POTENTIAL FLAW: Possibly deallocating memory allocated on the stack */
    delete data;
}
