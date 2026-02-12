void bad()
{
    {
        int * pointer = new int;
        int data = *pointer; /* FLAW: the value pointed to by pointer is undefined */
        delete pointer;
        printIntLine(data);
    }
}
