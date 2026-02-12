void bad()
{
    int data;
    /* Initialize data */
    data = 0;
    badSource(data);
    {
        /* POTENTIAL FLAW: if (data*data) > INT_MAX, this will overflow */
        int result = data * data;
        printIntLine(result);
    }
}
