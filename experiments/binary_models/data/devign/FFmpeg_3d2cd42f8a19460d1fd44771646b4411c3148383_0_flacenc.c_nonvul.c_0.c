static int FUN1(VAR1 *VAR2, VAR3 *VAR4, int VAR5, void *VAR6)
{
    VAR7 *VAR8;
    const VAR9 *VAR10 = VAR6;
    int VAR11, VAR12;
    VAR8 = VAR2->VAR13;
    if (!VAR6)
    {
        VAR8->VAR14 = VAR8->VAR15;
        FUN2(VAR8->VAR16, VAR8->VAR17);
        FUN3(VAR8, VAR2->VAR18);
        return 0;
    }
    if (VAR2->VAR19 < VAR8->VAR4.VAR20)
    {
        VAR8->VAR14 = FUN4(VAR2->VAR19, VAR8->VAR21, 16);
    }
    FUN5(VAR8);
    FUN6(VAR8, VAR10);
    FUN7(VAR8);
    VAR11 = FUN8(VAR8);
    if (VAR11 > VAR8->VAR14)
    {
        VAR8->VAR4.VAR22 = 1;
        VAR11 = FUN8(VAR8);
    }
    if (VAR5 < VAR11)
    {
        FUN9(VAR2, VAR23, "");
        return 0;
    }
    VAR12 = FUN10(VAR8, VAR4, VAR5);
    VAR8->VAR24++;
    VAR2->VAR25->VAR26 = VAR8->VAR27;
    VAR8->VAR27 += VAR2->VAR19;
    FUN11(VAR8, VAR10);
    if (VAR12 > VAR8->VAR15)
        VAR8->VAR15 = VAR12;
    if (VAR12 < VAR8->VAR28)
        VAR8->VAR28 = VAR12;
    return VAR12;
}