static void FUN1(VAR1 *VAR2, const VAR3 *VAR4, int VAR5)
{
    int VAR6, VAR7, VAR8, VAR9, VAR10, VAR11, VAR12, VAR13;
    int VAR14;
    void *VAR15, *VAR16;
    VAR7 = *VAR4++;
    VAR6 = *VAR4++;
    VAR11 = *VAR4;
    VAR12 = VAR5 & 3;
    VAR8 = 3;
    VAR9 = 4;
    VAR14 = 0;
    VAR10 = 0;
    FUN2(VAR2, VAR8, VAR9, VAR14, VAR6, VAR12, FUN3(VAR17, VAR18[VAR11][0].VAR19));
    FUN4(VAR2, VAR20 | FUN5(7) | FUN6(VAR14) | FUN7(VAR9) | VAR21);
    VAR15 = VAR2->VAR22;
    FUN4(VAR2, VAR23 | FUN8(7, VAR24) | VAR25);
    FUN9(VAR2, 3, VAR6);
    FUN10(VAR2, VAR26, 4, VAR11);
    FUN11(VAR2, (VAR27)VAR28[VAR12], 1);
    switch (VAR5)
    {
    case 0 | 4:
        FUN4(VAR2, VAR29 | FUN6(VAR7) | FUN12(3));
        break;
    case 1 | 4:
        FUN4(VAR2, VAR30 | FUN6(VAR7) | FUN12(3));
        break;
    case 2 | 4:
        FUN4(VAR2, VAR31 | FUN6(VAR7) | FUN12(3));
        break;
    case 0:
    case 1:
    case 2:
    case 3:
        if (VAR7 != 3)
            FUN9(VAR2, VAR7, 3);
        break;
    }
    VAR16 = VAR2->VAR22;
    FUN4(VAR2, VAR32);
    FUN13(VAR15, (VAR27)VAR2->VAR22);
    FUN4(VAR2, (VAR33 | FUN14(VAR8) | FUN6(VAR8) | (FUN3(VAR34, VAR35) - FUN3(VAR34, VAR19))));
    FUN4(VAR2, VAR36 | FUN14(VAR8) | FUN6(VAR8) | FUN7(VAR6));
    FUN15(VAR2, VAR37, VAR6, VAR6, 0, 32);
    VAR8 = VAR6;
    VAR9 = 3;
    VAR10 = VAR38 ? VAR39 : 0;
    VAR13 = 0;
    VAR13 = 1;
    switch (VAR5)
    {
    default:
    case 0:
        FUN4(VAR2, VAR40 | FUN16(VAR7, VAR10, VAR8));
        break;
    case 0 | 4:
        FUN4(VAR2, VAR40 | FUN16(VAR7, VAR10, VAR8));
        FUN4(VAR2, VAR29 | FUN6(VAR7) | FUN12(VAR7));
        break;
    case 1:
        if (VAR13)
            FUN4(VAR2, VAR41 | FUN16(VAR7, VAR10, VAR8));
        else
            FUN4(VAR2, VAR42 | FUN16(VAR7, VAR10, VAR8));
        break;
    case 1 | 4:
        if (VAR13)
        {
            FUN4(VAR2, VAR41 | FUN16(VAR7, VAR10, VAR8));
            FUN4(VAR2, VAR30 | FUN6(VAR7) | FUN12(VAR7));
        }
        else
            FUN4(VAR2, VAR43 | FUN16(VAR7, VAR10, VAR8));
        break;
    case 2:
        if (VAR13)
            FUN4(VAR2, VAR44 | FUN16(VAR7, VAR10, VAR8));
        else
            FUN4(VAR2, VAR45 | FUN16(VAR7, VAR10, VAR8));
        break;
    case 2 | 4:
        if (VAR13)
        {
            FUN4(VAR2, VAR44 | FUN16(VAR7, VAR10, VAR8));
            FUN4(VAR2, VAR31 | FUN6(VAR7) | FUN12(VAR7));
        }
        else
            FUN4(VAR2, VAR46 | FUN16(VAR7, VAR10, VAR8));
        break;
    case 3:
        if (VAR13)
        {
            FUN4(VAR2, VAR47 | FUN14(VAR9) | FUN6(VAR8) | 4);
            FUN4(VAR2, VAR44 | FUN16(VAR7, VAR10, VAR8));
            FUN4(VAR2, VAR44 | FUN16(VAR9, VAR10, VAR9));
            FUN15(VAR2, VAR48, VAR7, VAR9, 32, 0);
        }
        else
            FUN4(VAR2, VAR49 | FUN16(VAR7, VAR10, VAR8));
        if (VAR13)
        {
            FUN17(VAR2, 0, 4);
            FUN4(VAR2, VAR44 | FUN14(VAR7) | FUN7(VAR8));
            FUN4(VAR2, VAR44 | FUN14(VAR9) | FUN6(VAR8));
            FUN15(VAR2, VAR48, VAR7, VAR9, 32, 0);
        }
        else
            FUN4(VAR2, VAR33 | FUN14(VAR7) | FUN6(VAR8));
        break;
    }
    FUN18(VAR16, (VAR27)VAR2->VAR22);
}