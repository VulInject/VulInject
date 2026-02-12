void bad()
{
    TwoIntsClass * data;
    data = reinterpret_cast<TwoIntsClass *>(malloc(10*sizeof(TwoIntsClass)));
    if (data == NULL) {exit(-1);}
    goto source;
source:
    /* POTENTIAL FLAW: Partially initialize data */
    for(int i=0; i<(10/2); i++)
    {
        data[i].intOne = i;
        data[i].intTwo = i;
    }
    goto sink;
sink:
    /* POTENTIAL FLAW: Use data without initializing it */
    for(int i=0; i<10; i++)
    {
        printIntLine(data[i].intOne);
        printIntLine(data[i].intTwo);
    }
}
