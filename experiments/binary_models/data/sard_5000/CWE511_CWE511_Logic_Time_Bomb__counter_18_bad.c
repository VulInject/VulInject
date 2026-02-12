void CWE511_Logic_Time_Bomb__counter_18_bad()
{
    goto sink;
sink:
    {
        int count = 0;
        do
        {
            /* FLAW: If a counter reaches a certain value, delete a file */
            if (count == COUNT_CHECK)
            {
                UNLINK("important_file.txt");
            }
            count++;
        }
        while(1 == 1);   /* infinite loop */
    }
}
