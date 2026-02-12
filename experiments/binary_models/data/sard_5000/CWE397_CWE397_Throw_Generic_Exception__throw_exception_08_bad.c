void bad()
{
    if(staticReturnsTrue())
    {
        /* FLAW: throw std::exception class, which is very generic */
        throw exception();
    }
}
