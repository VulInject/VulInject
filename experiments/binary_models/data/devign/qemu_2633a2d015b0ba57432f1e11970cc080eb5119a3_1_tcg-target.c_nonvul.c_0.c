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
    case 0 | 4:
        FUN9(VAR2, VAR31, VAR7, VAR6, VAR26);
        break;
    case 1:
        FUN10(VAR2, VAR31, VAR7, VAR6, VAR26);
        if (VAR9)
        {
            FUN11(VAR2, VAR31, VAR7, VAR7);
        }
        break;
    case 1 | 4:
        if (VAR9)
        {
            FUN10(VAR2, VAR31, VAR7, VAR6, VAR26);
            FUN12(VAR2, VAR31, VAR7, VAR7);
        }
        else
        {
            FUN13(VAR2, VAR31, VAR7, VAR6, VAR26);
        }
        break;
    case 2:
    default:
        FUN14(VAR2, VAR31, VAR7, VAR6, VAR26);
        if (VAR9)
        {
            FUN15(VAR2, VAR31, VAR7, VAR7);
        }
        break;
    case 3:
        if (VAR9)
        {
            FUN16(VAR2, VAR31, VAR8, VAR26, VAR6);
            FUN6(VAR2, VAR31, VAR7, VAR26, 4);
            FUN15(VAR2, VAR31, VAR8, VAR8);
            FUN15(VAR2, VAR31, VAR7, VAR7);
        }
        else
        {
            FUN16(VAR2, VAR31, VAR7, VAR26, VAR6);
            FUN6(VAR2, VAR31, VAR8, VAR26, 4);
        }
        break;
    }
    VAR14 = (void *)VAR2->VAR34;
    FUN17(VAR2, VAR31, 8);
    if (VAR6 != VAR20)
    {
        FUN2(VAR2, VAR15, VAR16, VAR20, 0, VAR6, FUN5(0));
    }
    FUN4(VAR2, VAR15, VAR16, VAR26, 0, VAR10);
    FUN2(VAR2, VAR15, VAR16, VAR26, 0, VAR12, FUN5(0));
    FUN4(VAR2, VAR15, VAR16, VAR35, 0, VAR10);
    FUN18(VAR2, VAR15, (VAR36)VAR37[VAR11] - (VAR36)VAR2->VAR34);
    switch (VAR5)
    {
    case 0 | 4:
        FUN19(VAR2, VAR15, VAR7, VAR20);
        break;
    case 1 | 4:
        FUN20(VAR2, VAR15, VAR7, VAR20);
        break;
    case 0:
    case 1:
    case 2:
    default:
        if (VAR7 != VAR20)
        {
            FUN2(VAR2, VAR15, VAR16, VAR7, 0, VAR20, FUN5(0));
        }
        break;
    case 3:
        if (VAR7 != VAR20)
        {
            FUN2(VAR2, VAR15, VAR16, VAR7, 0, VAR20, FUN5(0));
        }
        if (VAR8 != VAR26)
        {
            FUN2(VAR2, VAR15, VAR16, VAR8, 0, VAR26, FUN5(0));
        }
        break;
    }
    *VAR14 += ((void *)VAR2->VAR34 - (void *)VAR14 - 8) >> 2;
    if (VAR38)
    {
        uint32_t VAR39 = VAR38;
        int VAR40;
        int VAR41;
        while (VAR39)
        {
            VAR40 = FUN21(VAR39) & ~1;
            VAR41 = ((32 - VAR40) << 7) & 0xf00;
            FUN4(VAR2, VAR15, VAR22, VAR17, VAR6, ((VAR39 >> VAR40) & 0xff) | VAR41);
            VAR6 = VAR17;
            VAR39 &= ~(0xff << VAR40);
        }
    }
    switch (VAR5)
    {
    case 0:
        FUN22(VAR2, VAR15, VAR7, VAR6, 0);
        break;
    case 0 | 4:
        FUN23(VAR2, VAR15, VAR7, VAR6, 0);
        break;
    case 1:
        FUN24(VAR2, VAR15, VAR7, VAR6, 0);
        if (VAR9)
        {
            FUN11(VAR2, VAR15, VAR7, VAR7);
        }
        break;
    case 1 | 4:
        if (VAR9)
        {
            FUN24(VAR2, VAR15, VAR7, VAR6, 0);
            FUN12(VAR2, VAR15, VAR7, VAR7);
        }
        else
        {
            FUN25(VAR2, VAR15, VAR7, VAR6, 0);
        }
        break;
    case 2:
    default:
        FUN6(VAR2, VAR15, VAR7, VAR6, 0);
        if (VAR9)
        {
            FUN15(VAR2, VAR15, VAR7, VAR7);
        }
        break;
    case 3:
        if (VAR7 == VAR6)
        {
            FUN6(VAR2, VAR15, VAR8, VAR6, VAR9 ? 0 : 4);
            FUN6(VAR2, VAR15, VAR7, VAR6, VAR9 ? 4 : 0);
        }
        else
        {
            FUN6(VAR2, VAR15, VAR7, VAR6, VAR9 ? 4 : 0);
            FUN6(VAR2, VAR15, VAR8, VAR6, VAR9 ? 0 : 4);
        }
        if (VAR9)
        {
            FUN15(VAR2, VAR15, VAR7, VAR7);
            FUN15(VAR2, VAR15, VAR8, VAR8);
        }
        break;
    }
}