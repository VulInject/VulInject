void bad()
{
    long data;
    long &dataRef = data;
    /* POTENTIAL FLAW: Initialize, but do not use data */
    data = 5L;
    {
        long data = dataRef;
        /* FLAW: Do not use the variable */
        /* do nothing */
        ; /* empty statement needed for some flow variants */
    }
}
