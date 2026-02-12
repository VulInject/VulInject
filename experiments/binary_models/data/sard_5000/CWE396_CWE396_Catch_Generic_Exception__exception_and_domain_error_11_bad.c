void bad()
{
    if(globalReturnsTrue())
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
        catch (exception &)
        {
            /* FLAW: although we specify a domain_error catch block, this superclass
             * will catch the exception first */
            printLine("exception");
        }
        catch (domain_error &)
        {
            /* Maintenance note: this may generate a compiler warning -- it's on purpose */
            printLine("domain_error");
            return;
        }
        printLine("ok");
    }
}
