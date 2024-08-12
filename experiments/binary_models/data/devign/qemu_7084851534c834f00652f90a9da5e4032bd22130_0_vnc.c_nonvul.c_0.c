static int FUN1(VAR1 *VAR2, char *VAR3, size_t VAR4)
{
    char VAR5[13];
    memcpy(VAR5, VAR3, 12);
    VAR5[12] = 0;
    if (sscanf(VAR5, "", &VAR2->VAR6, &VAR2->VAR7) != 2)
    {
        FUN2("", VAR5);
        FUN3(VAR2);
        return 0;
    }
    FUN2("", VAR2->VAR6, VAR2->VAR7);
    if (VAR2->VAR6 != 3 || (VAR2->VAR7 != 3 && VAR2->VAR7 != 5 && VAR2->VAR7 != 7 && VAR2->VAR7 != 8))
    {
        FUN2("");
        FUN4(VAR2, VAR8);
        FUN5(VAR2);
        FUN3(VAR2);
        return 0;
    }
    if (VAR2->VAR7 == 5)
        VAR2->VAR7 = 3;
    if (VAR2->VAR7 == 3)
    {
        if (VAR2->VAR9 == VAR10)
        {
            FUN2("");
            FUN4(VAR2, VAR2->VAR9);
            FUN5(VAR2);
            FUN6(VAR2, VAR11, 1);
        }
        else if (VAR2->VAR9 == VAR12)
        {
            FUN2("");
            FUN4(VAR2, VAR2->VAR9);
            FUN5(VAR2);
            FUN7(VAR2);
        }
        else
        {
            FUN2("", VAR2->VAR9);
            FUN4(VAR2, VAR8);
            FUN5(VAR2);
            FUN3(VAR2);
        }
    }
    else
    {
        FUN2("", VAR2->VAR9);
        FUN8(VAR2, 1);
        FUN8(VAR2, VAR2->VAR9);
        FUN6(VAR2, VAR13, 1);
        FUN5(VAR2);
    }
    return 0;
}