struct VAR1 *FUN1(const char *VAR2)
{
    char *VAR3;
    struct VAR4 *VAR5 = 0;
    if (!strcmp(VAR2, ""))
        return &VAR6;
    else if (!FUN2(VAR2, "", 4) && (VAR2[4] == '' || VAR2[4] == ''))
        return FUN3(VAR2[4] ? VAR2 + 5 : "");
    else if (!FUN2(VAR2, "", 3))
    {
        if (VAR2[3])
        {
            if (!FUN2(VAR2 + 3, "", 6))
            {
                VAR5 = FUN4(FUN5(VAR2 + 9, &VAR3, 0));
                if (*VAR3)
                    VAR5 = 0;
            }
        }
        else
            VAR5 = FUN4(0);
        if (VAR5)
            return FUN6(VAR5);
    }
    FUN7("", VAR2);
    return 0;
}