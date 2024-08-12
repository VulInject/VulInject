static void FUN1(VAR1 *VAR2, uint32_t VAR3)
{
    int VAR4 = FUN2(VAR3, 0, 5);
    int VAR5 = FUN2(VAR3, 5, 5);
    int VAR6 = FUN2(VAR3, 22, 2);
    int VAR7 = FUN2(VAR3, 12, 5);
    bool VAR8 = FUN2(VAR3, 30, 1);
    bool VAR9 = FUN2(VAR3, 29, 1);
    bool VAR10 = false;
    bool VAR11 = false;
    int VAR12;
    int VAR13;
    int VAR14;
    TCGv_i64 VAR15, VAR16;
    switch (VAR7)
    {
    case 0x1b:
        if (VAR9)
        {
            FUN3(VAR2);
            return;
        }
    case 0x3:
    case 0xa:
    case 0x1a:
        if (VAR6 == 3 || (VAR6 == 2 && !VAR8))
        {
            FUN3(VAR2);
            return;
        }
        break;
    case 0xc:
    case 0xf:
        if (!VAR9 || !VAR8 || FUN2(VAR6, 0, 1))
        {
            FUN3(VAR2);
            return;
        }
        VAR11 = FUN2(VAR6, 1, 1);
        VAR10 = true;
        VAR6 = 2;
        break;
    default:
        FUN3(VAR2);
        return;
    }
    VAR12 = 8 << VAR6;
    VAR13 = (VAR8 ? 128 : 64) / VAR12;
    VAR15 = FUN4();
    VAR16 = FUN4();
    if (!VAR10)
    {
        FUN5(VAR2, VAR15, VAR5, 0, VAR6 | (VAR9 ? 0 : VAR17));
        for (VAR14 = 1; VAR14 < VAR13; VAR14++)
        {
            FUN5(VAR2, VAR16, VAR5, VAR14, VAR6 | (VAR9 ? 0 : VAR17));
            switch (VAR7)
            {
            case 0x03:
            case 0x1b:
                FUN6(VAR15, VAR15, VAR16);
                break;
            case 0x0a:
                FUN7(VAR9 ? VAR18 : VAR19, VAR15, VAR15, VAR16, VAR15, VAR16);
                break;
            case 0x1a:
                FUN7(VAR9 ? VAR20 : VAR21, VAR15, VAR15, VAR16, VAR15, VAR16);
                break;
                break;
            default:
                FUN8();
            }
        }
    }
    else
    {
        TCGv_i32 VAR22 = FUN9();
        TCGv_i32 VAR23 = FUN9();
        TCGv_i32 VAR24 = FUN9();
        TCGv_ptr VAR25 = FUN10();
        assert(VAR12 == 32);
        assert(VAR13 == 4);
        FUN5(VAR2, VAR16, VAR5, 0, VAR26);
        FUN11(VAR22, VAR16);
        FUN5(VAR2, VAR16, VAR5, 1, VAR26);
        FUN11(VAR23, VAR16);
        FUN12(VAR2, VAR22, VAR23, VAR7, VAR11, VAR25);
        FUN5(VAR2, VAR16, VAR5, 2, VAR26);
        FUN11(VAR23, VAR16);
        FUN5(VAR2, VAR16, VAR5, 3, VAR26);
        FUN11(VAR24, VAR16);
        FUN12(VAR2, VAR23, VAR24, VAR7, VAR11, VAR25);
        FUN12(VAR2, VAR22, VAR23, VAR7, VAR11, VAR25);
        FUN13(VAR15, VAR22);
        FUN14(VAR22);
        FUN14(VAR23);
        FUN14(VAR24);
        FUN15(VAR25);
    }
    FUN16(VAR16);
    if (VAR7 == 0x03)
    {
        VAR6++;
    }
    switch (VAR6)
    {
    case 0:
        FUN17(VAR15, VAR15);
        break;
    case 1:
        FUN18(VAR15, VAR15);
        break;
    case 2:
        FUN19(VAR15, VAR15);
        break;
    case 3:
        break;
    default:
        FUN8();
    }
    FUN20(VAR2, VAR4, VAR15);
    FUN16(VAR15);
}