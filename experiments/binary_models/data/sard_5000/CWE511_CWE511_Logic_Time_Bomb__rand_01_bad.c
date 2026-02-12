void CWE511_Logic_Time_Bomb__rand_01_bad()
{
    srand((unsigned)time(NULL));
    /* FLAW: If a certain number, delete a file */
    if (rand() == NUM_CHECK)
    {
        UNLINK("important_file.txt");
    }
}
