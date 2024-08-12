static int FUN1(VAR1 *VAR2, int VAR3)
{
    struct stat VAR4;
    FUN2(VAR3, &VAR4);
    if (VAR2->VAR5 > VAR4.VAR6)
    {
        fprintf(VAR7, ""
                        "" VAR8 "" VAR8 "",
                VAR2->VAR5, (VAR9)VAR4.VAR6);
        return -1;
    }
    else
    {
        return 0;
    }
}