static void FUN1(VAR1 *VAR2, const VAR3 *VAR4, int VAR5)
{
    int VAR6, VAR7, VAR8, VAR9, VAR10, VAR11, VAR12;
    int VAR13;
    void *VAR14, *VAR15;
    VAR10 = *VAR4++;
    VAR6 = *VAR4++;
    VAR11 = *VAR4;
    VAR7 = 3;
    VAR8 = 4;
    VAR13 = 0;
    VAR9 = 0;
    FUN2(VAR2, VAR7, VAR8, VAR13, VAR6, VAR5, FUN3(VAR16, VAR17[VAR11][0].VAR18));
    FUN4(VAR2, VAR19 | FUN5(7) | FUN6(VAR13) | FUN7(VAR8) | VAR20);
    VAR14 = VAR2->VAR21;
    FUN4(VAR2, VAR22 | FUN8(7, VAR23) | VAR24);
    FUN9(VAR2, 3, VAR6);
    FUN10(VAR2, VAR25, 4, VAR10, 0, 64 - (1 << (3 + VAR5)));
    FUN11(VAR2, VAR26, 5, VAR11);
    FUN12(VAR2, (VAR27)VAR28[VAR5], 1);
    VAR15 = VAR2->VAR21;
    FUN4(VAR2, VAR29);
    FUN13(VAR14, (VAR27)VAR2->VAR21);
    FUN4(VAR2, (VAR30 | FUN14(VAR7) | FUN6(VAR7) | (FUN3(VAR31, VAR32) - FUN3(VAR31, VAR18))));
    FUN4(VAR2, VAR33 | FUN14(VAR7) | FUN6(VAR7) | FUN7(VAR6));
    FUN10(VAR2, VAR25, VAR6, VAR6, 0, 32);
    VAR8 = 3;
    VAR7 = VAR6;
    VAR9 = VAR34 ? VAR35 : 0;
    VAR12 = 0;
    VAR12 = 1;
    switch (VAR5)
    {
    case 0:
        FUN4(VAR2, VAR36 | FUN15(VAR10, VAR9, VAR7));
        break;
    case 1:
        if (VAR12)
            FUN4(VAR2, VAR37 | FUN15(VAR10, VAR9, VAR7));
        else
            FUN4(VAR2, VAR38 | FUN15(VAR10, VAR9, VAR7));
        break;
    case 2:
        if (VAR12)
            FUN4(VAR2, VAR39 | FUN15(VAR10, VAR9, VAR7));
        else
            FUN4(VAR2, VAR40 | FUN15(VAR10, VAR9, VAR7));
        break;
    case 3:
        if (VAR12)
        {
            FUN4(VAR2, VAR39 | FUN15(VAR10, VAR9, VAR7));
            FUN4(VAR2, VAR41 | FUN14(VAR8) | FUN6(VAR7) | 4);
            FUN10(VAR2, VAR25, 0, VAR10, 32, 0);
            FUN4(VAR2, VAR39 | FUN15(0, VAR9, VAR8));
        }
        else
            FUN4(VAR2, VAR42 | FUN15(VAR10, VAR9, VAR7));
        break;
    }
    FUN16(VAR15, (VAR27)VAR2->VAR21);
}