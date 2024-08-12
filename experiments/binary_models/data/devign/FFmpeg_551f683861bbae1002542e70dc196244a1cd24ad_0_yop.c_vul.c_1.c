static int FUN1(VAR1 *VAR2, VAR3 *VAR4)
{
    VAR5 *VAR6 = VAR2->VAR7;
    VAR8 *VAR9 = VAR2->VAR9;
    int VAR10;
    int VAR11 = VAR6->VAR12 - VAR6->VAR13 - VAR6->VAR14;
    VAR6->VAR15.VAR16 = 1;
    if (VAR6->VAR15.VAR17)
    {
        *VAR4 = VAR6->VAR15;
        VAR6->VAR15.VAR17 = NULL;
        VAR6->VAR15.VAR18 = 0;
        VAR4->VAR17[0] = VAR6->VAR19;
        VAR4->VAR20 |= VAR21;
        VAR6->VAR19 ^= 1;
        return VAR4->VAR18;
    }
    VAR10 = FUN2(&VAR6->VAR15, VAR6->VAR12 - VAR6->VAR13);
    if (VAR10 < 0)
        return VAR10;
    VAR6->VAR15.VAR22 = FUN3(VAR9);
    VAR10 = FUN4(VAR9, VAR6->VAR15.VAR17, VAR6->VAR14);
    if (VAR10 < 0)
    {
        goto VAR23;
    }
    else if (VAR10 < VAR6->VAR14)
    {
        VAR10 = VAR24;
        goto VAR23;
    }
    VAR10 = FUN5(VAR9, VAR4, 920);
    if (VAR10 < 0)
        goto VAR23;
    VAR4->VAR22 = VAR6->VAR15.VAR22;
    FUN6(VAR9, VAR6->VAR13 - VAR10);
    VAR10 = FUN4(VAR9, VAR6->VAR15.VAR17 + VAR6->VAR14, VAR11);
    if (VAR10 < 0)
        goto VAR23;
    else if (VAR10 < VAR11)
        FUN7(&VAR6->VAR15, VAR6->VAR14 + VAR10);
    return VAR6->VAR13;
VAR23:
    FUN8(&VAR6->VAR15);
    return VAR10;
}