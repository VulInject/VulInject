static void FUN1(VAR1 *VAR2, const VAR3 *VAR4, int VAR5)
{
    int VAR6, VAR7, VAR8, VAR9, VAR10, VAR11, VAR12, VAR13;
    int VAR14, VAR15;
    void *VAR16, *VAR17;
    int VAR18;
    VAR9 = *VAR4++;
    if (VAR5 == 3)
        VAR10 = *VAR4++;
    else
        VAR10 = 0;
    VAR6 = *VAR4++;
    VAR18 = *VAR4++;
    VAR11 = *VAR4;
    VAR7 = 3;
    VAR8 = 4;
    VAR14 = 0;
    VAR13 = 0;
    FUN2(VAR2, (VAR19 | FUN3(VAR7) | FUN4(VAR6) | FUN5(32 - (VAR20 - VAR21)) | FUN6(32 - (VAR21 + VAR22)) | FUN7(31 - VAR21)));
    FUN2(VAR2, VAR23 | FUN8(VAR7) | FUN3(VAR7) | FUN9(VAR24));
    FUN2(VAR2, (VAR25 | FUN8(VAR8) | FUN3(VAR7) | FUN10(VAR26, VAR27[VAR11][0].VAR28)));
    FUN2(VAR2, (VAR19 | FUN3(VAR14) | FUN4(VAR6) | FUN5(0) | FUN6((32 - VAR5) & 31) | FUN7(31 - VAR20)));
    FUN2(VAR2, VAR29 | (7 << 23) | FUN3(VAR14) | FUN9(VAR8));
    FUN2(VAR2, VAR30 | FUN8(VAR8) | FUN3(VAR7) | 4);
    FUN2(VAR2, VAR29 | FUN11(6) | FUN3(VAR18) | FUN9(VAR8));
    FUN2(VAR2, VAR31 | FUN12(7, VAR32) | FUN13(6, VAR32) | FUN14(7, VAR32));
    VAR16 = VAR2->VAR33;
    FUN2(VAR2, VAR34 | FUN15(7, VAR32) | VAR35);
    FUN16(VAR2, 3, VAR6);
    VAR15 = 4;
    FUN16(VAR2, 3, VAR18);
    FUN16(VAR2, 4, VAR6);
    VAR15 = 5;
    VAR15 = 4;
    switch (VAR5)
    {
    case 0:
        FUN2(VAR2, (VAR19 | FUN3(VAR15) | FUN4(VAR9) | FUN5(0) | FUN6(24) | FUN7(31)));
        break;
    case 1:
        FUN2(VAR2, (VAR19 | FUN3(VAR15) | FUN4(VAR9) | FUN5(0) | FUN6(16) | FUN7(31)));
        break;
    case 2:
        FUN16(VAR2, VAR15, VAR9);
        break;
    case 3:
        VAR15 = 5;
        FUN16(VAR2, VAR15++, VAR10);
        FUN16(VAR2, VAR15, VAR9);
        break;
    }
    VAR15++;
    FUN17(VAR2, VAR36, VAR15, VAR11);
    FUN18(VAR2, (VAR37)VAR38[VAR5], 1);
    VAR17 = VAR2->VAR33;
    FUN2(VAR2, VAR39);
    FUN19(VAR16, (VAR37)VAR2->VAR33);
    FUN2(VAR2, (VAR30 | FUN8(VAR7) | FUN3(VAR7) | (FUN10(VAR40, VAR41) - FUN10(VAR40, VAR28))));
    FUN2(VAR2, VAR23 | FUN8(VAR7) | FUN3(VAR7) | FUN9(VAR6));
    VAR7 = VAR6;
    VAR8 = 3;
    VAR13 = VAR42 ? VAR43 : 0;
    VAR12 = 0;
    VAR12 = 1;
    switch (VAR5)
    {
    case 0:
        FUN2(VAR2, VAR44 | FUN20(VAR9, VAR13, VAR7));
        break;
    case 1:
        if (VAR12)
            FUN2(VAR2, VAR45 | FUN20(VAR9, VAR13, VAR7));
        else
            FUN2(VAR2, VAR46 | FUN20(VAR9, VAR13, VAR7));
        break;
    case 2:
        if (VAR12)
            FUN2(VAR2, VAR47 | FUN20(VAR9, VAR13, VAR7));
        else
            FUN2(VAR2, VAR48 | FUN20(VAR9, VAR13, VAR7));
        break;
    case 3:
        if (VAR12)
        {
            FUN2(VAR2, VAR49 | FUN8(VAR8) | FUN3(VAR7) | 4);
            FUN2(VAR2, VAR47 | FUN20(VAR9, VAR13, VAR7));
            FUN2(VAR2, VAR47 | FUN20(VAR10, VAR13, VAR8));
        }
        else
        {
            FUN2(VAR2, VAR48 | FUN20(VAR10, VAR13, VAR7));
            FUN2(VAR2, VAR49 | FUN8(VAR8) | FUN3(VAR7) | 4);
            FUN2(VAR2, VAR48 | FUN20(VAR9, VAR13, VAR8));
            FUN2(VAR2, VAR50 | FUN4(VAR10) | FUN3(VAR7));
            FUN2(VAR2, VAR50 | FUN4(VAR9) | FUN3(VAR7) | 4);
        }
        break;
    }
    FUN21(VAR17, (VAR37)VAR2->VAR33);
}