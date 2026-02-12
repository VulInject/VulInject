void bad()
{
    if(STATIC_CONST_FIVE==5)
    {
        {
            int * * pointer = new int *;
            int * data = *pointer; /* FLAW: the value pointed to by pointer is undefined */
            delete pointer;
            printIntLine(*data);
        }
    }
}
