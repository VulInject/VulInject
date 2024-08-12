static void FUN1(VAR1 *VAR2, VAR3 *VAR4, uint32_t VAR5, int VAR6, int VAR7, int16_t VAR8)
{
    target_ulong VAR9;
    const char *VAR10 = "";
    TCGv VAR11 = FUN2(VAR12);
    if (VAR6 == 0 && VAR5 != VAR13 && VAR5 != VAR14)
    {
        FUN3("");
        goto VAR15;
    }
    VAR9 = (VAR16)VAR8;
    switch (VAR5)
    {
    case VAR13:
    case VAR17:
    case VAR14:
    case VAR18:
    case VAR19:
    case VAR20:
        VAR9 = (VAR21)VAR8;
    case VAR22:
    case VAR23:
    case VAR24:
        FUN4(VAR11, VAR7);
        break;
    case VAR25:
        FUN5(VAR11, VAR8 << 16);
        break;
    case VAR26:
    case VAR27:
    case VAR28:
    case VAR29:
    case VAR30:
    case VAR31:
    case VAR32:
    case VAR33:
    case VAR34:
        VAR9 &= 0x1f;
        FUN4(VAR11, VAR7);
        break;
    }
    switch (VAR5)
    {
    case VAR13:
    {
        TCGv VAR35 = FUN6(VAR12);
        TCGv VAR36 = FUN6(VAR12);
        int VAR37 = FUN7();
        FUN8(VAR4, 1);
        FUN9(VAR35, VAR11);
        FUN10(VAR11, VAR35, VAR9);
        FUN11(VAR35, VAR35, ~VAR9);
        FUN11(VAR36, VAR11, VAR9);
        FUN12(VAR35, VAR35, VAR36);
        FUN13(VAR36);
        FUN14(VAR38, VAR35, 0, VAR37);
        FUN15(VAR4, VAR39);
        FUN16(VAR37);
        FUN13(VAR35);
        FUN9(VAR11, VAR11);
    }
        VAR10 = "";
        break;
    case VAR17:
        FUN10(VAR11, VAR11, VAR9);
        FUN9(VAR11, VAR11);
        VAR10 = "";
        break;
    case VAR14:
    {
        TCGv VAR35 = FUN6(VAR12);
        TCGv VAR36 = FUN6(VAR12);
        int VAR37 = FUN7();
        FUN8(VAR4, 1);
        FUN17(VAR35, VAR11);
        FUN10(VAR11, VAR11, VAR9);
        FUN11(VAR35, VAR35, ~VAR9);
        FUN11(VAR36, VAR11, VAR9);
        FUN12(VAR35, VAR35, VAR36);
        FUN13(VAR36);
        FUN14(VAR38, VAR35, 0, VAR37);
        FUN15(VAR4, VAR39);
        FUN16(VAR37);
        FUN13(VAR35);
    }
        VAR10 = "";
        break;
    case VAR18:
        FUN10(VAR11, VAR11, VAR9);
        VAR10 = "";
        break;
    case VAR19:
        FUN18(VAR11, VAR9);
        VAR10 = "";
        break;
    case VAR20:
        FUN19(VAR11, VAR9);
        VAR10 = "";
        break;
    case VAR22:
        FUN20(VAR11, VAR11, VAR9);
        VAR10 = "";
        break;
    case VAR23:
        FUN21(VAR11, VAR11, VAR9);
        VAR10 = "";
        break;
    case VAR24:
        FUN11(VAR11, VAR11, VAR9);
        VAR10 = "";
        break;
    case VAR25:
        VAR10 = "";
        break;
    case VAR26:
        FUN22(VAR11, VAR11, VAR9);
        FUN9(VAR11, VAR11);
        VAR10 = "";
        break;
    case VAR27:
        FUN9(VAR11, VAR11);
        FUN23(VAR11, VAR11, VAR9);
        VAR10 = "";
        break;
    case VAR28:
        switch ((VAR4->VAR40 >> 21) & 0x1f)
        {
        case 0:
            if (VAR9 != 0)
            {
                FUN24(VAR11, VAR11);
                FUN25(VAR11, VAR11, VAR9);
            }
            else
            {
                FUN9(VAR11, VAR11);
            }
            VAR10 = "";
            break;
        case 1:
            if (VAR2->VAR41 & VAR42)
            {
                if (VAR9 != 0)
                {
                    TCGv VAR35 = FUN6(VAR43);
                    FUN26(VAR35, VAR11);
                    FUN27(VAR35, VAR35, VAR9);
                    FUN28(VAR11, VAR35);
                    FUN13(VAR35);
                }
                VAR10 = "";
            }
            else
            {
                if (VAR9 != 0)
                {
                    FUN24(VAR11, VAR11);
                    FUN25(VAR11, VAR11, VAR9);
                }
                else
                {
                    FUN9(VAR11, VAR11);
                }
                VAR10 = "";
            }
            break;
        default:
            FUN29("");
            FUN15(VAR4, VAR44);
            break;
        }
        break;
    case VAR29:
        FUN22(VAR11, VAR11, VAR9);
        VAR10 = "";
        break;
    case VAR30:
        FUN23(VAR11, VAR11, VAR9);
        VAR10 = "";
        break;
    case VAR31:
        switch ((VAR4->VAR40 >> 21) & 0x1f)
        {
        case 0:
            FUN25(VAR11, VAR11, VAR9);
            VAR10 = "";
            break;
        case 1:
            if (VAR2->VAR41 & VAR42)
            {
                if (VAR9 != 0)
                {
                    FUN30(VAR11, VAR11, VAR9);
                }
                VAR10 = "";
            }
            else
            {
                FUN25(VAR11, VAR11, VAR9);
                VAR10 = "";
            }
            break;
        default:
            FUN29("");
            FUN15(VAR4, VAR44);
            break;
        }
        break;
    case VAR32:
        FUN22(VAR11, VAR11, VAR9 + 32);
        VAR10 = "";
        break;
    case VAR33:
        FUN23(VAR11, VAR11, VAR9 + 32);
        VAR10 = "";
        break;
    case VAR34:
        switch ((VAR4->VAR40 >> 21) & 0x1f)
        {
        case 0:
            FUN25(VAR11, VAR11, VAR9 + 32);
            VAR10 = "";
            break;
        case 1:
            if (VAR2->VAR41 & VAR42)
            {
                FUN30(VAR11, VAR11, VAR9 + 32);
                VAR10 = "";
            }
            else
            {
                FUN25(VAR11, VAR11, VAR9 + 32);
                VAR10 = "";
            }
            break;
        default:
            FUN29("");
            FUN15(VAR4, VAR44);
            break;
        }
        break;
    default:
        FUN29(VAR10);
        FUN15(VAR4, VAR44);
        goto VAR15;
    }
    FUN31(VAR11, VAR6);
    FUN3("" VAR45, VAR10, VAR46[VAR6], VAR46[VAR7], VAR9);
VAR15:
    FUN13(VAR11);
}