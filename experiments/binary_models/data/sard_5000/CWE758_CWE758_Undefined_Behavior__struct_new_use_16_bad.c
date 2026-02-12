void bad()
{
    while(1)
    {
        {
            twoIntsStruct * pointer = new twoIntsStruct;
            twoIntsStruct data = *pointer; /* FLAW: the value pointed to by pointer is undefined */
            delete pointer;
            printIntLine(data.intOne);
            printIntLine(data.intTwo);
        }
        break;
    }
}
