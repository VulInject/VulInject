static void FUN1(VAR1 *VAR2, const VAR3 *VAR4, int VAR5)
{
    int VAR6, VAR7, VAR8, VAR9, VAR10, VAR11, VAR12;
    int VAR13, VAR14, VAR15, VAR16;
    VAR17 *VAR18;
    VAR7 = *VAR4++;
    if (VAR5 == 3)
        VAR8 = *VAR4++;
    else
        VAR8 = 0;
    VAR6 = *VAR4++;
    VAR16 = *VAR4++;
    VAR16 = 0;
    VAR13 = *VAR4;
    VAR14 = VAR5 & 3;
    VAR9 = 3;
    VAR10 = 4;
    VAR15 = 0;
    VAR11 = 0;
    FUN2(VAR2, VAR9, VAR10, VAR15, VAR6, VAR16, VAR14, FUN3(VAR19, VAR20[VAR13][0].VAR21), FUN3(VAR22, VAR23) - FUN3(VAR22, VAR21), &VAR18);
    VAR9 = VAR6;
    VAR10 = 3;
    VAR11 = VAR24 ? VAR25 : 0;
    VAR12 = 0;
    VAR12 = 1;
    switch (VAR5)
    {
    default:
    case 0:
        FUN4(VAR2, VAR26 | FUN5(VAR7, VAR11, VAR9));
        break;
    case 0 | 4:
        FUN4(VAR2, VAR26 | FUN5(VAR7, VAR11, VAR9));
        FUN4(VAR2, VAR27 | FUN6(VAR7) | FUN7(VAR7));
        break;
    case 1:
        if (VAR12)
            FUN4(VAR2, VAR28 | FUN5(VAR7, VAR11, VAR9));
        else
            FUN4(VAR2, VAR29 | FUN5(VAR7, VAR11, VAR9));
        break;
    case 1 | 4:
        if (VAR12)
        {
            FUN4(VAR2, VAR28 | FUN5(VAR7, VAR11, VAR9));
            FUN4(VAR2, VAR30 | FUN6(VAR7) | FUN7(VAR7));
        }
        else
            FUN4(VAR2, VAR31 | FUN5(VAR7, VAR11, VAR9));
        break;
    case 2:
        if (VAR12)
            FUN4(VAR2, VAR32 | FUN5(VAR7, VAR11, VAR9));
        else
            FUN4(VAR2, VAR33 | FUN5(VAR7, VAR11, VAR9));
        break;
    case 3:
        if (VAR12)
        {
            FUN4(VAR2, VAR34 | FUN8(VAR10) | FUN6(VAR9) | 4);
            FUN4(VAR2, VAR32 | FUN5(VAR7, VAR11, VAR9));
            FUN4(VAR2, VAR32 | FUN5(VAR8, VAR11, VAR10));
        }
        else
        {
            FUN4(VAR2, VAR34 | FUN8(VAR10) | FUN6(VAR9) | 4);
            FUN4(VAR2, VAR33 | FUN5(VAR8, VAR11, VAR9));
            FUN4(VAR2, VAR33 | FUN5(VAR7, VAR11, VAR10));
            if (VAR9 == VAR8)
            {
                FUN4(VAR2, VAR35 | FUN8(0) | FUN6(VAR9));
                FUN4(VAR2, VAR35 | FUN8(VAR7) | FUN6(VAR9) | 4);
                FUN9(VAR2, VAR36, VAR8, 0);
            }
            else
            {
                FUN4(VAR2, VAR35 | FUN8(VAR8) | FUN6(VAR9));
                FUN4(VAR2, VAR35 | FUN8(VAR7) | FUN6(VAR9) | 4);
            }
        }
        break;
    }
    FUN10(VAR2, 1, VAR5, VAR7, VAR8, VAR6, VAR16, VAR13, VAR2->VAR37, VAR18);
}