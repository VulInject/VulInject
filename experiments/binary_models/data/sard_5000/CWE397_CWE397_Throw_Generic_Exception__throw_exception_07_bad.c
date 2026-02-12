void bad()
{
    if(staticFive==5)
    {
        /* FLAW: throw std::exception class, which is very generic */
        throw exception();
    }
}
