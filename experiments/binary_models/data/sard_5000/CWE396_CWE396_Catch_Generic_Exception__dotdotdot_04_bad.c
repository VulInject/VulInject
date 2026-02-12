void bad()
{
    if(STATIC_CONST_TRUE)
    {
        try
        {
            if (rand()%2 == 0)
            {
                throw out_of_range("err1");
            }
            if (rand()%2 == 0)
            {
                throw domain_error("err2");
            }
        }
        catch (...)
        {
            /* FLAW: this catches _everything_, STL exceptions or otherwise */
            printLine("exception");
        }
        printLine("ok");
    }
}
