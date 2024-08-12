static int FUN1(VAR1 *VAR2, VAR3 *VAR4)
{
    BitstreamContext VAR5;
    VAR6 *VAR7 = VAR2->VAR8;
    VAR3 *VAR9;
    int VAR10, VAR11, VAR12, VAR13, VAR14 = 0, VAR15;
    VAR10 = FUN2(VAR2, &VAR9);
    if (VAR10 < 0)
        return VAR10;
    VAR13 = VAR9->VAR16[VAR9->VAR17 - 1];
    if ((VAR13 & 0xe0) == 0xc0)
    {
        int VAR18 = 1 + ((VAR13 >> 3) & 0x3);
        int VAR19 = 1 + (VAR13 & 0x7), VAR20 = 2 + VAR19 * VAR18;
        VAR14 = VAR9->VAR17 >= VAR20 && VAR9->VAR16[VAR9->VAR17 - VAR20] == VAR13;
    }
    VAR10 = FUN3(&VAR5, VAR9->VAR16, VAR9->VAR17);
    if (VAR10 < 0)
        goto VAR21;
    FUN4(&VAR5, 2);
    VAR12 = FUN4(&VAR5, 1);
    VAR12 |= FUN4(&VAR5, 1) << 1;
    if (VAR12 == 3)
        VAR12 += FUN4(&VAR5, 1);
    if (FUN4(&VAR5, 1))
    {
        VAR11 = 0;
    }
    else
    {
        FUN4(&VAR5, 1);
        VAR11 = !FUN4(&VAR5, 1);
    }
    if (VAR14 && VAR7->VAR22 > 0)
    {
        FUN5(VAR2, VAR23, "");
        VAR10 = FUN6(VAR24);
        goto VAR21;
    }
    else if ((!VAR11 || VAR14) && !VAR7->VAR22)
    {
        FUN7(VAR4, VAR9);
        goto VAR21;
    }
    else if (VAR7->VAR22 + 1 >= VAR25)
    {
        FUN5(VAR2, VAR23, "");
        VAR10 = VAR26;
        goto VAR21;
    }
    VAR7->VAR27[VAR7->VAR22++] = VAR9;
    VAR9 = NULL;
    if (VAR11)
    {
        VAR10 = FUN6(VAR28);
        goto VAR21;
    }
    FUN8(VAR7->VAR22 > 0);
    if ((VAR10 = FUN9(VAR7->VAR27, VAR7->VAR22, VAR4)) < 0)
        goto VAR21;
    VAR10 = FUN10(VAR4, VAR7->VAR27[VAR7->VAR22 - 1]);
    if (VAR10 < 0)
        goto VAR21;
    for (VAR15 = 0; VAR15 < VAR7->VAR22; VAR15++)
        FUN11(&VAR7->VAR27[VAR15]);
    VAR7->VAR22 = 0;
VAR21:
    if (VAR10 < 0)
        FUN12(VAR4);
    FUN11(&VAR9);
    return VAR10;
}