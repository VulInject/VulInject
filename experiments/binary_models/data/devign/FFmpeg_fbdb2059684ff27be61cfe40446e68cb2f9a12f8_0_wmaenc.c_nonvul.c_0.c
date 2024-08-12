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
    if (VAR2->VAR15 > 48000)
    {
        FUN2(VAR2, VAR13, "", VAR2->VAR15);
        return FUN3(VAR14);
    }
    if (VAR2->VAR16 < 24 * 1000)
    {
        FUN2(VAR2, VAR13, "", VAR2->VAR16);
        return FUN3(VAR14);
    }
    VAR7 = 0;
    VAR8 = 1;
    if (VAR2->VAR17->VAR18 == VAR19)
    {
        VAR10 = FUN4(4);
        VAR2->VAR20 = 4;
        FUN5(VAR10, VAR7);
        FUN5(VAR10 + 2, VAR8);
    }
    else if (VAR2->VAR17->VAR18 == VAR21)
    {
        VAR10 = FUN6(10);
        VAR2->VAR20 = 10;
        FUN7(VAR10, VAR7);
        FUN5(VAR10 + 4, VAR8);
    }
    else
        FUN8(0);
    VAR2->VAR10 = VAR10;
    VAR4->VAR22 = VAR8 & 0x0001;
    VAR4->VAR23 = VAR8 & 0x0002;
    VAR4->VAR24 = VAR8 & 0x0004;
    if (VAR2->VAR11 == 2)
        VAR4->VAR25 = 1;
    FUN9(VAR2, VAR8);
    for (VAR6 = 0; VAR6 < VAR4->VAR26; VAR6++)
        FUN10(&VAR4->VAR27[VAR6], VAR4->VAR28 - VAR6 + 1, 0, 1.0);
    VAR4->VAR29 = VAR2->VAR16 * (VAR30)VAR4->VAR31 / (VAR2->VAR15 * 8);
    VAR4->VAR29 = FUN11(VAR4->VAR29, VAR32);
    VAR2->VAR29 = VAR4->VAR29;
    VAR2->VAR33 = VAR2->VAR34 = VAR4->VAR31;
    VAR2->VAR35 = &VAR4->VAR36;
    FUN12(VAR2->VAR35);
    return 0;
}