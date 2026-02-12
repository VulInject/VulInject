void bad()
{
    int i;
    TwoIntsClass * data;
    data = NULL; /* Initialize data */
    for(i = 0; i < 1; i++)
    {
        {
            /* FLAW: data is allocated on the stack and deallocated in the BadSink */
            static TwoIntsClass dataBuffer;
            dataBuffer.intOne = 1;
            dataBuffer.intTwo = 1;
            data = &dataBuffer;
        }
    }
    printIntLine(data->intOne);
    /* POTENTIAL FLAW: Possibly deallocating memory allocated on the stack */
    delete data;
}
