void CWE476_NULL_Pointer_Dereference__struct_34_bad()
{
    twoIntsStruct * data;
    CWE476_NULL_Pointer_Dereference__struct_34_unionType myUnion;
    /* POTENTIAL FLAW: Set data to NULL */
    data = NULL;
    myUnion.unionFirst = data;
    {
        twoIntsStruct * data = myUnion.unionSecond;
        /* POTENTIAL FLAW: Attempt to use data, which may be NULL */
        printIntLine(data->intOne);
    }
}
