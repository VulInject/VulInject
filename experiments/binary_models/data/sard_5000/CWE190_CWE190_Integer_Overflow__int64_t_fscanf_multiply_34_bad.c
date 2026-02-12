void CWE190_Integer_Overflow__int64_t_fscanf_multiply_34_bad()
{
    int64_t data;
    CWE190_Integer_Overflow__int64_t_fscanf_multiply_34_unionType myUnion;
    data = 0LL;
    /* POTENTIAL FLAW: Use a value input from the console */
    fscanf (stdin, "%" SCNd64, &data);
    myUnion.unionFirst = data;
    {
        int64_t data = myUnion.unionSecond;
        if(data > 0) /* ensure we won't have an underflow */
        {
            /* POTENTIAL FLAW: if (data*2) > LLONG_MAX, this will overflow */
            int64_t result = data * 2;
            printLongLongLine(result);
        }
    }
}
