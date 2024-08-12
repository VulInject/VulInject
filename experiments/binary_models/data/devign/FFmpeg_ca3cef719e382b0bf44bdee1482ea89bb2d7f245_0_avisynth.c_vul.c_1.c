static int FUN1(VAR1 *VAR2, VAR3 *VAR4, int VAR5)
{
    VAR6 *VAR7 = VAR2->VAR8;
    AVRational VAR9, VAR10;
    int VAR11;
    const char *VAR12;
    if (VAR7->VAR13 >= VAR7->VAR14->VAR15)
        return VAR16;
    VAR9.VAR17 = VAR7->VAR14->VAR18;
    VAR9.VAR19 = VAR7->VAR14->VAR20;
    VAR10.VAR17 = VAR7->VAR14->VAR21;
    VAR10.VAR19 = 1;
    if (FUN2(VAR7->VAR14))
    {
        if (VAR7->VAR22 < VAR7->VAR14->VAR23)
            VAR11 = FUN3(VAR7->VAR22, VAR10, VAR9) - VAR7->VAR13;
        else
            VAR11 = FUN3(1, VAR10, VAR9);
    }
    else
    {
        VAR11 = 1000;
    }
    if (VAR11 <= 0)
    {
        VAR4->VAR24 = 0;
        VAR4->VAR25 = NULL;
        return 0;
    }
    if (VAR7->VAR13 + VAR11 > VAR7->VAR14->VAR15)
        VAR11 = VAR7->VAR14->VAR15 - VAR7->VAR13;
    VAR7->VAR13 += VAR11;
    if (VAR5)
        return 0;
    VAR4->VAR26 = VAR7->VAR13;
    VAR4->VAR27 = VAR7->VAR13;
    VAR4->VAR28 = VAR11;
    VAR4->VAR24 = FUN4(VAR7->VAR14) * VAR11 * VAR7->VAR14->VAR29;
    if (!VAR4->VAR24)
        return VAR30;
    VAR4->VAR25 = FUN5(VAR4->VAR24);
    if (!VAR4->VAR25)
        return VAR30;
    VAR31->FUN6(VAR7->VAR32, VAR4->VAR25, VAR7->VAR13, VAR11);
    VAR12 = VAR31->FUN7(VAR7->VAR32);
    if (VAR12)
    {
        FUN8(VAR2, VAR33, "", VAR12);
        VAR7->VAR12 = 1;
        FUN9(&VAR4->VAR25);
        return VAR30;
    }
    return 0;
}