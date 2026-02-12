void bad()
{
    char * data;
    char * dataBadBuffer = (char *)malloc(sizeof(OneIntClass));
    if (dataBadBuffer == NULL) {exit(-1);}
    char * dataGoodBuffer = (char *)malloc(sizeof(TwoIntsClass));
    if (dataGoodBuffer == NULL) {exit(-1);}
    if(STATIC_CONST_TRUE)
    {
        /* POTENTIAL FLAW: Initialize data to a buffer small than the sizeof(TwoIntsClass) */
        data = dataBadBuffer;
    }
    if(STATIC_CONST_TRUE)
    {
        {
            /* The Visual C++ compiler generates a warning if you initialize the class with ().
             * This will cause the compile to default-initialize the object.
             * See http://msdn.microsoft.com/en-us/library/wewb47ee%28v=VS.100%29.aspx
             */
            /* POTENTIAL FLAW: data may not be large enough to hold a TwoIntsClass */
            TwoIntsClass * classTwo = new(data) TwoIntsClass;
            /* Initialize and make use of the class */
            classTwo->intOne = 5;
            classTwo->intTwo = 10; /* POTENTIAL FLAW: If sizeof(data) < sizeof(TwoIntsClass) then this line will be a buffer overflow */
            printIntLine(classTwo->intOne);
            /* skip printing classTwo->intTwo since that could be a buffer overread */
            free(data);
        }
    }
}
