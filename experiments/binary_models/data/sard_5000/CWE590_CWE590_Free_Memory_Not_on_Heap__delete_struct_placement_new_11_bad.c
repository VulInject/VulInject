void bad()
{
    twoIntsStruct * data;
    data = NULL; /* Initialize data */
    if(globalReturnsTrue())
    {
        {
            /* FLAW: data is allocated on the stack and deallocated in the BadSink */
            char buffer[sizeof(twoIntsStruct)];
            twoIntsStruct * dataBuffer = new(buffer) twoIntsStruct;
            dataBuffer->intOne = 1;
            dataBuffer->intTwo = 1;
            data = dataBuffer;
        }
    }
    printStructLine(data);
    /* POTENTIAL FLAW: Possibly deallocating memory allocated on the stack */
    delete data;
}
