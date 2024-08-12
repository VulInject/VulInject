static int FUN1(VAR1 *VAR2, VAR3 *VAR4, VAR3 *VAR5, const char *VAR6)
{
    int VAR7;
    V9fsString VAR8;
    char *VAR9, *VAR10;
    int VAR11;
    FUN2(&VAR8);
    FUN3(&VAR8, "", VAR5->VAR12, VAR6);
    VAR9 = FUN4(VAR2, VAR4->VAR12);
    VAR10 = FUN4(VAR2, VAR8.VAR12);
    VAR7 = FUN5(VAR9, VAR10);
    FUN6(VAR9);
    if (VAR7 < 0)
    {
        goto VAR13;
    }
    if (VAR2->VAR14 & VAR15)
    {
        char *VAR16, *VAR17;
        VAR7 = FUN7(VAR2, VAR8.VAR12);
        if (VAR7 < 0)
        {
            goto VAR18;
        }
        VAR16 = FUN8(VAR2, VAR4->VAR12);
        VAR17 = FUN8(VAR2, VAR8.VAR12);
        VAR7 = FUN5(VAR16, VAR17);
        FUN6(VAR16);
        FUN6(VAR17);
        if (VAR7 < 0 && VAR19 != VAR20)
        {
            goto VAR18;
        }
    }
    goto VAR13;
VAR18:
    VAR11 = VAR19;
    remove(VAR10);
    VAR19 = VAR11;
VAR13:
    FUN6(VAR10);
    FUN9(&VAR8);
    return VAR7;
}