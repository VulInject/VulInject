static int FUN1(char *VAR1, VAR2 *VAR3)
{
    char *VAR4, *VAR5;
    FUN2(NULL, "", VAR1);
    while (VAR4 = FUN3(VAR1, "", &VAR1))
    {
        if (VAR4[0] == '')
        {
            VAR3->VAR6 = FUN4(&VAR4[1]);
            continue;
        }
        VAR4 = FUN3(VAR4, "", &VAR5);
        if (!FUN5(VAR4, ""))
        {
            if (!FUN5(VAR5, "") || !FUN5(VAR5, ""))
                return 1;
            if (!FUN5(VAR5, ""))
                VAR3->VAR7 = VAR8;
            else if (!FUN5(VAR5, ""))
                VAR3->VAR7 = VAR9;
            else if (!FUN5(VAR5, ""))
                VAR3->VAR7 = VAR10;
        }
        else if (!FUN5(VAR4, ""))
        {
            VAR3->VAR11 = FUN6(VAR5);
        }
        else if (!FUN5(VAR4, ""))
        {
            VAR3->VAR12 = FUN7(VAR5, NULL, 8);
        }
        else if (!FUN5(VAR4, "") || !FUN5(VAR4, ""))
            VAR3->VAR13 = FUN7(VAR5, NULL, 10);
        else if (!FUN5(VAR4, "") || !FUN5(VAR4, ""))
            VAR3->VAR14 = FUN7(VAR5, NULL, 10);
        else if (!FUN5(VAR4, "") || !FUN5(VAR4, ""))
            VAR3->VAR15 = FUN8(VAR5, NULL, 10);
    }
    return 0;
}