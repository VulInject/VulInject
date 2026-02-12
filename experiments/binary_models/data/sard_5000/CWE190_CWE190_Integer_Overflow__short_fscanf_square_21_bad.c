void CWE190_Integer_Overflow__short_fscanf_square_21_bad()
{
    short data;
    data = 0;
    /* POTENTIAL FLAW: Use a value input from the console */
    fscanf (stdin, "%hd", &data);
    badStatic = 1; /* true */
    badSink(data);
}
