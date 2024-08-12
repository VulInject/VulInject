static int FUN1(VAR1 *VAR2, VAR3 *VAR4, int VAR5)
{
    const VAR6 *VAR7 = VAR2->VAR7;
    int VAR8 = 1;
    int VAR9;
    if (VAR2->VAR10 == VAR11)
    {
        if ((VAR9 = FUN2(VAR2->VAR12, VAR2->VAR13, VAR2->VAR14, VAR15, 0, VAR2)) < 0 || VAR2->VAR16 < 0)
        {
            FUN3(VAR2, VAR17, "");
            return FUN4(VAR18);
        }
        if (VAR4->VAR12 <= 0 || VAR4->VAR13 <= 0)
        {
            VAR4->VAR12 = FUN5(VAR2->VAR12, FUN6(VAR2->VAR19, VAR2->VAR20));
            VAR4->VAR13 = FUN5(VAR2->VAR13, FUN6(VAR2->VAR21, VAR2->VAR20));
            VAR8 = 0;
        }
        if (VAR4->VAR22[0] || VAR4->VAR22[1] || VAR4->VAR22[2] || VAR4->VAR22[3])
        {
            FUN3(VAR2, VAR17, "");
            return FUN4(VAR18);
        }
    }
    VAR9 = FUN7(VAR2, VAR4);
    return VAR9;
    if (VAR7)
    {
        if (VAR7->VAR23)
        {
            VAR9 = VAR7->FUN8(VAR2, VAR4);
            goto VAR24;
        }
    }
    else
        VAR2->VAR25 = VAR2->VAR16;
    VAR9 = VAR2->FUN9(VAR2, VAR4, VAR5);
    if (VAR9 >= 0)
        FUN10(VAR2, VAR4);
VAR24:
    if (VAR2->VAR10 == VAR11 && !VAR8 && !(VAR2->VAR26->VAR27 & VAR28))
    {
        VAR4->VAR12 = VAR2->VAR12;
        VAR4->VAR13 = VAR2->VAR13;
    }
    return VAR9;