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
            /* FLAW: this catches err1 and err2 */
            printLine("exception");
        }
        printLine("ok");
    }
}
