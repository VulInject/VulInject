void bad()
{
    twoIntsStruct * data;
    twoIntsStruct * &dataRef = data;
    data = NULL; /* Initialize data */
    {
        /* FLAW: data is allocated on the stack and deallocated in the BadSink */
        twoIntsStruct * dataBuffer = (twoIntsStruct *)ALLOCA(sizeof(twoIntsStruct));
        dataBuffer->intOne = 1;
        dataBuffer->intTwo = 1;
        data = dataBuffer;
    }
    {
        twoIntsStruct * data = dataRef;
        printStructLine(data);
        /* POTENTIAL FLAW: Possibly deallocating memory allocated on the stack */
        delete data;
    }
}
