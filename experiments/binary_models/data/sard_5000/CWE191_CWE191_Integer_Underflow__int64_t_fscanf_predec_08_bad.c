void CWE191_Integer_Underflow__int64_t_fscanf_predec_08_bad()
{
    int64_t data;
    data = 0LL;
    if(staticReturnsTrue())
    {
        /* POTENTIAL FLAW: Use a value input from the console */
        fscanf (stdin, "%" SCNd64, &data);
    }
    if(staticReturnsTrue())
    {
        {
            /* POTENTIAL FLAW: Decrementing data could cause an underflow */
            --data;
            int64_t result = data;
            printLongLongLine(result);
        }
    }
}
