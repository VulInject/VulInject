static void FUN1(VAR1 *VAR2, const VAR3 *VAR4, int VAR5)
{
    int VAR6, VAR7, VAR8;
    int VAR9, VAR10, VAR11, VAR12;
    int VAR13, VAR14;
    void *VAR15, *VAR16;
    int VAR17;
    VAR18 *VAR19;
    int VAR20, VAR21, VAR22;
    VAR9 = *VAR4++;
    if (VAR5 == 3)
        VAR10 = *VAR4++;
    else
        VAR10 = 0;
    VAR6 = *VAR4++;
    VAR20 = *VAR4++;
    VAR13 = *VAR4;
    VAR14 = VAR5 & 3;
    if (VAR5 == 3)
    {
        VAR11 = VAR10;
        VAR12 = VAR9;
        VAR11 = VAR9;
        VAR12 = VAR10;
    }
    else
    {
        VAR11 = VAR9;
        VAR12 = 0;
    }
    VAR7 = VAR20;
    VAR21 = VAR6;
    VAR22 = 0;
    VAR8 = 4;
    VAR7 = VAR6;
    VAR21 = VAR20;
    VAR22 = 4;
    VAR8 = 0;
    VAR7 = VAR6;
    VAR8 = 0;
    FUN2(VAR2, VAR23, VAR24, VAR6, VAR25 - VAR26);
    FUN3(VAR2, VAR27, VAR24, VAR24, (VAR28 - 1) << VAR26);
    FUN4(VAR2, VAR29, VAR24, VAR24, VAR30);
    FUN3(VAR2, VAR31, VAR32, VAR24, FUN5(VAR33, VAR34[VAR13][0].VAR35) + VAR8);
    FUN6(VAR2, VAR36, VAR37, VAR38 | ((1 << VAR14) - 1));
    FUN4(VAR2, VAR39, VAR37, VAR37, VAR6);
    VAR19 = VAR2->VAR40;
    FUN3(VAR2, VAR41, VAR37, VAR32, 0);
    FUN7(VAR2);
    FUN3(VAR2, VAR31, VAR32, VAR24, FUN5(VAR33, VAR34[VAR13][0].VAR35) + VAR22);
    VAR15 = VAR2->VAR40;
    FUN3(VAR2, VAR42, VAR20, VAR32, 0);
    FUN7(VAR2);
    FUN8(VAR19, (VAR43)VAR2->VAR40);
    VAR15 = VAR2->VAR40;
    FUN3(VAR2, VAR42, VAR37, VAR32, 0);
    FUN7(VAR2);
    VAR17 = VAR24;
    FUN9(VAR2, VAR17++, VAR7);
    FUN9(VAR2, VAR17++, VAR21);
    FUN6(VAR2, VAR36, VAR17++, VAR13);
    FUN6(VAR2, VAR36, VAR44, (VAR43)VAR45[VAR14]);
    FUN4(VAR2, VAR46, VAR47, VAR44, 0);
    FUN7(VAR2);
    switch (VAR5)
    {
    case 0:
        FUN3(VAR2, VAR27, VAR11, VAR48, 0xff);
        break;
    case 0 | 4:
        FUN2(VAR2, VAR49, VAR48, VAR48, 24);
        FUN2(VAR2, VAR50, VAR11, VAR48, 24);
        break;
    case 1:
        FUN3(VAR2, VAR27, VAR11, VAR48, 0xffff);
        break;
    case 1 | 4:
        FUN2(VAR2, VAR49, VAR48, VAR48, 16);
        FUN2(VAR2, VAR50, VAR11, VAR48, 16);
        break;
    case 2:
        FUN9(VAR2, VAR11, VAR48);
        break;
    case 3:
        FUN9(VAR2, VAR12, VAR51);
        FUN9(VAR2, VAR11, VAR48);
        break;
    default:
        FUN10();
    }
    VAR16 = VAR2->VAR40;
    FUN3(VAR2, VAR42, VAR52, VAR52, 0);
    FUN7(VAR2);
    FUN8(VAR15, (VAR43)VAR2->VAR40);
    FUN3(VAR2, VAR31, VAR48, VAR24, FUN5(VAR33, VAR34[VAR13][0].VAR53) + VAR8);
    FUN4(VAR2, VAR29, VAR48, VAR48, VAR6);
    VAR7 = VAR48;
    switch (VAR5)
    {
    case 0:
        FUN3(VAR2, VAR54, VAR11, VAR7, 0);
        break;
    case 0 | 4:
        FUN3(VAR2, VAR55, VAR11, VAR7, 0);
        break;
    case 1:
        if (VAR56)
        {
            FUN3(VAR2, VAR57, VAR37, VAR7, 0);
            FUN11(VAR2, VAR11, VAR37);
        }
        else
        {
            FUN3(VAR2, VAR57, VAR11, VAR7, 0);
        }
        break;
    case 1 | 4:
        if (VAR56)
        {
            FUN3(VAR2, VAR57, VAR37, VAR7, 0);
            FUN12(VAR2, VAR11, VAR37);
        }
        else
        {
            FUN3(VAR2, VAR58, VAR11, VAR7, 0);
        }
        break;
    case 2:
        if (VAR56)
        {
            FUN3(VAR2, VAR31, VAR37, VAR7, 0);
            FUN13(VAR2, VAR11, VAR37);
        }
        else
        {
            FUN3(VAR2, VAR31, VAR11, VAR7, 0);
        }
        break;
    case 3:
        FUN9(VAR2, VAR48, VAR7);
        VAR7 = VAR48;
        if (VAR56)
        {
            FUN3(VAR2, VAR31, VAR37, VAR7, 4);
            FUN13(VAR2, VAR11, VAR37);
            FUN3(VAR2, VAR31, VAR37, VAR7, 0);
            FUN13(VAR2, VAR12, VAR37);
        }
        else
        {
            FUN3(VAR2, VAR31, VAR11, VAR7, 0);
            FUN3(VAR2, VAR31, VAR12, VAR7, 4);
        }
        break;
    default:
        FUN10();
    }
    FUN8(VAR16, (VAR43)VAR2->VAR40);
}