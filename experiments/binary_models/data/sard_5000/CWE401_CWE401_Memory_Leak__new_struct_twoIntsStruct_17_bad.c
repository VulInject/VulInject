void bad()
{
    int i,j;
    struct _twoIntsStruct * data;
    data = NULL;
    for(i = 0; i < 1; i++)
    {
        /* POTENTIAL FLAW: Allocate memory on the heap */
        data = new struct _twoIntsStruct;
        /* Initialize and make use of data */
        data->intOne = 0;
        data->intTwo = 0;
        printStructLine((twoIntsStruct *)data);
    }
    for(j = 0; j < 1; j++)
    {
        /* POTENTIAL FLAW: No deallocation */
        ; /* empty statement needed for some flow variants */
    }
}
