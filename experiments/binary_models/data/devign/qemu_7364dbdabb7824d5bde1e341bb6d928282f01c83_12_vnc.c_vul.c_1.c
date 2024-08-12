static int FUN1(VAR1 *VAR2, VAR3 *VAR4, size_t VAR5)
{
    char VAR6[13];
    memcpy(VAR6, VAR4, 12);
    VAR6[12] = 0;
    if (sscanf(VAR6, "", &VAR2->VAR7, &VAR2->VAR8) != 2)
    {
        FUN2("", VAR6);
        FUN3(VAR2);
        return 0;
    }
    FUN2("", VAR2->VAR7, VAR2->VAR8);
    if (VAR2->VAR7 != 3 || (VAR2->VAR8 != 3 && VAR2->VAR8 != 4 && VAR2->VAR8 != 5 && VAR2->VAR8 != 7 && VAR2->VAR8 != 8))
    {
        FUN2("");
        FUN4(VAR2, VAR9);
        FUN5(VAR2);
        FUN3(VAR2);
        return 0;
    }
    if (VAR2->VAR8 == 4 || VAR2->VAR8 == 5)
        VAR2->VAR8 = 3;
    if (VAR2->VAR8 == 3)
    {
        if (VAR2->VAR10 == VAR11)
        {
            FUN2("");
            FUN4(VAR2, VAR2->VAR10);
            FUN5(VAR2);
            FUN6(VAR2);
        }
        else if (VAR2->VAR10 == VAR12)
        {
            FUN2("");
            FUN4(VAR2, VAR2->VAR10);
            FUN5(VAR2);
            FUN7(VAR2);
        }
        else
        {
            FUN2("", VAR2->VAR10);
            FUN4(VAR2, VAR9);
            FUN5(VAR2);
            FUN3(VAR2);
        }
    }
    else
    {
        FUN2("", VAR2->VAR10);
        FUN8(VAR2, 1);
        FUN8(VAR2, VAR2->VAR10);
        FUN9(VAR2, VAR13, 1);
        FUN5(VAR2);
    }
    return 0;
}