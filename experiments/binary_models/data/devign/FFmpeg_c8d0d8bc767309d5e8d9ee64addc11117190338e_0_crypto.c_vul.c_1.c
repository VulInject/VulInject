static int FUN1(VAR1 *VAR2, const char *VAR3, int VAR4)
{
    const char *VAR5;
    int VAR6;
    VAR7 *VAR8 = VAR2->VAR9;
    if (!FUN2(VAR3, "", &VAR5) && !FUN2(VAR3, "", &VAR5))
    {
        FUN3(VAR2, VAR10, "", VAR3);
        VAR6 = FUN4(VAR11);
        goto VAR12;
    }
    if (VAR8->VAR13 < VAR14 || VAR8->VAR15 < VAR14)
    {
        FUN3(VAR2, VAR10, "");
        VAR6 = FUN4(VAR11);
        goto VAR12;
    }
    if (VAR4 & VAR16)
    {
        FUN3(VAR2, VAR10, "");
        VAR6 = FUN4(VAR17);
        goto VAR12;
    }
    if ((VAR6 = FUN5(&VAR8->VAR18, VAR5, VAR19)) < 0)
    {
        FUN3(VAR2, VAR10, "");
        goto VAR12;
    }
    VAR8->VAR20 = FUN6(VAR21);
    if (!VAR8->VAR20)
    {
        VAR6 = FUN4(VAR22);
        goto VAR12;
    }
    FUN7(VAR8->VAR20, VAR8->VAR23, 128, 1);
    VAR2->VAR24 = 1;
    return 0;
VAR12:
    FUN8(VAR8->VAR23);
    FUN8(VAR8->VAR25);
    return VAR6;
}