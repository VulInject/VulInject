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
    FUN4(VAR2, VAR20, VAR6, VAR8);
    FUN5(VAR2, (VAR18)VAR22[VAR5], 1);
    FUN6(VAR2, (VAR18)VAR16);
    switch (VAR7)
    {
    case 0 | 4:
        FUN6(VAR2, VAR23 | FUN7(VAR9) | FUN8(3));
        break;
    case 1 | 4:
        FUN6(VAR2, VAR24 | FUN7(VAR9) | FUN8(3));
        break;
    case 0:
    case 1:
    case 2:
        if (VAR9 != 3)
            FUN3(VAR2, VAR20, VAR9, 3);
        break;
    case 3:
        if (VAR9 == 3)
        {
            if (VAR11 == 4)
            {
                FUN3(VAR2, VAR20, 0, 4);
                FUN3(VAR2, VAR20, 4, 3);
                FUN3(VAR2, VAR20, 3, 0);
            }
            else
            {
                FUN3(VAR2, VAR20, VAR11, 3);
                FUN3(VAR2, VAR20, 3, 4);
            }
        }
        else
        {
            if (VAR9 != 4)
                FUN3(VAR2, VAR20, VAR9, 4);
            if (VAR11 != 3)
                FUN3(VAR2, VAR20, VAR11, 3);
        }
        break;
    }
    FUN9(VAR2, 0, (VAR18)VAR16);
}