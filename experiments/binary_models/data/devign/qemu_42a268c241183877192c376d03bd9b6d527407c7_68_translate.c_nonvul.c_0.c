static void FUN1(VAR1 *VAR2, uint32_t VAR3, int VAR4, int VAR5, int16_t VAR6)
{
    target_ulong VAR7 = (VAR8)VAR6;
    const char *VAR9 = "";
    if (VAR4 == 0 && VAR3 != VAR10 && VAR3 != VAR11)
    {
        FUN2("");
        return;
    }
    switch (VAR3)
    {
    case VAR10:
    {
        TCGv VAR12 = FUN3();
        TCGv VAR13 = FUN4();
        TCGv VAR14 = FUN4();
        VAR15 *VAR16 = FUN5();
        FUN6(VAR13, VAR5);
        FUN7(VAR12, VAR13, VAR7);
        FUN8(VAR12, VAR12);
        FUN9(VAR13, VAR13, ~VAR7);
        FUN9(VAR14, VAR12, VAR7);
        FUN10(VAR13, VAR13, VAR14);
        FUN11(VAR14);
        FUN12(VAR17, VAR13, 0, VAR16);
        FUN11(VAR13);
        FUN13(VAR2, VAR18);
        FUN14(VAR16);
        FUN8(VAR12, VAR12);
        FUN15(VAR12, VAR4);
        FUN11(VAR12);
    }
        VAR9 = "";
        break;
    case VAR19:
        if (VAR5 != 0)
        {
            FUN7(VAR20[VAR4], VAR20[VAR5], VAR7);
            FUN8(VAR20[VAR4], VAR20[VAR4]);
        }
        else
        {
            FUN16(VAR20[VAR4], VAR7);
        }
        VAR9 = "";
        break;
    case VAR11:
    {
        TCGv VAR12 = FUN3();
        TCGv VAR13 = FUN4();
        TCGv VAR14 = FUN4();
        VAR15 *VAR16 = FUN5();
        FUN6(VAR13, VAR5);
        FUN7(VAR12, VAR13, VAR7);
        FUN9(VAR13, VAR13, ~VAR7);
        FUN9(VAR14, VAR12, VAR7);
        FUN10(VAR13, VAR13, VAR14);
        FUN11(VAR14);
        FUN12(VAR17, VAR13, 0, VAR16);
        FUN11(VAR13);
        FUN13(VAR2, VAR18);
        FUN14(VAR16);
        FUN15(VAR12, VAR4);
        FUN11(VAR12);
    }
        VAR9 = "";
        break;
    case VAR21:
        if (VAR5 != 0)
        {
            FUN7(VAR20[VAR4], VAR20[VAR5], VAR7);
        }
        else
        {
            FUN16(VAR20[VAR4], VAR7);
        }
        VAR9 = "";
        break;
    }
    (void)VAR9;
    FUN2("" VAR22, VAR9, VAR23[VAR4], VAR23[VAR5], VAR7);
}