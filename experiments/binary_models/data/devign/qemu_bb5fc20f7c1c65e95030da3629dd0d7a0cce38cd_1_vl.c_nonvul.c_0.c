static int FUN1(const char *VAR1, int VAR2)
{
    const char *VAR3;
    VAR4 *VAR5;
    if (!VAR6)
        return -1;
    if (FUN2(VAR1, "", &VAR3))
    {
        VAR5 = FUN3(VAR3);
    }
    else if (!strcmp(VAR1, ""))
    {
        VAR5 = FUN4();
    }
    else if (!strcmp(VAR1, ""))
    {
        VAR5 = FUN5();
    }
    else if (!strcmp(VAR1, ""))
    {
        VAR5 = FUN6();
    }
    else if (FUN2(VAR1, "", &VAR3))
    {
        VAR7 *VAR8;
        VAR5 = FUN7(VAR3);
        if (!VAR5)
            return -1;
        VAR8 = FUN8(VAR5);
        if (FUN9(VAR8))
        {
            VAR9 = 0;
            if (VAR2)
            {
                FUN10(VAR8, VAR10, VAR5);
                return 0;
            }
        }
    }
    else if (!strcmp(VAR1, ""))
    {
        VAR5 = FUN11();
    }
    else if (FUN2(VAR1, "", &VAR3))
    {
        VAR5 = FUN12(VAR3);
    }
    else if (!strcmp(VAR1, ""))
    {
        VAR5 = FUN13();
    }
    else if (FUN2(VAR1, "", &VAR3))
    {
        int VAR11 = VAR12;
        if (FUN14("", VAR3) < 0)
            return -1;
        VAR13[VAR11].VAR14 = "";
        VAR5 = FUN15(&VAR13[VAR11]);
    }
    else if (!strcmp(VAR1, "") || FUN2(VAR1, "", &VAR3))
    {
        VAR5 = FUN16(VAR1[2] ? FUN17(VAR3) : FUN18(FUN19(0)));
    }
    else
    {
        return -1;
    }
    if (!VAR5)
        return -1;
    return FUN20(VAR5);
}