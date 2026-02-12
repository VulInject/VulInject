void bad()
{
    if(GLOBAL_CONST_FIVE==5)
    {
        {
            int64_t * pointer = new int64_t;
            int64_t data = *pointer; /* FLAW: the value pointed to by pointer is undefined */
            delete pointer;
            printLongLongLine(data);
        }
    }
}
