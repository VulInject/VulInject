static VAR1 FUN1(VAR2 *VAR3, int VAR4, int VAR5, int32_t VAR6, int VAR7)
{
    TCGv VAR8;
    if (VAR4 == 31)
    {
        return VAR9;
    }
    VAR8 = VAR10;
    VAR8 = FUN2();
    FUN3(VAR8, FUN4(VAR3, VAR5), VAR6);
    return FUN5(VAR3, VAR7 ? VAR11 : VAR12, VAR4);
    {
        VAR13 *VAR14, *VAR15;
        TCGv VAR16;
        VAR14 = FUN6();
        VAR15 = FUN6();
        FUN7(VAR17, VAR8, VAR18, VAR14);
        VAR16 = FUN8();
        FUN9(VAR16, VAR8, VAR3->VAR19, VAR7 ? VAR20 : VAR21);
        FUN7(VAR17, VAR16, VAR22, VAR14);
        FUN10(VAR23[VAR4], VAR8, VAR3->VAR19, VAR7 ? VAR20 : VAR24);
        FUN11(VAR23[VAR4], 1);
        FUN12(VAR15);
        FUN13(VAR14);
        FUN11(VAR23[VAR4], 0);
        FUN13(VAR15);
        FUN11(VAR18, -1);
        FUN14(VAR8);
        return VAR9;
    }
}