void CWE126_Buffer_Overread__CWE170_char_loop_17_bad()
{
    int j;
    for(j = 0; j < 1; j++)
    {
        {
            char src[150], dest[100];
            int i;
            /* Initialize src */
            memset(src, 'A', 149);
            src[149] = '\0';
            for(i=0; i < 99; i++)
            {
                dest[i] = src[i];
            }
            /* FLAW: do not explicitly null terminate dest after the loop */
            printLine(dest);
        }
    }
}
