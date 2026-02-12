void CWE194_Unexpected_Sign_Extension__fscanf_memcpy_15_bad()
{
    short data;
    /* Initialize data */
    data = 0;
    switch(6)
    {
    case 6:
        /* FLAW: Use a value input from the console using fscanf() */
        fscanf (stdin, "%hd", &data);
        break;
    default:
        /* INCIDENTAL: CWE 561 Dead Code, the code below will never run */
        printLine("Benign, fixed string");
        break;
    }
    {
        char source[100];
        char dest[100] = "";
        memset(source, 'A', 100-1);
        source[100-1] = '\0';
        if (data < 100)
        {
            /* POTENTIAL FLAW: data is interpreted as an unsigned int - if its value is negative,
             * the sign extension could result in a very large number */
            memcpy(dest, source, data);
            dest[data] = '\0'; /* NULL terminate */
        }
        printLine(dest);
    }
}
