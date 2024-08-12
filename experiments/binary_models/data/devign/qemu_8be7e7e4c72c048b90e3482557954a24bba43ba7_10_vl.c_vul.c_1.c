static int FUN1(const char *VAR1)
{
    VAR2 *VAR3;
    if (strcmp(VAR1, "") == 0)
    {
        return 0;
    }
    if (!FUN2(VAR1, "", 6))
    {
        if (VAR1[6] == '')
        {
            VAR3 = FUN3(FUN4(""), VAR1 + 7, 0);
            if (!VAR3)
                return -1;
        }
        else
        {
            VAR3 = FUN5(FUN4(""), NULL, 0);
        }
        FUN6(VAR3, "", "");
        return 0;
    }
    return -1;
}