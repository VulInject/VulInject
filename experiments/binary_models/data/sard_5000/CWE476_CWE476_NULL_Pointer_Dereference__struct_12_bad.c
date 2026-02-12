void CWE476_NULL_Pointer_Dereference__struct_12_bad()
{
    twoIntsStruct * data;
    twoIntsStruct tmpData;
    if(globalReturnsTrueOrFalse())
    {
        /* POTENTIAL FLAW: Set data to NULL */
        data = NULL;
    }
    else
    {
        /* FIX: Initialize data */
        {
            tmpData.intOne = 0;
            tmpData.intTwo = 0;
            data = &tmpData;
        }
    }
    if(globalReturnsTrueOrFalse())
    {
        /* POTENTIAL FLAW: Attempt to use data, which may be NULL */
        printIntLine(data->intOne);
    }
    else
    {
        /* FIX: Check for NULL before attempting to print data */
        if (data != NULL)
        {
            printIntLine(data->intOne);
        }
        else
        {
            printLine("data is NULL");
        }
    }
}
