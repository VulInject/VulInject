static void FUN1(VAR1 *VAR2, VAR3 *VAR4, uint32_t VAR5, int VAR6, int VAR7, int16_t VAR8)
{
    const char *VAR9 = "";
    TCGv VAR10, VAR11;
    if (VAR6 == 0 && VAR2->VAR12 & (VAR13 | VAR14))
    {
        FUN2("");
        return;
    }
    VAR10 = FUN3();
    VAR11 = FUN3();
    FUN4(VAR4, VAR10, VAR7, VAR8);
    switch (VAR5)
    {
    case VAR15:
        FUN5(VAR4, 0);
        FUN6(VAR10, VAR10, VAR4);
        FUN7(VAR10, VAR6);
        VAR9 = "";
        break;
    case VAR16:
        FUN5(VAR4, 0);
        FUN8(VAR10, VAR10, VAR4);
        FUN7(VAR10, VAR6);
        VAR9 = "";
        break;
    case VAR17:
        FUN5(VAR4, 0);
        FUN9(VAR10, VAR10, VAR4);
        FUN7(VAR10, VAR6);
        VAR9 = "";
        break;
    case VAR18:
        FUN5(VAR4, 1);
        FUN10(VAR11, VAR6);
        FUN11(VAR19, VAR11, VAR11, VAR10, VAR4->VAR20);
        FUN7(VAR11, VAR6);
        VAR9 = "";
        break;
    case VAR21:
        FUN5(VAR4, 1);
        FUN10(VAR11, VAR6);
        FUN11(VAR22, VAR11, VAR11, VAR10, VAR4->VAR20);
        FUN7(VAR11, VAR6);
        VAR9 = "";
        break;
    case VAR23:
        FUN5(VAR4, 1);
        FUN12(VAR11, FUN13(VAR4));
        FUN14(VAR4, VAR10, VAR10, VAR11);
        FUN8(VAR10, VAR10, VAR4);
        FUN7(VAR10, VAR6);
        VAR9 = "";
        break;
    case VAR24:
        FUN5(VAR4, 1);
        FUN12(VAR11, FUN13(VAR4));
        FUN14(VAR4, VAR10, VAR10, VAR11);
        FUN15(VAR10, VAR10, VAR4);
        FUN7(VAR10, VAR6);
        VAR9 = "";
        break;
    case VAR25:
        FUN5(VAR4, 0);
        FUN15(VAR10, VAR10, VAR4);
        FUN7(VAR10, VAR6);
        VAR9 = "";
        break;
    case VAR26:
        FUN5(VAR4, 0);
        FUN16(VAR10, VAR10, VAR4);
        FUN7(VAR10, VAR6);
        VAR9 = "";
        break;
    case VAR27:
        FUN5(VAR4, 0);
        FUN17(VAR10, VAR10, VAR4);
        FUN7(VAR10, VAR6);
        VAR9 = "";
        break;
    case VAR28:
        FUN5(VAR4, 0);
        FUN18(VAR10, VAR10, VAR4);
        FUN7(VAR10, VAR6);
        VAR9 = "";
        break;
    case VAR29:
        FUN5(VAR4, 0);
        FUN19(VAR10, VAR10, VAR4);
        FUN7(VAR10, VAR6);
        VAR9 = "";
        break;
    case VAR30:
        FUN5(VAR4, 1);
        FUN10(VAR11, VAR6);
        FUN11(VAR31, VAR11, VAR11, VAR10, VAR4->VAR20);
        FUN7(VAR11, VAR6);
        VAR9 = "";
        break;
    case VAR32:
        FUN5(VAR4, 1);
        FUN10(VAR11, VAR6);
        FUN11(VAR33, VAR11, VAR11, VAR10, VAR4->VAR20);
        FUN7(VAR11, VAR6);
        VAR9 = "";
        break;
    case VAR34:
        FUN5(VAR4, 1);
        FUN20(VAR10, VAR10, VAR4);
        FUN7(VAR10, VAR6);
        VAR9 = "";
        break;
    }
    (void)VAR9;
    FUN2("", VAR9, VAR35[VAR6], VAR8, VAR35[VAR7]);
    FUN21(VAR10);
    FUN21(VAR11);
}