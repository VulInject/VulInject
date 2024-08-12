static int FUN1(const char *VAR1)
{
    const char *VAR2, *VAR3;
    int VAR4;
    if (FUN2(VAR1, "", &VAR2))
    {
        if (!*VAR2 || *VAR2 == '')
        {
            if (*VAR2)
                if (!FUN2(VAR2, "", 0))
                    VAR1 = VAR2 + 1;
            return FUN3(VAR1);
        }
    }
    else if (FUN2(VAR1, "", &VAR2))
    {
        if (!*VAR2 || *VAR2 == '')
        {
            if (*VAR2)
            {
                if (FUN2(VAR2, "", &VAR3))
                {
                    VAR4 = FUN4(VAR3, (char **)&VAR2, 0);
                    if (*VAR2)
                    {
                        FUN5("", VAR3);
                        return 1;
                    }
                }
                else
                {
                    FUN5("", VAR2 + 1);
                    return 1;
                }
            }
            else
                VAR4 = 0;
            FUN6(VAR4);
            return 0;
        }
    }
    else if (FUN2(VAR1, "", &VAR2))
        return !FUN7(VAR2);
    FUN5("", VAR1);
    return 1;
}