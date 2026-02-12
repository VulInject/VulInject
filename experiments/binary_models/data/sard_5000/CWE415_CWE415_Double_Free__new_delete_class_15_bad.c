void bad()
{
    TwoIntsClass * data;
    /* Initialize data */
    data = NULL;
    switch(6)
    {
    case 6:
        data = new TwoIntsClass;
        /* POTENTIAL FLAW: delete data in the source - the bad sink deletes data as well */
        delete data;
        break;
    default:
        /* INCIDENTAL: CWE 561 Dead Code, the code below will never run */
        printLine("Benign, fixed string");
        break;
    }
    switch(7)
    {
    case 7:
        /* POTENTIAL FLAW: Possibly deleting memory twice */
        delete data;
        break;
    default:
        /* INCIDENTAL: CWE 561 Dead Code, the code below will never run */
        printLine("Benign, fixed string");
        break;
    }
}
