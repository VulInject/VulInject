void bad()
{
    if(5==5)
    {
        {
            TwoIntsClass * pointer = new TwoIntsClass;
            TwoIntsClass data = *pointer; /* FLAW: the value pointed to by pointer is undefined */
            delete pointer;
            printIntLine(data.intOne);
            printIntLine(data.intTwo);
        }
    }
}
