void CWE191_Integer_Underflow__int64_t_fscanf_postdec_34_bad()
{
    int64_t data;
    CWE191_Integer_Underflow__int64_t_fscanf_postdec_34_unionType myUnion;
    data = 0LL;
    /* POTENTIAL FLAW: Use a value input from the console */
    fscanf (stdin, "%" SCNd64, &data);
    myUnion.unionFirst = data;
    {
        int64_t data = myUnion.unionSecond;
        {
            /* POTENTIAL FLAW: Decrementing data could cause an underflow */
            data--;
            int64_t result = data;
            printLongLongLine(result);
        }
    }
}
