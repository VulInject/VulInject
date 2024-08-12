static void FUN1(VAR1 *VAR2, uint32_t VAR3, int VAR4, int VAR5)
{
    const char *VAR6 = "";
    TCGv VAR7, VAR8;
    unsigned int VAR9;
    switch (VAR3)
    {
    case VAR10:
    case VAR11:
    case VAR12:
    case VAR13:
        VAR7 = FUN2();
        VAR8 = FUN2();
        break;
    default:
        VAR7 = FUN3();
        VAR8 = FUN3();
        break;
    }
    FUN4(VAR7, VAR4);
    FUN4(VAR8, VAR5);
    switch (VAR3)
    {
    case VAR10:
    {
        int VAR14 = FUN5();
        int VAR15 = FUN5();
        FUN6(VAR7, VAR7);
        FUN6(VAR8, VAR8);
        FUN7(VAR16, VAR8, 0, VAR14);
        FUN7(VAR17, VAR7, VAR18, VAR15);
        FUN7(VAR17, VAR8, -1, VAR15);
        FUN8(VAR19[0], VAR7);
        FUN9(VAR20[0], 0);
        FUN10(VAR14);
        FUN11(VAR15);
        FUN12(VAR19[0], VAR7, VAR8);
        FUN13(VAR20[0], VAR7, VAR8);
        FUN6(VAR19[0], VAR19[0]);
        FUN6(VAR20[0], VAR20[0]);
        FUN11(VAR14);
    }
        VAR6 = "";
        break;
    case VAR11:
    {
        int VAR14 = FUN5();
        FUN14(VAR7, VAR7);
        FUN14(VAR8, VAR8);
        FUN7(VAR16, VAR8, 0, VAR14);
        FUN15(VAR19[0], VAR7, VAR8);
        FUN16(VAR20[0], VAR7, VAR8);
        FUN6(VAR19[0], VAR19[0]);
        FUN6(VAR20[0], VAR20[0]);
        FUN11(VAR14);
    }
        VAR6 = "";
        break;
    case VAR21:
    {
        TCGv_i64 VAR22 = FUN17();
        TCGv_i64 VAR23 = FUN17();
        VAR9 = ((VAR2->VAR24) >> 11) & 0x03;
        if (VAR9 != 0)
        {
            FUN18(VAR2);
        }
        FUN19(VAR22, VAR7);
        FUN19(VAR23, VAR8);
        FUN20(VAR22, VAR22, VAR23);
        FUN21(VAR23);
        FUN22(VAR7, VAR22);
        FUN23(VAR22, VAR22, 32);
        FUN22(VAR8, VAR22);
        FUN21(VAR22);
        FUN6(VAR19[VAR9], VAR7);
        FUN6(VAR20[VAR9], VAR8);
    }
        VAR6 = "";
        break;
    case VAR25:
    {
        TCGv_i64 VAR22 = FUN17();
        TCGv_i64 VAR23 = FUN17();
        VAR9 = ((VAR2->VAR24) >> 11) & 0x03;
        if (VAR9 != 0)
        {
            FUN18(VAR2);
        }
        FUN14(VAR7, VAR7);
        FUN14(VAR8, VAR8);
        FUN24(VAR22, VAR7);
        FUN24(VAR23, VAR8);
        FUN20(VAR22, VAR22, VAR23);
        FUN21(VAR23);
        FUN22(VAR7, VAR22);
        FUN23(VAR22, VAR22, 32);
        FUN22(VAR8, VAR22);
        FUN21(VAR22);
        FUN6(VAR19[VAR9], VAR7);
        FUN6(VAR20[VAR9], VAR8);
    }
        VAR6 = "";
        break;
    case VAR12:
    {
        int VAR14 = FUN5();
        int VAR15 = FUN5();
        FUN7(VAR16, VAR8, 0, VAR14);
        FUN7(VAR17, VAR7, -1LL << 63, VAR15);
        FUN7(VAR17, VAR8, -1LL, VAR15);
        FUN8(VAR19[0], VAR7);
        FUN9(VAR20[0], 0);
        FUN10(VAR14);
        FUN11(VAR15);
        FUN25(VAR19[0], VAR7, VAR8);
        FUN26(VAR20[0], VAR7, VAR8);
        FUN11(VAR14);
    }
        VAR6 = "";
        break;
    case VAR13:
    {
        int VAR14 = FUN5();
        FUN7(VAR16, VAR8, 0, VAR14);
        FUN27(VAR19[0], VAR7, VAR8);
        FUN28(VAR20[0], VAR7, VAR8);
        FUN11(VAR14);
    }
        VAR6 = "";
        break;
    case VAR26:
        FUN29(VAR27, VAR7, VAR8);
        VAR6 = "";
        break;
    case VAR28:
        FUN30(VAR27, VAR7, VAR8);
        VAR6 = "";
        break;
    case VAR29:
    {
        TCGv_i64 VAR22 = FUN17();
        TCGv_i64 VAR23 = FUN17();
        VAR9 = ((VAR2->VAR24) >> 11) & 0x03;
        if (VAR9 != 0)
        {
            FUN18(VAR2);
        }
        FUN19(VAR22, VAR7);
        FUN19(VAR23, VAR8);
        FUN20(VAR22, VAR22, VAR23);
        FUN31(VAR23, VAR19[VAR9], VAR20[VAR9]);
        FUN32(VAR22, VAR22, VAR23);
        FUN21(VAR23);
        FUN22(VAR7, VAR22);
        FUN23(VAR22, VAR22, 32);
        FUN22(VAR8, VAR22);
        FUN21(VAR22);
        FUN6(VAR19[VAR9], VAR7);
        FUN6(VAR20[VAR9], VAR8);
    }
        VAR6 = "";
        break;
    case VAR30:
    {
        TCGv_i64 VAR22 = FUN17();
        TCGv_i64 VAR23 = FUN17();
        VAR9 = ((VAR2->VAR24) >> 11) & 0x03;
        if (VAR9 != 0)
        {
            FUN18(VAR2);
        }
        FUN14(VAR7, VAR7);
        FUN14(VAR8, VAR8);
        FUN24(VAR22, VAR7);
        FUN24(VAR23, VAR8);
        FUN20(VAR22, VAR22, VAR23);
        FUN31(VAR23, VAR19[VAR9], VAR20[VAR9]);
        FUN32(VAR22, VAR22, VAR23);
        FUN21(VAR23);
        FUN22(VAR7, VAR22);
        FUN23(VAR22, VAR22, 32);
        FUN22(VAR8, VAR22);
        FUN21(VAR22);
        FUN6(VAR19[VAR9], VAR7);
        FUN6(VAR20[VAR9], VAR8);
    }
        VAR6 = "";
        break;
    case VAR31:
    {
        TCGv_i64 VAR22 = FUN17();
        TCGv_i64 VAR23 = FUN17();
        VAR9 = ((VAR2->VAR24) >> 11) & 0x03;
        if (VAR9 != 0)
        {
            FUN18(VAR2);
        }
        FUN19(VAR22, VAR7);
        FUN19(VAR23, VAR8);
        FUN20(VAR22, VAR22, VAR23);
        FUN31(VAR23, VAR19[VAR9], VAR20[VAR9]);
        FUN33(VAR22, VAR23, VAR22);
        FUN21(VAR23);
        FUN22(VAR7, VAR22);
        FUN23(VAR22, VAR22, 32);
        FUN22(VAR8, VAR22);
        FUN21(VAR22);
        FUN6(VAR19[VAR9], VAR7);
        FUN6(VAR20[VAR9], VAR8);
    }
        VAR6 = "";
        break;
    case VAR32:
    {
        TCGv_i64 VAR22 = FUN17();
        TCGv_i64 VAR23 = FUN17();
        VAR9 = ((VAR2->VAR24) >> 11) & 0x03;
        if (VAR9 != 0)
        {
            FUN18(VAR2);
        }
        FUN14(VAR7, VAR7);
        FUN14(VAR8, VAR8);
        FUN24(VAR22, VAR7);
        FUN24(VAR23, VAR8);
        FUN20(VAR22, VAR22, VAR23);
        FUN31(VAR23, VAR19[VAR9], VAR20[VAR9]);
        FUN33(VAR22, VAR23, VAR22);
        FUN21(VAR23);
        FUN22(VAR7, VAR22);
        FUN23(VAR22, VAR22, 32);
        FUN22(VAR8, VAR22);
        FUN21(VAR22);
        FUN6(VAR19[VAR9], VAR7);
        FUN6(VAR20[VAR9], VAR8);
    }
        VAR6 = "";
        break;
    default:
        FUN34(VAR6);
        FUN35(VAR2, VAR33);
        goto VAR34;
    }
    (void)VAR6;
    FUN36("", VAR6, VAR35[VAR4], VAR35[VAR5]);
VAR34:
    FUN37(VAR7);
    FUN37(VAR8);
}