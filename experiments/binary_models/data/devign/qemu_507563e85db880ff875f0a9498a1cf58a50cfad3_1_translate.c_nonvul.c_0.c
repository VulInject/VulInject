static void FUN1(VAR1 *VAR2, VAR3 *VAR4, uint32_t VAR5, int VAR6, int VAR7, int VAR8)
{
    const char *VAR9 = "";
    TCGv VAR10 = FUN2(VAR11);
    TCGv VAR12 = FUN2(VAR11);
    if (VAR6 == 0 && VAR5 != VAR13 && VAR5 != VAR14 && VAR5 != VAR15 && VAR5 != VAR16)
    {
        FUN3("");
        goto VAR17;
    }
    FUN4(VAR10, VAR7);
    if (VAR8 == 0 && (VAR5 == VAR18 || VAR5 == VAR19 || VAR5 == VAR20 || VAR5 == VAR21))
    {
        FUN5(VAR10, VAR6);
        goto VAR17;
    }
    FUN4(VAR12, VAR8);
    switch (VAR5)
    {
    case VAR13:
    {
        TCGv VAR22 = FUN6(VAR11);
        TCGv VAR23 = FUN6(VAR11);
        int VAR24 = FUN7();
        FUN8(VAR4, 1);
        FUN9(VAR22, VAR10);
        FUN9(VAR23, VAR12);
        FUN10(VAR10, VAR22, VAR23);
        FUN11(VAR22, VAR22, VAR12);
        FUN12(VAR22, VAR22, -1);
        FUN11(VAR23, VAR10, VAR12);
        FUN13(VAR22, VAR22, VAR23);
        FUN14(VAR23);
        FUN15(VAR25, VAR22, 0, VAR24);
        FUN16(VAR4, VAR26);
        FUN17(VAR24);
        FUN14(VAR22);
        FUN9(VAR10, VAR10);
    }
        VAR9 = "";
        break;
    case VAR18:
        FUN10(VAR10, VAR10, VAR12);
        FUN9(VAR10, VAR10);
        VAR9 = "";
        break;
    case VAR14:
    {
        TCGv VAR22 = FUN6(VAR11);
        TCGv VAR23 = FUN6(VAR11);
        int VAR24 = FUN7();
        FUN8(VAR4, 1);
        FUN9(VAR22, VAR10);
        FUN9(VAR23, VAR12);
        FUN18(VAR10, VAR22, VAR23);
        FUN11(VAR23, VAR22, VAR12);
        FUN11(VAR22, VAR22, VAR10);
        FUN13(VAR22, VAR22, VAR23);
        FUN14(VAR23);
        FUN15(VAR25, VAR22, 0, VAR24);
        FUN16(VAR4, VAR26);
        FUN17(VAR24);
        FUN14(VAR22);
        FUN9(VAR10, VAR10);
    }
        VAR9 = "";
        break;
    case VAR20:
        FUN18(VAR10, VAR10, VAR12);
        FUN9(VAR10, VAR10);
        VAR9 = "";
        break;
    case VAR15:
    {
        TCGv VAR22 = FUN6(VAR11);
        TCGv VAR23 = FUN6(VAR11);
        int VAR24 = FUN7();
        FUN8(VAR4, 1);
        FUN19(VAR22, VAR10);
        FUN10(VAR10, VAR10, VAR12);
        FUN11(VAR22, VAR22, VAR12);
        FUN12(VAR22, VAR22, -1);
        FUN11(VAR23, VAR10, VAR12);
        FUN13(VAR22, VAR22, VAR23);
        FUN14(VAR23);
        FUN15(VAR25, VAR22, 0, VAR24);
        FUN16(VAR4, VAR26);
        FUN17(VAR24);
        FUN14(VAR22);
    }
        VAR9 = "";
        break;
    case VAR19:
        FUN10(VAR10, VAR10, VAR12);
        VAR9 = "";
        break;
    case VAR16:
    {
        TCGv VAR22 = FUN6(VAR11);
        TCGv VAR23 = FUN6(VAR11);
        int VAR24 = FUN7();
        FUN8(VAR4, 1);
        FUN19(VAR22, VAR10);
        FUN18(VAR10, VAR10, VAR12);
        FUN11(VAR23, VAR22, VAR12);
        FUN11(VAR22, VAR22, VAR10);
        FUN13(VAR22, VAR22, VAR23);
        FUN14(VAR23);
        FUN15(VAR25, VAR22, 0, VAR24);
        FUN16(VAR4, VAR26);
        FUN17(VAR24);
        FUN14(VAR22);
    }
        VAR9 = "";
        break;
    case VAR21:
        FUN18(VAR10, VAR10, VAR12);
        VAR9 = "";
        break;
    case VAR27:
        FUN20(VAR10, VAR12);
        VAR9 = "";
        break;
    case VAR28:
        FUN21(VAR10, VAR12);
        VAR9 = "";
        break;
    case VAR29:
        FUN13(VAR10, VAR10, VAR12);
        VAR9 = "";
        break;
    case VAR30:
        FUN22(VAR10, VAR10, VAR12);
        FUN23(VAR10, VAR10);
        VAR9 = "";
        break;
    case VAR31:
        FUN22(VAR10, VAR10, VAR12);
        VAR9 = "";
        break;
    case VAR32:
        FUN11(VAR10, VAR10, VAR12);
        VAR9 = "";
        break;
    case VAR33:
        FUN24(VAR10, VAR10, VAR12);
        FUN9(VAR10, VAR10);
        VAR9 = "";
        break;
    case VAR34:
    {
        int VAR24 = FUN7();
        FUN15(VAR35, VAR12, 0, VAR24);
        FUN5(VAR10, VAR6);
        FUN17(VAR24);
    }
        VAR9 = "";
        goto VAR36;
    case VAR37:
    {
        int VAR24 = FUN7();
        FUN15(VAR38, VAR12, 0, VAR24);
        FUN5(VAR10, VAR6);
        FUN17(VAR24);
    }
        VAR9 = "";
        goto VAR36;
    case VAR39:
        FUN25(VAR10, VAR10, 0x1f);
        FUN26(VAR10, VAR12, VAR10);
        FUN9(VAR10, VAR10);
        VAR9 = "";
        break;
    case VAR40:
        FUN9(VAR12, VAR12);
        FUN25(VAR10, VAR10, 0x1f);
        FUN27(VAR10, VAR12, VAR10);
        VAR9 = "";
        break;
    case VAR41:
        switch ((VAR4->VAR42 >> 6) & 0x1f)
        {
        case 0:
            FUN28(VAR12, VAR12);
            FUN25(VAR10, VAR10, 0x1f);
            FUN29(VAR10, VAR12, VAR10);
            FUN9(VAR10, VAR10);
            VAR9 = "";
            break;
        case 1:
            if (VAR2->VAR43 & VAR44)
            {
                int VAR24 = FUN7();
                int VAR45 = FUN7();
                FUN25(VAR10, VAR10, 0x1f);
                FUN15(VAR35, VAR10, 0, VAR24);
                {
                    TCGv VAR22 = FUN6(VAR46);
                    TCGv VAR23 = FUN6(VAR46);
                    FUN30(VAR22, VAR10);
                    FUN30(VAR23, VAR12);
                    FUN31(VAR22, VAR22, VAR23);
                    FUN14(VAR22);
                    FUN14(VAR23);
                    FUN32(VAR45);
                }
                FUN17(VAR24);
                FUN19(VAR10, VAR12);
                FUN17(VAR45);
                VAR9 = "";
            }
            else
            {
                FUN28(VAR12, VAR12);
                FUN25(VAR10, VAR10, 0x1f);
                FUN29(VAR10, VAR12, VAR10);
                FUN9(VAR10, VAR10);
                VAR9 = "";
            }
            break;
        default:
            FUN33("");
            FUN16(VAR4, VAR47);
            break;
        }
        break;
    case VAR48:
        FUN25(VAR10, VAR10, 0x3f);
        FUN26(VAR10, VAR12, VAR10);
        VAR9 = "";
        break;
    case VAR49:
        FUN25(VAR10, VAR10, 0x3f);
        FUN27(VAR10, VAR12, VAR10);
        VAR9 = "";
        break;
    case VAR50:
        switch ((VAR4->VAR42 >> 6) & 0x1f)
        {
        case 0:
            FUN25(VAR10, VAR10, 0x3f);
            FUN29(VAR10, VAR12, VAR10);
            VAR9 = "";
            break;
        case 1:
            if (VAR2->VAR43 & VAR44)
            {
                int VAR24 = FUN7();
                int VAR45 = FUN7();
                FUN25(VAR10, VAR10, 0x3f);
                FUN15(VAR35, VAR10, 0, VAR24);
                {
                    FUN34(VAR10, VAR12, VAR10);
                    FUN32(VAR45);
                }
                FUN17(VAR24);
                FUN19(VAR10, VAR12);
                FUN17(VAR45);
                VAR9 = "";
            }
            else
            {
                FUN25(VAR10, VAR10, 0x3f);
                FUN29(VAR10, VAR12, VAR10);
                VAR9 = "";
            }
            break;
        default:
            FUN33("");
            FUN16(VAR4, VAR47);
            break;
        }
        break;
    default:
        FUN33(VAR9);
        FUN16(VAR4, VAR47);
        goto VAR17;
    }
    FUN5(VAR10, VAR6);
VAR36:
    FUN3("", VAR9, VAR51[VAR6], VAR51[VAR7], VAR51[VAR8]);
VAR17:
    FUN14(VAR10);
    FUN14(VAR12);
}