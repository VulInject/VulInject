void bad()
{
    if(GLOBAL_CONST_FIVE==5)
    {
        {
            twoIntsStruct * * pointer = new twoIntsStruct *;
            twoIntsStruct * data = *pointer; /* FLAW: the value pointed to by pointer is undefined */
            delete pointer;
            printIntLine(data->intOne);
            printIntLine(data->intTwo);
        }
    }
}
