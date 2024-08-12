static void FUN1(VAR1 *VAR2, VAR3 *VAR4)
{
    int VAR5;
    int VAR6;
    int VAR7 = VAR4->VAR7;
    int VAR8 = VAR4->VAR8;
    int VAR9 = VAR4->VAR10;
    int VAR11 = VAR4->VAR12;
    int VAR13 = VAR4->VAR14;
    VAR15 *VAR16 = VAR4->VAR16;
    VAR15 **VAR17 = &VAR4->VAR17[0];
    VAR5 = VAR7 & 3;
    FUN2(VAR17[0], (VAR18)VAR2->VAR19);
    VAR6 = 4;
    FUN3(VAR2, VAR20, VAR6++, VAR13);
    VAR6 |= 1;
    FUN3(VAR2, VAR20, VAR6++, VAR4->VAR21);
    FUN3(VAR2, VAR20, VAR6++, VAR13);
    switch (VAR7)
    {
    case 0:
        FUN4(VAR2, (VAR22 | FUN5(VAR6) | FUN6(VAR9) | FUN7(0) | FUN8(24) | FUN9(31)));
        break;
    case 1:
        FUN4(VAR2, (VAR22 | FUN5(VAR6) | FUN6(VAR9) | FUN7(0) | FUN8(16) | FUN9(31)));
        break;
    case 2:
        FUN3(VAR2, VAR20, VAR6, VAR9);
        break;
    case 3:
        VAR6 |= 1;
        FUN3(VAR2, VAR20, VAR6++, VAR11);
        FUN3(VAR2, VAR20, VAR6, VAR9);
        break;
    }
    VAR6++;
    FUN10(VAR2, VAR20, VAR6, VAR8);
    FUN11(VAR2, (VAR18)VAR23[VAR7], 1);
    FUN4(VAR2, (VAR18)VAR16);
    FUN12(VAR2, 0, (VAR18)VAR16);
}