void bad()
{
    char * data;
    data = NULL;
    goto source;
source:
    /* POTENTIAL FLAW: Allocate memory on the heap */
    data = new char;
    /* Initialize and make use of data */
    *data = 'A';
    printHexCharLine(*data);
    goto sink;
sink:
    /* POTENTIAL FLAW: No deallocation */
    ; /* empty statement needed for some flow variants */
}
