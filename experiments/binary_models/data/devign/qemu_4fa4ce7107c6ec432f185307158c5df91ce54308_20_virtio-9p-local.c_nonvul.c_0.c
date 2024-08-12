static int FUN1(VAR1 *VAR2, VAR3 *VAR4, const char *VAR5, VAR6 *VAR7)
{
    char *VAR8;
    int VAR9 = -1;
    int VAR10 = 0;
    V9fsString VAR11;
    char *VAR12;
    FUN2(&VAR11);
    FUN3(&VAR11, "", VAR4->VAR13, VAR5);
    VAR8 = VAR11.VAR13;
    if (VAR2->VAR14 & VAR15)
    {
        VAR12 = FUN4(VAR2, VAR8);
        VAR9 = mkdir(VAR12, VAR16);
        if (VAR9 == -1)
        {
            FUN5(VAR12);
            goto VAR17;
        }
        VAR7->VAR18 = VAR7->VAR18 | VAR19;
        VAR9 = FUN6(VAR12, VAR7);
        if (VAR9 == -1)
        {
            VAR10 = VAR20;
            goto VAR21;
        }
    }
    else if (VAR2->VAR14 & VAR22)
    {
        VAR12 = FUN4(VAR2, VAR8);
        VAR9 = mkdir(VAR12, VAR16);
        if (VAR9 == -1)
        {
            FUN5(VAR12);
            goto VAR17;
        }
        VAR7->VAR18 = VAR7->VAR18 | VAR19;
        VAR9 = FUN7(VAR2, VAR8, VAR7);
        if (VAR9 == -1)
        {
            VAR10 = VAR20;
            goto VAR21;
        }
    }
    else if ((VAR2->VAR14 & VAR23) || (VAR2->VAR14 & VAR24))
    {
        VAR12 = FUN4(VAR2, VAR8);
        VAR9 = mkdir(VAR12, VAR7->VAR18);
        if (VAR9 == -1)
        {
            FUN5(VAR12);
            goto VAR17;
        }
        VAR9 = FUN8(VAR2, VAR8, VAR7);
        if (VAR9 == -1)
        {
            VAR10 = VAR20;
            goto VAR21;
        }
    }
    goto VAR17;
VAR21:
    remove(VAR12);
    VAR20 = VAR10;
    FUN5(VAR12);
VAR17:
    FUN9(&VAR11);
    return VAR9;
}