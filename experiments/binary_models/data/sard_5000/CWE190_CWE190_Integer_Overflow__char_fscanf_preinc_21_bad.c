void CWE190_Integer_Overflow__char_fscanf_preinc_21_bad()
{
    char data;
    data = ' ';
    /* POTENTIAL FLAW: Use a value input from the console */
    fscanf (stdin, "%c", &data);
    badStatic = 1; /* true */
    badSink(data);
}
