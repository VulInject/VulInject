void bad()
{
    struct _twoIntsStruct * data;
    data = NULL;
    if(globalReturnsTrueOrFalse())
    {
        /* POTENTIAL FLAW: Allocate memory on the heap */
        data = new struct _twoIntsStruct;
        /* Initialize and make use of data */
        data->intOne = 0;
        data->intTwo = 0;
        printStructLine((twoIntsStruct *)data);
    }
    else
    {
        /* FIX: Use memory allocated on the stack */
        struct _twoIntsStruct dataGoodBuffer;
        data = &dataGoodBuffer;
        /* Initialize and make use of data */
        data->intOne = 0;
        data->intTwo = 0;
        printStructLine((twoIntsStruct *)data);
    }
    if(globalReturnsTrueOrFalse())
    {
        /* POTENTIAL FLAW: No deallocation */
        ; /* empty statement needed for some flow variants */
    }
    else
    {
        /* FIX: Deallocate memory */
        delete data;
    }
}
