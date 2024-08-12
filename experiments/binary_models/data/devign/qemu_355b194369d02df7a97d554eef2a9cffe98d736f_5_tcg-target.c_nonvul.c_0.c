static void FUN1(VAR1 *VAR2, const VAR3 *VAR4, int VAR5)
{
    int VAR6, VAR7, VAR8, VAR9, VAR10, VAR11, VAR12;
    VAR13 *VAR14, *VAR15;
    VAR7 = *VAR4++;
    VAR6 = *VAR4++;
    VAR11 = *VAR4;
    VAR12 = VAR5 & 3;
    VAR8 = VAR16;
    VAR9 = VAR17;
    VAR10 = VAR18;
    FUN2(VAR2, VAR9, VAR6, VAR19 - VAR20, VAR21);
    FUN2(VAR2, VAR8, VAR6, VAR22 | ((1 << VAR12) - 1), VAR23);
    FUN3(VAR2, VAR9, (VAR24 - 1) << VAR20);
    FUN4(VAR2, VAR9, FUN5(VAR25, VAR26[VAR11][0].VAR27));
    FUN6(VAR2, VAR9, VAR28, VAR9, VAR29);
    FUN7(VAR2, VAR30 | FUN8(VAR10) | FUN9(VAR9) | FUN10(VAR31));
    FUN6(VAR2, VAR31, VAR8, VAR10, VAR32);
    VAR14 = (VAR13 *)VAR2->VAR33;
    FUN7(VAR2, 0);
    FUN11(VAR2, VAR8, VAR6);
    FUN12(VAR2, VAR34, VAR9, VAR11);
    FUN7(VAR2, VAR35 | ((((VAR36)VAR37[VAR12] - (VAR36)VAR2->VAR33) >> 2) & 0x3fffffff));
    FUN13(VAR2, VAR28, VAR38, VAR39 - VAR40 - sizeof(long), VAR41);
    FUN13(VAR2, VAR28, VAR38, VAR39 - VAR40 - sizeof(long), VAR42);
    switch (VAR5)
    {
    case 0 | 4:
        FUN2(VAR2, VAR7, VAR8, (int)sizeof(VAR43) * 8 - 8, VAR44);
        FUN2(VAR2, VAR7, VAR7, (int)sizeof(VAR43) * 8 - 8, VAR45);
        break;
    case 1 | 4:
        FUN2(VAR2, VAR7, VAR8, (int)sizeof(VAR43) * 8 - 16, VAR44);
        FUN2(VAR2, VAR7, VAR7, (int)sizeof(VAR43) * 8 - 16, VAR45);
        break;
    case 2 | 4:
        FUN2(VAR2, VAR7, VAR8, 32, VAR44);
        FUN2(VAR2, VAR7, VAR7, 32, VAR45);
        break;
    case 0:
    case 1:
    case 2:
    case 3:
    default:
        FUN11(VAR2, VAR7, VAR8);
        break;
    }
    VAR15 = (VAR13 *)VAR2->VAR33;
    FUN7(VAR2, 0);
    FUN14(VAR2);
    *VAR14 = (FUN15(0) | FUN16(VAR46, 0) | FUN17(0x2) | FUN18((unsigned long)VAR2->VAR33 - (unsigned long)VAR14));
    *VAR14 = (FUN15(0) | FUN16(VAR46, 0) | FUN17(0x1) | (0x5 << 19) | FUN19((unsigned long)VAR2->VAR33 - (unsigned long)VAR14));
    FUN13(VAR2, VAR9, VAR9, FUN5(VAR47, VAR48) - FUN5(VAR47, VAR27), VAR49);
    FUN12(VAR2, VAR34, VAR50, 0xffffffff);
    FUN6(VAR2, VAR8, VAR6, VAR50, VAR23);
    FUN6(VAR2, VAR8, VAR8, VAR9, VAR29);
    FUN6(VAR2, VAR8, VAR6, VAR9, VAR29);
    VAR8 = VAR6;
    switch (VAR5)
    {
    case 0:
        FUN13(VAR2, VAR7, VAR8, 0, VAR51);
        break;
    case 0 | 4:
        FUN13(VAR2, VAR7, VAR8, 0, VAR52);
        break;
    case 1:
        FUN13(VAR2, VAR7, VAR8, 0, VAR53);
        FUN20(VAR2, VAR7, VAR8, 0, VAR54, VAR55);
        break;
    case 1 | 4:
        FUN13(VAR2, VAR7, VAR8, 0, VAR56);
        FUN20(VAR2, VAR7, VAR8, 0, VAR57, VAR55);
        break;
    case 2:
        FUN13(VAR2, VAR7, VAR8, 0, VAR58);
        FUN20(VAR2, VAR7, VAR8, 0, VAR59, VAR55);
        break;
    case 2 | 4:
        FUN13(VAR2, VAR7, VAR8, 0, VAR60);
        FUN20(VAR2, VAR7, VAR8, 0, VAR61, VAR55);
        break;
    case 3:
        FUN13(VAR2, VAR7, VAR8, 0, VAR62);
        FUN20(VAR2, VAR7, VAR8, 0, VAR63, VAR55);
        break;
    default:
        FUN21();
    }
    *VAR15 = (FUN15(0) | FUN16(VAR64, 0) | FUN17(0x2) | FUN18((unsigned long)VAR2->VAR33 - (unsigned long)VAR15));
}