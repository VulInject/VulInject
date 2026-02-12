void bad()
{
    char * data;
    /* Initialize data*/
    data = NULL;
    /* POTENTIAL FLAW: Allocate memory with a function that requires free() to free the memory */
    data = (char *)malloc(100*sizeof(char));
    if (data == NULL) {exit(-1);}
    badStatic = 1; /* true */
    badSink(data);
}
