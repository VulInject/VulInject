void bad()
{
    if(STATIC_CONST_FIVE==5)
    {
        /* FLAW: throw std::exception class, which is very generic */
        throw exception();
    }
}
