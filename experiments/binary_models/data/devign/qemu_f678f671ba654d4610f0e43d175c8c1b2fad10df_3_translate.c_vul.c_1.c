static void FUN1(VAR1 *VAR2, uint32_t VAR3, int VAR4, int VAR5, int32_t VAR6, int32_t VAR7)
{
    TCGv VAR8, VAR9;
    int VAR10;
    switch (VAR3)
    {
    case VAR11:
    case VAR12:
        FUN2(VAR2, 0, VAR2->VAR13 + VAR7 * 2);
        break;
    case VAR14:
    case VAR15:
        FUN3(VAR16, VAR2->VAR17);
        FUN2(VAR2, 0, VAR2->VAR13 + VAR7 * 2);
        break;
    case VAR18:
        FUN4(VAR2, VAR19, VAR20[15], 0, VAR7);
        break;
    case VAR21:
        FUN4(VAR2, VAR22, VAR20[15], 0, VAR7);
        break;
    case VAR23:
        FUN4(VAR2, VAR19, VAR20[15], VAR6, VAR7);
        break;
    case VAR24:
        FUN4(VAR2, VAR22, VAR20[15], VAR6, VAR7);
        break;
    case VAR25:
        VAR8 = FUN5();
        FUN6(VAR8, VAR20[15], 0x1u << VAR6);
        FUN4(VAR2, VAR19, VAR8, 0, VAR7);
        FUN7(VAR8);
        break;
    case VAR26:
        VAR8 = FUN5();
        FUN6(VAR8, VAR20[15], 0x1u << VAR6);
        FUN4(VAR2, VAR22, VAR8, 0, VAR7);
        FUN7(VAR8);
        break;
    case VAR27:
        FUN8(VAR2, VAR19, VAR20[VAR4], VAR20[15], VAR7);
        break;
    case VAR28:
        FUN8(VAR2, VAR22, VAR20[VAR4], VAR20[15], VAR7);
        break;
    case VAR29:
        FUN4(VAR2, VAR22, VAR20[VAR4], 0, VAR7);
        break;
    case VAR30:
        FUN4(VAR2, VAR22, VAR31[VAR4], 0, VAR7);
        break;
    case VAR32:
        FUN4(VAR2, VAR33, VAR20[VAR4], 0, VAR7);
        break;
    case VAR34:
        FUN4(VAR2, VAR35, VAR20[VAR4], 0, VAR7);
        break;
    case VAR36:
        FUN4(VAR2, VAR37, VAR20[VAR4], 0, VAR7);
        break;
    case VAR38:
        FUN4(VAR2, VAR39, VAR20[VAR4], 0, VAR7);
        break;
    case VAR40:
        FUN4(VAR2, VAR19, VAR20[VAR4], 0, VAR7);
        break;
    case VAR41:
        FUN4(VAR2, VAR19, VAR31[VAR4], 0, VAR7);
        break;
    case VAR42:
        FUN9(VAR2, VAR4, VAR7 * 2 - 32);
        break;
    case VAR43:
        FUN6(VAR44, VAR31[VAR4], 0xfffffffe);
        FUN10(0);
        break;
    case VAR45:
    case VAR46:
        FUN11(VAR47);
        FUN10(0);
        break;
    case VAR48:
        FUN3(VAR16, VAR2->VAR17);
        FUN2(VAR2, 0, FUN12(VAR7));
        break;
    case VAR49:
        FUN13(VAR2);
        FUN2(VAR2, 0, VAR2->VAR13 + VAR7 * 2);
        break;
    case VAR50:
        FUN13(VAR2);
        FUN2(VAR2, 0, FUN12(VAR7));
        break;
    case VAR51:
        FUN14(VAR31[11], VAR2->VAR17);
    case VAR52:
        FUN2(VAR2, 0, FUN12(VAR7));
        break;
    case VAR53:
        FUN14(VAR31[11], VAR2->VAR17);
        FUN2(VAR2, 0, VAR2->VAR13 + VAR7 * 2);
        break;
    case VAR54:
        if (FUN15(VAR2->VAR55) == VAR56)
        {
            FUN4(VAR2, VAR19, VAR20[VAR4], VAR6, VAR7);
        }
        else
        {
            FUN4(VAR2, VAR22, VAR20[VAR4], VAR6, VAR7);
        }
        break;
    case VAR57:
        if (FUN15(VAR2->VAR55) == VAR58)
        {
            FUN4(VAR2, VAR33, VAR20[VAR4], VAR6, VAR7);
        }
        else
        {
            VAR6 = FUN16(VAR2->VAR55);
            FUN4(VAR2, VAR59, VAR20[VAR4], VAR6, VAR7);
        }
        break;
    case VAR60:
        if (FUN15(VAR2->VAR55) == VAR61)
        {
            FUN4(VAR2, VAR39, VAR20[VAR4], VAR6, VAR7);
        }
        else
        {
            VAR6 = FUN16(VAR2->VAR55);
            FUN4(VAR2, VAR62, VAR20[VAR4], VAR6, VAR7);
        }
        break;
    case VAR63:
        VAR8 = FUN5();
        if (FUN15(VAR2->VAR55) == VAR64)
        {
            FUN17(VAR8, VAR20[VAR4]);
            FUN18(VAR20[VAR4], VAR20[VAR4], 1);
            FUN4(VAR2, VAR22, VAR8, VAR6, VAR7);
        }
        else
        {
            FUN17(VAR8, VAR20[VAR4]);
            FUN19(VAR20[VAR4], VAR20[VAR4], 1);
            FUN4(VAR2, VAR22, VAR8, VAR6, VAR7);
        }
        FUN7(VAR8);
        break;
    case VAR65:
        VAR10 = FUN20(VAR2->VAR55);
        VAR8 = FUN5();
        FUN6(VAR8, VAR20[VAR4], (1 << VAR10));
        if (FUN21(VAR2->VAR55) == VAR66)
        {
            FUN4(VAR2, VAR22, VAR8, 0, VAR7);
        }
        else
        {
            FUN4(VAR2, VAR19, VAR8, 0, VAR7);
        }
        FUN7(VAR8);
        break;
    case VAR67:
        if (FUN22(VAR2->VAR55) == VAR68)
        {
            FUN8(VAR2, VAR19, VAR20[VAR4], VAR20[VAR5], VAR7);
        }
        else
        {
            FUN8(VAR2, VAR22, VAR20[VAR4], VAR20[VAR5], VAR7);
        }
        break;
    case VAR69:
        if (FUN22(VAR2->VAR55) == VAR70)
        {
            FUN8(VAR2, VAR19, VAR31[VAR4], VAR31[VAR5], VAR7);
        }
        else
        {
            FUN8(VAR2, VAR22, VAR31[VAR4], VAR31[VAR5], VAR7);
        }
        break;
    case VAR71:
        if (FUN22(VAR2->VAR55) == VAR72)
        {
            FUN8(VAR2, VAR33, VAR20[VAR4], VAR20[VAR5], VAR7);
        }
        else
        {
            FUN8(VAR2, VAR59, VAR20[VAR4], VAR20[VAR5], VAR7);
        }
        break;
    case VAR73:
        if (FUN22(VAR2->VAR55) == VAR74)
        {
            FUN8(VAR2, VAR39, VAR20[VAR4], VAR20[VAR5], VAR7);
        }
        else
        {
            FUN8(VAR2, VAR62, VAR20[VAR4], VAR20[VAR5], VAR7);
        }
        break;
    case VAR75:
        if (FUN22(VAR2->VAR55) == VAR76)
        {
            FUN9(VAR2, VAR5, VAR7 * 2);
        }
        else
        {
            FUN2(VAR2, 0, VAR2->VAR13 + VAR7 * 2);
        }
        break;
    case VAR77:
        VAR8 = FUN5();
        VAR9 = FUN5();
        if (FUN15(VAR2->VAR55) == VAR78)
        {
            FUN17(VAR8, VAR20[VAR4]);
            FUN17(VAR9, VAR20[VAR5]);
            FUN18(VAR20[VAR4], VAR20[VAR4], 1);
            FUN8(VAR2, VAR22, VAR8, VAR9, VAR7);
        }
        else
        {
            FUN17(VAR8, VAR20[VAR4]);
            FUN17(VAR9, VAR20[VAR5]);
            FUN19(VAR20[VAR4], VAR20[VAR4], 1);
            FUN8(VAR2, VAR22, VAR8, VAR9, VAR7);
        }
        FUN7(VAR8);
        FUN7(VAR9);
        break;
    case VAR79:
        if (FUN22(VAR2->VAR55) == VAR80)
        {
            FUN4(VAR2, VAR22, VAR31[VAR4], 0, VAR7);
        }
        else
        {
            FUN4(VAR2, VAR19, VAR31[VAR4], 0, VAR7);
        }
        break;
    default:
        FUN23("", VAR2->VAR13);
    }
    VAR2->VAR81 = VAR82;
}