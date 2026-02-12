void bad()
{
    twoIntsStruct * data;
    data = NULL; /* Initialize data */
    if(5==5)
    {
        {
            /* FLAW: data is allocated on the stack and deallocated in the BadSink */
            twoIntsStruct * dataBuffer = (twoIntsStruct *)ALLOCA(sizeof(twoIntsStruct));
            dataBuffer->intOne = 1;
            dataBuffer->intTwo = 1;
            data = dataBuffer;
        }
    }
    printStructLine(data);
    /* POTENTIAL FLAW: Possibly deallocating memory allocated on the stack */
    delete data;
}
