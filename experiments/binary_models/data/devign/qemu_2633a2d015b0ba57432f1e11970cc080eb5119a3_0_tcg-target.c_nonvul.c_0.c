static inline void FUN1(VAR1 *VAR2, const VAR3 *VAR4, int VAR5)
{
    int VAR6, VAR7, VAR8, VAR9;
    int VAR10, VAR11;
    int VAR12;
    VAR13 *VAR14;
    VAR9 = 1;
    VAR9 = 0;
    VAR7 = *VAR4++;
    if (VAR5 == 3)
        VAR8 = *VAR4++;
    else
        VAR8 = 0;
    VAR6 = *VAR4++;
    VAR12 = *VAR4++;
    VAR10 = *VAR4;
    VAR11 = VAR5 & 3;
    FUN2(VAR2, VAR15, VAR16, VAR17, 0, VAR6, FUN3(VAR18));
    FUN4(VAR2, VAR15, VAR19, VAR20, VAR17, VAR21 - 1);
    FUN2(VAR2, VAR15, VAR22, VAR20, VAR23, VAR20, FUN5(VAR24));
    if (VAR10)
        FUN4(VAR2, VAR15, VAR22, VAR20, VAR20, (VAR10 << (VAR25 & 1)) | ((16 - (VAR25 >> 1)) << 8));
    FUN6(VAR2, VAR15, VAR26, VAR20, FUN7(VAR27, VAR28[0][0].VAR29));
    FUN2(VAR2, VAR15, VAR30, 0, VAR26, VAR17, FUN5(VAR18));
    if (VAR11)
        FUN4(VAR2, VAR31, VAR32, 0, VAR6, (1 << VAR11) - 1);
    FUN6(VAR2, VAR31, VAR26, VAR20, FUN7(VAR27, VAR28[0][0].VAR29) + 4);
    FUN2(VAR2, VAR31, VAR30, 0, VAR26, VAR12, FUN5(0));
    FUN6(VAR2, VAR31, VAR26, VAR20, FUN7(VAR27, VAR28[0][0].VAR33));
    switch (VAR5)
    {
    case 0:
        FUN8(VAR2, VAR31, VAR7, VAR6, VAR26);
        break;
    case 1:
        if (VAR9)
        {
            FUN9(VAR2, VAR31, VAR20, VAR7);
            FUN10(VAR2, VAR31, VAR20, VAR6, VAR26);
        }
        else
        {
            FUN10(VAR2, VAR31, VAR7, VAR6, VAR26);
        }
        break;
    case 2:
    default:
        if (VAR9)
        {
            FUN11(VAR2, VAR31, VAR20, VAR7);
            FUN12(VAR2, VAR31, VAR20, VAR6, VAR26);
        }
        else
        {
            FUN12(VAR2, VAR31, VAR7, VAR6, VAR26);
        }
        break;
    case 3:
        if (VAR9)
        {
            FUN11(VAR2, VAR31, VAR20, VAR8);
            FUN13(VAR2, VAR31, VAR20, VAR26, VAR6);
            FUN11(VAR2, VAR31, VAR20, VAR7);
            FUN14(VAR2, VAR31, VAR7, VAR26, 4);
        }
        else
        {
            FUN13(VAR2, VAR31, VAR7, VAR26, VAR6);
            FUN14(VAR2, VAR31, VAR8, VAR26, 4);
        }
        break;
    }
    VAR14 = (void *)VAR2->VAR34;
    FUN15(VAR2, VAR31, 8);
    FUN2(VAR2, VAR15, VAR16, VAR20, 0, VAR6, FUN5(0));
    switch (VAR5)
    {
    case 0:
        FUN16(VAR2, VAR15, VAR26, VAR7);
        FUN4(VAR2, VAR15, VAR16, VAR35, 0, VAR10);
        break;
    case 1:
        FUN17(VAR2, VAR15, VAR26, VAR7);
        FUN4(VAR2, VAR15, VAR16, VAR35, 0, VAR10);
        break;
    case 2:
        FUN2(VAR2, VAR15, VAR16, VAR26, 0, VAR7, FUN5(0));
        FUN4(VAR2, VAR15, VAR16, VAR35, 0, VAR10);
        break;
    case 3:
        FUN2(VAR2, VAR15, VAR16, VAR26, 0, VAR7, FUN5(0));
        if (VAR8 != VAR35)
        {
            FUN2(VAR2, VAR15, VAR16, VAR35, 0, VAR8, FUN5(0));
        }
        FUN4(VAR2, VAR15, VAR16, VAR36, 0, VAR10);
        break;
    }
    FUN2(VAR2, VAR15, VAR16, VAR26, 0, VAR12, FUN5(0));
    switch (VAR5)
    {
    case 0:
        FUN16(VAR2, VAR15, VAR35, VAR7);
        FUN4(VAR2, VAR15, VAR16, VAR36, 0, VAR10);
        break;
    case 1:
        FUN17(VAR2, VAR15, VAR35, VAR7);
        FUN4(VAR2, VAR15, VAR16, VAR36, 0, VAR10);
        break;
    case 2:
        if (VAR7 != VAR35)
        {
            FUN2(VAR2, VAR15, VAR16, VAR35, 0, VAR7, FUN5(0));
        }
        FUN4(VAR2, VAR15, VAR16, VAR36, 0, VAR10);
        break;
    case 3:
        FUN4(VAR2, VAR15, VAR16, VAR17, 0, VAR10);
        FUN18(VAR2, (VAR15 << 28) | 0x052d8010);
        if (VAR7 != VAR35)
        {
            FUN2(VAR2, VAR15, VAR16, VAR35, 0, VAR7, FUN5(0));
        }
        if (VAR8 != VAR36)
        {
            FUN2(VAR2, VAR15, VAR16, VAR36, 0, VAR8, FUN5(0));
        }
        break;
    }
    FUN19(VAR2, VAR15, (VAR37)VAR38[VAR11] - (VAR37)VAR2->VAR34);
    if (VAR5 == 3)
        FUN4(VAR2, VAR15, VAR22, VAR39, VAR39, 0x10);
    *VAR14 += ((void *)VAR2->VAR34 - (void *)VAR14 - 8) >> 2;
    if (VAR40)
    {
        uint32_t VAR41 = VAR40;
        int VAR42;
        int VAR43;
        while (VAR41)
        {
            VAR42 = FUN20(VAR41) & ~1;
            VAR43 = ((32 - VAR42) << 7) & 0xf00;
            FUN4(VAR2, VAR15, VAR22, VAR26, VAR6, ((VAR41 >> VAR42) & 0xff) | VAR43);
            VAR6 = VAR26;
            VAR41 &= ~(0xff << VAR42);
        }
    }
    switch (VAR5)
    {
    case 0:
        FUN21(VAR2, VAR15, VAR7, VAR6, 0);
        break;
    case 1:
        if (VAR9)
        {
            FUN9(VAR2, VAR15, VAR20, VAR7);
            FUN22(VAR2, VAR15, VAR20, VAR6, 0);
        }
        else
        {
            FUN22(VAR2, VAR15, VAR7, VAR6, 0);
        }
        break;
    case 2:
    default:
        if (VAR9)
        {
            FUN11(VAR2, VAR15, VAR20, VAR7);
            FUN14(VAR2, VAR15, VAR20, VAR6, 0);
        }
        else
        {
            FUN14(VAR2, VAR15, VAR7, VAR6, 0);
        }
        break;
    case 3:
        if (VAR9)
        {
            FUN11(VAR2, VAR15, VAR20, VAR8);
            FUN14(VAR2, VAR15, VAR20, VAR6, 0);
            FUN11(VAR2, VAR15, VAR20, VAR7);
            FUN14(VAR2, VAR15, VAR20, VAR6, 4);
        }
        else
        {
            FUN14(VAR2, VAR15, VAR7, VAR6, 0);
            FUN14(VAR2, VAR15, VAR8, VAR6, 4);
        }
        break;
    }
}