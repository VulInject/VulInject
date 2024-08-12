int FUN1(VAR1 *VAR2)
{
    VAR3 *VAR4 = VAR5;
    long VAR6;
    int VAR7;
    FUN2("");
    VAR7 = FUN3(VAR4, VAR8, VAR2->VAR9);
    if (VAR7 < 0)
    {
        FUN2("");
        goto VAR10;
    }
    VAR2->VAR11 = VAR7;
    VAR2->VAR5 = VAR4;
    VAR6 = FUN4(VAR4, VAR12, 0);
    if (VAR6 < 0)
    {
        FUN2("");
        goto VAR10;
    }
    VAR2->VAR13 = FUN5(NULL, VAR6, VAR14 | VAR15, VAR16, VAR2->VAR11, 0);
    if (VAR2->VAR13 == VAR17)
    {
        VAR7 = -VAR18;
        FUN2("");
        goto VAR10;
    }
    if (VAR4->VAR19 && !VAR4->VAR20)
    {
        VAR4->VAR20 = (void *)VAR2->VAR13 + VAR4->VAR19 * VAR21;
    }
    VAR7 = FUN6(VAR2);
    if (VAR7 == 0)
    {
        FUN7(VAR22, VAR2);
        FUN8(VAR2);
    }
VAR10:
    return VAR7;
}