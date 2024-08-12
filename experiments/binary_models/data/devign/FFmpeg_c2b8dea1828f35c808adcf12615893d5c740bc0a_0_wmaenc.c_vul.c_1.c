static int FUN1(VAR1 *VAR2)
{
    VAR3 *VAR4 = VAR2->VAR5;
    int VAR6, VAR7, VAR8;
    VAR9 *VAR10;
    VAR4->VAR2 = VAR2;
    if (VAR2->VAR11 > VAR12)
    {
        FUN2(VAR2, VAR13, "", VAR2->VAR11, VAR12);
        return FUN3(VAR14);
    }
    if (VAR2->VAR15 < 24 * 1000)
    {
        FUN2(VAR2, VAR13, "", VAR2->VAR15);
        return FUN3(VAR14);
    }
    VAR7 = 0;
    VAR8 = 1;
    if (VAR2->VAR16->VAR17 == VAR18)
    {
        VAR10 = FUN4(4);
        VAR2->VAR19 = 4;
        FUN5(VAR10, VAR7);
        FUN5(VAR10 + 2, VAR8);
    }
    else if (VAR2->VAR16->VAR17 == VAR20)
    {
        VAR10 = FUN6(10);
        VAR2->VAR19 = 10;
        FUN7(VAR10, VAR7);
        FUN5(VAR10 + 4, VAR8);
    }
    else
        assert(0);
    VAR2->VAR10 = VAR10;
    VAR4->VAR21 = VAR8 & 0x0001;
    VAR4->VAR22 = VAR8 & 0x0002;
    VAR4->VAR23 = VAR8 & 0x0004;
    FUN8(VAR2, VAR8);
    for (VAR6 = 0; VAR6 < VAR4->VAR24; VAR6++)
        FUN9(&VAR4->VAR25[VAR6], VAR4->VAR26 - VAR6 + 1, 0, 1.0);
    VAR2->VAR27 = VAR4->VAR27 = VAR2->VAR15 * (VAR28)VAR4->VAR29 / (VAR2->VAR30 * 8);
    VAR2->VAR31 = VAR4->VAR29;
    return 0;
}