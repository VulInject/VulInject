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
        FUN13(VAR31[11], VAR2->VAR17);
    case VAR50:
        FUN2(VAR2, 0, FUN12(VAR7));
        break;
    case VAR51:
        FUN13(VAR31[11], VAR2->VAR17);
        FUN2(VAR2, 0, VAR2->VAR13 + VAR7 * 2);
        break;
    case VAR52:
        if (FUN14(VAR2->VAR53) == VAR54)
        {
            FUN4(VAR2, VAR19, VAR20[VAR4], VAR6, VAR7);
        }
        else
        {
            FUN4(VAR2, VAR22, VAR20[VAR4], VAR6, VAR7);
        }
        break;
    case VAR55:
        if (FUN14(VAR2->VAR53) == VAR56)
        {
            FUN4(VAR2, VAR33, VAR20[VAR4], VAR6, VAR7);
        }
        else
        {
            VAR6 = FUN15(VAR2->VAR53);
            FUN4(VAR2, VAR57, VAR20[VAR4], VAR6, VAR7);
        }
        break;
    case VAR58:
        if (FUN14(VAR2->VAR53) == VAR59)
        {
            FUN4(VAR2, VAR39, VAR20[VAR4], VAR6, VAR7);
        }
        else
        {
            VAR6 = FUN15(VAR2->VAR53);
            FUN4(VAR2, VAR60, VAR20[VAR4], VAR6, VAR7);
        }
        break;
    case VAR61:
        VAR8 = FUN5();
        if (FUN14(VAR2->VAR53) == VAR62)
        {
            FUN16(VAR8, VAR20[VAR4]);
            FUN17(VAR20[VAR4], VAR20[VAR4], 1);
            FUN4(VAR2, VAR22, VAR8, VAR6, VAR7);
        }
        else
        {
            FUN16(VAR8, VAR20[VAR4]);
            FUN18(VAR20[VAR4], VAR20[VAR4], 1);
            FUN4(VAR2, VAR22, VAR8, VAR6, VAR7);
        }
        FUN7(VAR8);
        break;
    case VAR63:
        VAR10 = FUN19(VAR2->VAR53);
        VAR8 = FUN5();
        FUN6(VAR8, VAR20[VAR4], (1 << VAR10));
        if (FUN20(VAR2->VAR53) == VAR64)
        {
            FUN4(VAR2, VAR22, VAR8, 0, VAR7);
        }
        else
        {
            FUN4(VAR2, VAR19, VAR8, 0, VAR7);
        }
        FUN7(VAR8);
        break;
    case VAR65:
        if (FUN21(VAR2->VAR53) == VAR66)
        {
            FUN8(VAR2, VAR19, VAR20[VAR4], VAR20[VAR5], VAR7);
        }
        else
        {
            FUN8(VAR2, VAR22, VAR20[VAR4], VAR20[VAR5], VAR7);
        }
        break;
    case VAR67:
        if (FUN21(VAR2->VAR53) == VAR68)
        {
            FUN8(VAR2, VAR19, VAR31[VAR4], VAR31[VAR5], VAR7);
        }
        else
        {
            FUN8(VAR2, VAR22, VAR31[VAR4], VAR31[VAR5], VAR7);
        }
        break;
    case VAR69:
        if (FUN21(VAR2->VAR53) == VAR70)
        {
            FUN8(VAR2, VAR33, VAR20[VAR4], VAR20[VAR5], VAR7);
        }
        else
        {
            FUN8(VAR2, VAR57, VAR20[VAR4], VAR20[VAR5], VAR7);
        }
        break;
    case VAR71:
        if (FUN21(VAR2->VAR53) == VAR72)
        {
            FUN8(VAR2, VAR39, VAR20[VAR4], VAR20[VAR5], VAR7);
        }
        else
        {
            FUN8(VAR2, VAR60, VAR20[VAR4], VAR20[VAR5], VAR7);
        }
        break;
    case VAR73:
        if (FUN21(VAR2->VAR53) == VAR74)
        {
            FUN9(VAR2, VAR5, VAR7 * 2);
        }
        else
        {
            FUN2(VAR2, 0, VAR2->VAR13 + VAR7 * 2);
        }
        break;
    case VAR75:
        VAR8 = FUN5();
        VAR9 = FUN5();
        if (FUN14(VAR2->VAR53) == VAR76)
        {
            FUN16(VAR8, VAR20[VAR4]);
            FUN16(VAR9, VAR20[VAR5]);
            FUN17(VAR20[VAR4], VAR20[VAR4], 1);
            FUN8(VAR2, VAR22, VAR8, VAR9, VAR7);
        }
        else
        {
            FUN16(VAR8, VAR20[VAR4]);
            FUN16(VAR9, VAR20[VAR5]);
            FUN18(VAR20[VAR4], VAR20[VAR4], 1);
            FUN8(VAR2, VAR22, VAR8, VAR9, VAR7);
        }
        FUN7(VAR8);
        FUN7(VAR9);
        break;
    case VAR77:
        if (FUN21(VAR2->VAR53) == VAR78)
        {
            FUN4(VAR2, VAR22, VAR31[VAR4], 0, VAR7);
        }
        else
        {
            FUN4(VAR2, VAR19, VAR31[VAR4], 0, VAR7);
        }
        break;
    default:
        FUN22("", VAR2->VAR13);
    }
    VAR2->VAR79 = VAR80;
}