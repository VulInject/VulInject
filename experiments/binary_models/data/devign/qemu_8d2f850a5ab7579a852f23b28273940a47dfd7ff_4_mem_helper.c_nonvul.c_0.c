static VAR1 FUN1(VAR2 *VAR3, uint32_t VAR4, uint64_t VAR5, uint64_t VAR6, bool VAR7)
{
    uint32_t VAR8 = FUN2(VAR3, false);
    uintptr_t VAR9 = FUN3();
    uint32_t VAR10 = FUN4(VAR3->VAR11[0], 0, 8);
    uint32_t VAR12 = FUN4(VAR3->VAR11[0], 8, 8);
    uint64_t VAR13 = FUN5(VAR3, 1) & -16;
    uint64_t VAR14, VAR15;
    uint32_t VAR16;
    if (VAR10 > 1 || VAR12 > 3)
    {
        if (!FUN6(VAR17))
        {
            goto VAR18;
        }
        if (VAR10 > 2 || VAR12 > 4 || (VAR10 == 2 && (VAR4 & 1)))
        {
            goto VAR18;
        }
    }
    if (FUN4(VAR5, 0, 4 << VAR10) || FUN4(VAR6, 0, 1 << VAR12))
    {
        goto VAR18;
    }
    FUN7(VAR3, VAR6, VAR8, VAR9);
    if (VAR7)
    {
        int VAR19 = 0;
        VAR19 = -8;
        VAR19 = -16;
        if (((4 << VAR10) | (1 << VAR12)) & VAR19)
        {
            FUN8(FUN9(VAR3), VAR9);
        }
    }
    VAR14 = FUN10(VAR3, VAR13 + 16, VAR9);
    VAR15 = FUN10(VAR3, VAR13 + 24, VAR9);
    switch (VAR10)
    {
    case 0:
    {
        uint32_t VAR20 = FUN11(VAR3, VAR13, VAR9);
        uint32_t VAR21 = VAR3->VAR11[VAR4];
        uint32_t VAR22;
        if (VAR7)
        {
            VAR1 *VAR23 = FUN12(VAR5);
            VAR22 = FUN13(VAR23, VAR21, VAR20);
            TCGMemOpIdx VAR24 = FUN14(VAR25 | VAR26, VAR8);
            VAR22 = FUN15(VAR3, VAR5, VAR21, VAR20, VAR24, VAR9);
        }
        else
        {
            VAR22 = FUN11(VAR3, VAR5, VAR9);
            FUN16(VAR3, VAR5, (VAR22 == VAR21 ? VAR20 : VAR22), VAR9);
        }
        VAR16 = (VAR22 != VAR21);
        VAR3->VAR11[VAR4] = FUN17(VAR3->VAR11[VAR4], 32, 32, VAR22);
    }
    break;
    case 1:
    {
        uint64_t VAR20 = FUN10(VAR3, VAR13, VAR9);
        uint64_t VAR21 = VAR3->VAR11[VAR4];
        uint64_t VAR22;
        if (VAR7)
        {
            VAR27 *VAR23 = FUN12(VAR5);
            VAR22 = FUN13(VAR23, VAR21, VAR20);
            TCGMemOpIdx VAR24 = FUN14(VAR28 | VAR26, VAR8);
            VAR22 = FUN18(VAR3, VAR5, VAR21, VAR20, VAR24, VAR9);
            FUN19();
        }
        else
        {
            VAR22 = FUN10(VAR3, VAR5, VAR9);
            FUN20(VAR3, VAR5, (VAR22 == VAR21 ? VAR20 : VAR22), VAR9);
        }
        VAR16 = (VAR22 != VAR21);
        VAR3->VAR11[VAR4] = VAR22;
    }
    break;
    case 2:
    {
        uint64_t VAR29 = FUN10(VAR3, VAR13, VAR9);
        uint64_t VAR30 = FUN10(VAR3, VAR13 + 8, VAR9);
        Int128 VAR20 = FUN21(VAR30, VAR29);
        Int128 VAR21 = FUN21(VAR3->VAR11[VAR4 + 1], VAR3->VAR11[VAR4]);
        Int128 VAR22;
        if (VAR7)
        {
            TCGMemOpIdx VAR24 = FUN14(VAR28 | VAR31, VAR8);
            VAR22 = FUN22(VAR3, VAR5, VAR21, VAR20, VAR24, VAR9);
            VAR16 = !FUN23(VAR22, VAR21);
            FUN19();
        }
        else
        {
            uint64_t VAR32 = FUN10(VAR3, VAR5 + 0, VAR9);
            uint64_t VAR33 = FUN10(VAR3, VAR5 + 8, VAR9);
            VAR22 = FUN21(VAR33, VAR32);
            VAR16 = !FUN23(VAR22, VAR21);
            if (VAR16)
            {
                VAR20 = VAR22;
            }
            FUN20(VAR3, VAR5 + 0, FUN24(VAR20), VAR9);
            FUN20(VAR3, VAR5 + 8, FUN25(VAR20), VAR9);
        }
        VAR3->VAR11[VAR4 + 0] = FUN24(VAR22);
        VAR3->VAR11[VAR4 + 1] = FUN25(VAR22);
    }
    break;
    default:
        FUN19();
    }
    if (VAR16 == 0)
    {
        switch (VAR12)
        {
        case 0:
            FUN26(VAR3, VAR6, VAR14 >> 56, VAR9);
            break;
        case 1:
            FUN27(VAR3, VAR6, VAR14 >> 48, VAR9);
            break;
        case 2:
            FUN16(VAR3, VAR6, VAR14 >> 32, VAR9);
            break;
        case 3:
            FUN20(VAR3, VAR6, VAR14, VAR9);
            break;
        case 4:
            if (VAR7)
            {
                TCGMemOpIdx VAR24 = FUN14(VAR28 | VAR31, VAR8);
                Int128 VAR34 = FUN21(VAR15, VAR14);
                FUN28(VAR3, VAR6, VAR34, VAR24, VAR9);
                FUN19();
            }
            else
            {
                FUN20(VAR3, VAR6 + 0, VAR14, VAR9);
                FUN20(VAR3, VAR6 + 8, VAR15, VAR9);
            }
            break;
        default:
            FUN19();
        }
    }
    return VAR16;
VAR18:
    FUN29(VAR3, VAR35, 6, VAR9);
    FUN19();
}