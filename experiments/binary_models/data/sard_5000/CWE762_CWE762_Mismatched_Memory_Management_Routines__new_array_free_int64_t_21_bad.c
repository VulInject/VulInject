void bad()
{
    int64_t * data;
    /* Initialize data*/
    data = NULL;
    /* POTENTIAL FLAW: Allocate memory with a function that requires delete [] to free the memory */
    data = new int64_t[100];
    badStatic = 1; /* true */
    badSink(data);
}
