void CWE563_Unused_Variable__unused_value_struct_17_bad()
{
    int i,j;
    twoIntsStruct data;
    for(i = 0; i < 1; i++)
    {
        /* POTENTIAL FLAW: Initialize, but do not use data */
        data.intOne = 0;
        data.intTwo = 0;
    }
    for(j = 0; j < 1; j++)
    {
        /* POTENTIAL FLAW: Possibly over-write the initial value of data before using it */
        data.intOne = 1;
        data.intTwo = 1;
        printStructLine(&data);
    }
}
