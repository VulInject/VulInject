void CWE191_Integer_Underflow__char_rand_sub_21_bad()
{
    char data;
    data = ' ';
    /* POTENTIAL FLAW: Use a random value */
    data = (char)RAND32();
    badStatic = 1; /* true */
    badSink(data);
}
