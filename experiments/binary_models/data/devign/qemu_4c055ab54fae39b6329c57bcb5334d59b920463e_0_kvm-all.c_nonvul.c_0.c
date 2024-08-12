int FUN1(VAR1 *VAR2)
{
    VAR3 *VAR4 = VAR5;
    long VAR6;
    int VAR7;
    FUN2("");
    VAR7 = FUN3(VAR4, FUN4(VAR2));
    if (VAR7 < 0)
    {
        FUN2("");
        goto VAR8;
    }
    VAR2->VAR9 = VAR7;
    VAR2->VAR5 = VAR4;
    VAR2->VAR10 = true;
    VAR6 = FUN5(VAR4, VAR11, 0);
    if (VAR6 < 0)
    {
        VAR7 = VAR6;
        FUN2("");
        goto VAR8;
    }
    VAR2->VAR12 = FUN6(NULL, VAR6, VAR13 | VAR14, VAR15, VAR2->VAR9, 0);
    if (VAR2->VAR12 == VAR16)
    {
        VAR7 = -VAR17;
        FUN2("");
        goto VAR8;
    }
    if (VAR4->VAR18 && !VAR4->VAR19)
    {
        VAR4->VAR19 = (void *)VAR2->VAR12 + VAR4->VAR18 * VAR20;
    }
    VAR7 = FUN7(VAR2);
VAR8:
    return VAR7;
}