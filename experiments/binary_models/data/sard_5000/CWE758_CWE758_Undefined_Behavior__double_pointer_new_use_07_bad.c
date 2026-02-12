void bad()
{
    if(staticFive==5)
    {
        {
            double * * pointer = new double *;
            double * data = *pointer; /* FLAW: the value pointed to by pointer is undefined */
            delete pointer;
            printDoubleLine(*data);
        }
    }
}
