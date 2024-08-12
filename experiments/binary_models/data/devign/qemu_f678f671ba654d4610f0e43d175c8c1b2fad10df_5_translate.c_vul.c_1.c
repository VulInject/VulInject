static void FUN1(VAR1 *VAR2, VAR3 *VAR4)
{
    uint32_t VAR5;
    uint32_t VAR6;
    int32_t VAR7, VAR8;
    TCGv VAR9;
    VAR7 = FUN2(VAR4->VAR10);
    VAR8 = FUN3(VAR4->VAR10);
    VAR6 = FUN4(VAR4->VAR10);
    VAR5 = FUN5(VAR4->VAR10);
    switch (VAR5)
    {
    case VAR11:
    case VAR12:
    case VAR13:
        break;
    case VAR14:
    case VAR15:
    case VAR16:
        FUN6(VAR17[VAR8], VAR17[VAR8], VAR6);
        break;
    case VAR18:
    case VAR19:
    case VAR20:
        FUN6(VAR17[VAR8], VAR17[VAR8], VAR6);
        break;
    case VAR21:
    case VAR22:
        break;
    case VAR23:
    case VAR24:
        if (FUN7(VAR2, VAR25))
        {
            FUN6(VAR17[VAR8], VAR17[VAR8], VAR6);
        }
        break;
    case VAR26:
    case VAR27:
        if (FUN7(VAR2, VAR25))
        {
            FUN6(VAR17[VAR8], VAR17[VAR8], VAR6);
        }
        break;
    case VAR28:
        FUN8(VAR4, VAR17[VAR7], VAR17[VAR8], VAR6, VAR29);
        break;
    case VAR30:
        FUN9(VAR17[VAR7], VAR17[VAR8], VAR4->VAR31, VAR29);
        FUN6(VAR17[VAR8], VAR17[VAR8], VAR6);
        break;
    case VAR32:
        FUN10(VAR4, VAR17[VAR7], VAR17[VAR8], VAR6, VAR29);
        break;
    case VAR33:
        FUN8(VAR4, VAR34[VAR7], VAR17[VAR8], VAR6, VAR35);
        break;
    case VAR36:
        FUN9(VAR34[VAR7], VAR17[VAR8], VAR4->VAR31, VAR35);
        FUN6(VAR17[VAR8], VAR17[VAR8], VAR6);
        break;
    case VAR37:
        FUN10(VAR4, VAR34[VAR7], VAR17[VAR8], VAR6, VAR35);
        break;
    case VAR38:
        FUN11(VAR34[VAR7 + 1], VAR34[VAR7], VAR17[VAR8], VAR6, VAR4);
        break;
    case VAR39:
        FUN12(VAR34[VAR7 + 1], VAR34[VAR7], VAR17[VAR8], VAR4);
        FUN6(VAR17[VAR8], VAR17[VAR8], VAR6);
        break;
    case VAR40:
        VAR9 = FUN13();
        FUN6(VAR9, VAR17[VAR8], VAR6);
        FUN12(VAR34[VAR7 + 1], VAR34[VAR7], VAR9, VAR4);
        FUN14(VAR17[VAR8], VAR9);
        FUN15(VAR9);
        break;
    case VAR41:
        FUN11(VAR17[VAR7 + 1], VAR17[VAR7], VAR17[VAR8], VAR6, VAR4);
        break;
    case VAR42:
        FUN12(VAR17[VAR7 + 1], VAR17[VAR7], VAR17[VAR8], VAR4);
        FUN6(VAR17[VAR8], VAR17[VAR8], VAR6);
        break;
    case VAR43:
        VAR9 = FUN13();
        FUN6(VAR9, VAR17[VAR8], VAR6);
        FUN12(VAR17[VAR7 + 1], VAR17[VAR7], VAR9, VAR4);
        FUN14(VAR17[VAR8], VAR9);
        FUN15(VAR9);
        break;
    case VAR44:
        FUN8(VAR4, VAR34[VAR7], VAR17[VAR8], VAR6, VAR45);
        break;
    case VAR46:
        FUN9(VAR34[VAR7], VAR17[VAR8], VAR4->VAR31, VAR45);
        FUN6(VAR17[VAR8], VAR17[VAR8], VAR6);
        break;
    case VAR47:
        FUN10(VAR4, VAR34[VAR7], VAR17[VAR8], VAR6, VAR45);
        break;
    case VAR48:
        VAR9 = FUN13();
        FUN16(VAR9, VAR34[VAR7], 16);
        FUN8(VAR4, VAR9, VAR17[VAR8], VAR6, VAR45);
        FUN15(VAR9);
        break;
    case VAR49:
        VAR9 = FUN13();
        FUN16(VAR9, VAR34[VAR7], 16);
        FUN9(VAR9, VAR17[VAR8], VAR4->VAR31, VAR45);
        FUN6(VAR17[VAR8], VAR17[VAR8], VAR6);
        FUN15(VAR9);
        break;
    case VAR50:
        VAR9 = FUN13();
        FUN16(VAR9, VAR34[VAR7], 16);
        FUN10(VAR4, VAR9, VAR17[VAR8], VAR6, VAR45);
        FUN15(VAR9);
        break;
    case VAR51:
        FUN8(VAR4, VAR34[VAR7], VAR17[VAR8], VAR6, VAR52);
        break;
    case VAR53:
        FUN9(VAR34[VAR7], VAR17[VAR8], VAR4->VAR31, VAR52);
        FUN6(VAR17[VAR8], VAR17[VAR8], VAR6);
        break;
    case VAR54:
        FUN10(VAR4, VAR34[VAR7], VAR17[VAR8], VAR6, VAR52);
        break;
    }
}