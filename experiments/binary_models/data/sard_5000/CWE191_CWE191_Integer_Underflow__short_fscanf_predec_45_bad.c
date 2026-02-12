void CWE191_Integer_Underflow__short_fscanf_predec_45_bad()
{
    short data;
    data = 0;
    /* POTENTIAL FLAW: Use a value input from the console */
    fscanf (stdin, "%hd", &data);
    CWE191_Integer_Underflow__short_fscanf_predec_45_badData = data;
    badSink();
}
