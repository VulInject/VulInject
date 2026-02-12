void bad()
{
    struct _twoIntsStruct * data;
    data = NULL;
    badSource(data);
    /* POTENTIAL FLAW: No deallocation */
    ; /* empty statement needed for some flow variants */
}
