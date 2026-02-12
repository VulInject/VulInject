void bad()
{
    TwoIntsClass * data;
    data = NULL;
    while(1)
    {
        /* POTENTIAL FLAW: Allocate memory on the heap */
        data = new TwoIntsClass[100];
        /* Initialize and make use of data */
        data[0].intOne = 0;
        data[0].intTwo = 0;
        printIntLine(data[0].intOne);
        printIntLine(data[0].intTwo);
        break;
    }
    while(1)
    {
        /* POTENTIAL FLAW: No deallocation */
        ; /* empty statement needed for some flow variants */
        break;
    }
}
