void CWE511_Logic_Time_Bomb__time_17_bad()
{
    int j;
    for(j = 0; j < 1; j++)
    {
        {
            time_t currentTime;
            /* FLAW: After a certain date, delete a file */
            time(&currentTime);
            if (currentTime > TIME_CHECK)
            {
                UNLINK("important_file.txt");
            }
        }
    }
}
