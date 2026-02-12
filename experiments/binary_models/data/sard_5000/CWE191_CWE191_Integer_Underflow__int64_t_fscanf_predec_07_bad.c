void CWE191_Integer_Underflow__int64_t_fscanf_predec_07_bad()
{
    int64_t data;
    data = 0LL;
    if(staticFive==5)
    {
        /* POTENTIAL FLAW: Use a value input from the console */
        fscanf (stdin, "%" SCNd64, &data);
    }
    if(staticFive==5)
    {
        {
            /* POTENTIAL FLAW: Decrementing data could cause an underflow */
            --data;
            int64_t result = data;
            printLongLongLine(result);
        }
    }
}
