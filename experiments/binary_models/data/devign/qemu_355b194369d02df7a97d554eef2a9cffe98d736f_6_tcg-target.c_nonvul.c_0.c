static void FUN1(VAR1 *VAR2, const VAR3 *VAR4, int VAR5)
{
    int VAR6, VAR7, VAR8, VAR9, VAR10, VAR11, VAR12, VAR13, VAR14;
    int VAR15;
    void *VAR16, *VAR17;
    int VAR18;
    VAR7 = *VAR4++;
    if (VAR5 == 3)
        VAR8 = *VAR4++;
    else
        VAR8 = 0;
    VAR6 = *VAR4++;
    VAR18 = *VAR4++;
    VAR12 = *VAR4;
    VAR13 = VAR5 & 3;
    VAR9 = 3;
    VAR10 = 4;
    VAR15 = 0;
    VAR11 = 0;
    FUN2(VAR2, (VAR19 | FUN3(VAR9) | FUN4(VAR6) | FUN5(32 - (VAR20 - VAR21)) | FUN6(32 - (VAR22 + VAR21)) | FUN7(31 - VAR21)));
    FUN2(VAR2, VAR23 | FUN8(VAR9) | FUN3(VAR9) | FUN9(VAR24));
    FUN2(VAR2, (VAR25 | FUN8(VAR10) | FUN3(VAR9) | FUN10(VAR26, VAR27[VAR12][0].VAR28)));
    FUN2(VAR2, (VAR19 | FUN3(VAR15) | FUN4(VAR6) | FUN5(0) | FUN6((32 - VAR13) & 31) | FUN7(31 - VAR20)));
    FUN2(VAR2, VAR29 | FUN11(7) | FUN3(VAR15) | FUN9(VAR10));
    FUN2(VAR2, VAR30 | FUN8(VAR10) | FUN3(VAR9) | 4);
    FUN2(VAR2, VAR29 | FUN11(6) | FUN3(VAR18) | FUN9(VAR10));
    FUN2(VAR2, VAR31 | FUN12(7, VAR32) | FUN13(6, VAR32) | FUN14(7, VAR32));
    VAR16 = VAR2->VAR33;
    FUN2(VAR2, VAR34 | FUN15(7, VAR32) | VAR35);
    FUN16(VAR2, 3, VAR6);
    FUN17(VAR2, VAR36, 4, VAR12);
    FUN16(VAR2, 3, VAR18);
    FUN16(VAR2, 4, VAR6);
    FUN17(VAR2, VAR36, 5, VAR12);
    FUN18(VAR2, (VAR37)VAR38[VAR13], 1);
    switch (VAR5)
    {
    case 0 | 4:
        FUN2(VAR2, VAR39 | FUN3(VAR7) | FUN4(3));
        break;
    case 1 | 4:
        FUN2(VAR2, VAR40 | FUN3(VAR7) | FUN4(3));
        break;
    case 0:
    case 1:
    case 2:
        if (VAR7 != 3)
            FUN16(VAR2, VAR7, 3);
        break;
    case 3:
        if (VAR7 == 3)
        {
            if (VAR8 == 4)
            {
                FUN16(VAR2, 0, 4);
                FUN16(VAR2, 4, 3);
                FUN16(VAR2, 3, 0);
            }
            else
            {
                FUN16(VAR2, VAR8, 3);
                FUN16(VAR2, 3, 4);
            }
        }
        else
        {
            if (VAR7 != 4)
                FUN16(VAR2, VAR7, 4);
            if (VAR8 != 3)
                FUN16(VAR2, VAR8, 3);
        }
        break;
    }
    VAR17 = VAR2->VAR33;
    FUN2(VAR2, VAR41);
    FUN19(VAR16, (VAR37)VAR2->VAR33);
    FUN2(VAR2, (VAR30 | FUN8(VAR9) | FUN3(VAR9) | (FUN10(VAR42, VAR43) - FUN10(VAR42, VAR28))));
    FUN2(VAR2, VAR23 | FUN8(VAR9) | FUN3(VAR9) | FUN9(VAR6));
    VAR9 = VAR6;
    VAR10 = 3;
    VAR11 = VAR44 ? VAR45 : 0;
    VAR14 = 0;
    VAR14 = 1;
    switch (VAR5)
    {
    default:
    case 0:
        FUN2(VAR2, VAR46 | FUN20(VAR7, VAR11, VAR9));
        break;
    case 0 | 4:
        FUN2(VAR2, VAR46 | FUN20(VAR7, VAR11, VAR9));
        FUN2(VAR2, VAR39 | FUN3(VAR7) | FUN4(VAR7));
        break;
    case 1:
        if (VAR14)
            FUN2(VAR2, VAR47 | FUN20(VAR7, VAR11, VAR9));
        else
            FUN2(VAR2, VAR48 | FUN20(VAR7, VAR11, VAR9));
        break;
    case 1 | 4:
        if (VAR14)
        {
            FUN2(VAR2, VAR47 | FUN20(VAR7, VAR11, VAR9));
            FUN2(VAR2, VAR40 | FUN3(VAR7) | FUN4(VAR7));
        }
        else
            FUN2(VAR2, VAR49 | FUN20(VAR7, VAR11, VAR9));
        break;
    case 2:
        if (VAR14)
            FUN2(VAR2, VAR50 | FUN20(VAR7, VAR11, VAR9));
        else
            FUN2(VAR2, VAR51 | FUN20(VAR7, VAR11, VAR9));
        break;
    case 3:
        if (VAR14)
        {
            FUN2(VAR2, VAR52 | FUN8(VAR10) | FUN3(VAR9) | 4);
            FUN2(VAR2, VAR50 | FUN20(VAR7, VAR11, VAR9));
            FUN2(VAR2, VAR50 | FUN20(VAR8, VAR11, VAR10));
        }
        else
        {
            FUN2(VAR2, VAR52 | FUN8(VAR10) | FUN3(VAR9) | 4);
            FUN2(VAR2, VAR51 | FUN20(VAR8, VAR11, VAR9));
            FUN2(VAR2, VAR51 | FUN20(VAR7, VAR11, VAR10));
            if (VAR9 == VAR8)
            {
                FUN2(VAR2, VAR30 | FUN8(0) | FUN3(VAR9));
                FUN2(VAR2, VAR30 | FUN8(VAR7) | FUN3(VAR9) | 4);
                FUN16(VAR2, VAR8, 0);
            }
            else
            {
                FUN2(VAR2, VAR30 | FUN8(VAR8) | FUN3(VAR9));
                FUN2(VAR2, VAR30 | FUN8(VAR7) | FUN3(VAR9) | 4);
            }
        }
        break;
    }
    FUN21(VAR17, (VAR37)VAR2->VAR33);
}