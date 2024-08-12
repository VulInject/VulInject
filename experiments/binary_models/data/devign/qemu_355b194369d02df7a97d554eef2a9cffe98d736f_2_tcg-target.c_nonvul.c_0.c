static void FUN1(VAR1 *VAR2, const VAR3 *VAR4, int VAR5)
{
    int VAR6, VAR7, VAR8;
    int VAR9, VAR10, VAR11, VAR12;
    int VAR13, VAR14;
    VAR15 *VAR16, *VAR17;
    int VAR18;
    VAR15 *VAR19;
    int VAR20, VAR21, VAR22;
    VAR9 = *VAR4++;
    if (VAR5 == 3)
    {
        VAR10 = *VAR4++;
        VAR11 = VAR10;
        VAR12 = VAR9;
        VAR11 = VAR9;
        VAR12 = VAR10;
    }
    else
    {
        VAR11 = VAR9;
        VAR12 = 0;
        VAR10 = 0;
    }
    VAR6 = *VAR4++;
    VAR20 = *VAR4++;
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
    VAR13 = *VAR4;
    VAR14 = VAR5;
    FUN2(VAR2, VAR23, VAR24, VAR6, VAR25 - VAR26);
    FUN3(VAR2, VAR27, VAR24, VAR24, (VAR28 - 1) << VAR26);
    FUN4(VAR2, VAR29, VAR24, VAR24, VAR30);
    FUN3(VAR2, VAR31, VAR32, VAR24, FUN5(VAR33, VAR34[VAR13][0].VAR35) + VAR8);
    FUN6(VAR2, VAR36, VAR37, VAR38 | ((1 << VAR14) - 1));
    FUN4(VAR2, VAR39, VAR37, VAR37, VAR6);
    VAR19 = VAR2->VAR40;
    FUN7(VAR2, VAR41, VAR37, VAR32);
    FUN8(VAR2);
    FUN3(VAR2, VAR31, VAR32, VAR24, FUN5(VAR33, VAR34[VAR13][0].VAR35) + VAR22);
    VAR16 = VAR2->VAR40;
    FUN7(VAR2, VAR42, VAR20, VAR32);
    FUN8(VAR2);
    FUN9(VAR19, (VAR43)VAR2->VAR40);
    VAR16 = VAR2->VAR40;
    FUN7(VAR2, VAR42, VAR37, VAR32);
    FUN8(VAR2);
    VAR18 = VAR24;
    FUN10(VAR2, VAR18++, VAR7);
    FUN10(VAR2, VAR18++, VAR21);
    switch (VAR5)
    {
    case 0:
        FUN3(VAR2, VAR27, VAR18++, VAR11, 0xff);
        break;
    case 1:
        FUN3(VAR2, VAR27, VAR18++, VAR11, 0xffff);
        break;
    case 2:
        FUN10(VAR2, VAR18++, VAR11);
        break;
    case 3:
        VAR18 = (VAR18 + 1) & ~1;
        FUN10(VAR2, VAR18++, VAR11);
        FUN10(VAR2, VAR18++, VAR12);
        break;
    default:
        FUN11();
    }
    if (VAR18 > VAR44)
    {
        FUN6(VAR2, VAR36, VAR32, VAR13);
        FUN12(VAR2, VAR36, VAR32, VAR45, 16);
    }
    else
    {
        FUN6(VAR2, VAR36, VAR18, VAR13);
    }
    FUN6(VAR2, VAR36, VAR46, (VAR43)VAR47[VAR14]);
    FUN4(VAR2, VAR48, VAR49, VAR46, 0);
    FUN8(VAR2);
    VAR17 = VAR2->VAR40;
    FUN7(VAR2, VAR42, VAR50, VAR50);
    FUN8(VAR2);
    FUN9(VAR16, (VAR43)VAR2->VAR40);
    FUN3(VAR2, VAR31, VAR24, VAR24, FUN5(VAR33, VAR34[VAR13][0].VAR51));
    FUN4(VAR2, VAR29, VAR24, VAR24, VAR6);
    if (VAR52 == (VAR53)VAR52)
    {
        FUN3(VAR2, VAR54, VAR24, VAR7, VAR52);
    }
    else
    {
        FUN6(VAR2, VAR55, VAR24, VAR52);
        FUN4(VAR2, VAR29, VAR24, VAR24, VAR7);
    }
    switch (VAR5)
    {
    case 0:
        FUN3(VAR2, VAR56, VAR11, VAR24, 0);
        break;
    case 1:
        if (VAR57)
        {
            FUN13(VAR2, VAR37, VAR11);
            FUN3(VAR2, VAR58, VAR37, VAR24, 0);
        }
        else
        {
            FUN3(VAR2, VAR58, VAR11, VAR24, 0);
        }
        break;
    case 2:
        if (VAR57)
        {
            FUN14(VAR2, VAR37, VAR11);
            FUN3(VAR2, VAR59, VAR37, VAR24, 0);
        }
        else
        {
            FUN3(VAR2, VAR59, VAR11, VAR24, 0);
        }
        break;
    case 3:
        if (VAR57)
        {
            FUN14(VAR2, VAR37, VAR12);
            FUN3(VAR2, VAR59, VAR37, VAR24, 0);
            FUN14(VAR2, VAR37, VAR11);
            FUN3(VAR2, VAR59, VAR37, VAR24, 4);
        }
        else
        {
            FUN3(VAR2, VAR59, VAR11, VAR24, 0);
            FUN3(VAR2, VAR59, VAR12, VAR24, 4);
        }
        break;
    default:
        FUN11();
    }
    FUN9(VAR17, (VAR43)VAR2->VAR40);
}