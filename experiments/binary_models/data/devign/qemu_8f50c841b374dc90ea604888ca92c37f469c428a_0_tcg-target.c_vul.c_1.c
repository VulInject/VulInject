static void FUN1(VAR1 *VAR2, const VAR3 *VAR4, int VAR5)
{
    int VAR6, VAR7, VAR8, VAR9, VAR10, VAR11, VAR12;
    int VAR13, VAR14, VAR15;
    VAR16 *VAR17;
    VAR9 = *VAR4++;
    if (VAR5 == 3)
        VAR10 = *VAR4++;
    else
        VAR10 = 0;
    VAR6 = *VAR4++;
    VAR15 = *VAR4++;
    VAR15 = 0;
    VAR13 = *VAR4;
    VAR7 = 3;
    VAR8 = 4;
    VAR14 = 0;
    VAR12 = 0;
    FUN2(VAR2, VAR7, VAR8, VAR14, VAR6, VAR15, VAR5 & 3, FUN3(VAR18, VAR19[VAR13][0].VAR20), FUN3(VAR21, VAR22) - FUN3(VAR21, VAR20), &VAR17);
    VAR7 = VAR6;
    VAR8 = 3;
    VAR12 = VAR23 ? VAR24 : 0;
    VAR11 = 0;
    VAR11 = 1;
    switch (VAR5)
    {
    case 0:
        FUN4(VAR2, VAR25 | FUN5(VAR9, VAR12, VAR7));
        break;
    case 1:
        if (VAR11)
            FUN4(VAR2, VAR26 | FUN5(VAR9, VAR12, VAR7));
        else
            FUN4(VAR2, VAR27 | FUN5(VAR9, VAR12, VAR7));
        break;
    case 2:
        if (VAR11)
            FUN4(VAR2, VAR28 | FUN5(VAR9, VAR12, VAR7));
        else
            FUN4(VAR2, VAR29 | FUN5(VAR9, VAR12, VAR7));
        break;
    case 3:
        if (VAR11)
        {
            FUN4(VAR2, VAR30 | FUN6(VAR8) | FUN7(VAR7) | 4);
            FUN4(VAR2, VAR28 | FUN5(VAR9, VAR12, VAR7));
            FUN4(VAR2, VAR28 | FUN5(VAR10, VAR12, VAR8));
        }
        else
        {
            FUN4(VAR2, VAR29 | FUN5(VAR10, VAR12, VAR7));
            FUN4(VAR2, VAR30 | FUN6(VAR8) | FUN7(VAR7) | 4);
            FUN4(VAR2, VAR29 | FUN5(VAR9, VAR12, VAR8));
            FUN4(VAR2, VAR31 | FUN8(VAR10) | FUN7(VAR7));
            FUN4(VAR2, VAR31 | FUN8(VAR9) | FUN7(VAR7) | 4);
        }
        break;
    }
    FUN9(VAR2, 0, VAR5, VAR9, VAR10, VAR6, VAR15, VAR13, VAR2->VAR32, VAR17);
}