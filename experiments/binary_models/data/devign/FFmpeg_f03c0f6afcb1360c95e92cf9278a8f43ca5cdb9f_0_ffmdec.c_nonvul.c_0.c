static int FUN1(VAR1 *VAR2, VAR3 *VAR4)
{
    int VAR5;
    VAR6 *VAR7 = VAR2->VAR8;
    int VAR9, VAR10;
    switch (VAR7->VAR11)
    {
    case VAR12:
        if ((VAR10 = FUN2(VAR2, VAR13 + 4)) < 0)
            return VAR10;
        FUN3(VAR2, "" VAR14 "" VAR14 "" VAR14 "" VAR14 "", FUN4(VAR2->VAR15), VAR2->VAR15->VAR16, VAR7->VAR17, VAR7->VAR18);
        if (FUN5(VAR2, VAR7->VAR19, VAR13, 1) != VAR13)
            return -1;
        if (VAR7->VAR19[1] & VAR20)
            if (FUN5(VAR2, VAR7->VAR19 + 16, 4, 1) != 4)
                return -1;
        VAR7->VAR11 = VAR21;
    case VAR21:
        VAR5 = FUN6(VAR7->VAR19 + 2);
        if ((VAR10 = FUN2(VAR2, VAR5)) < 0)
            return VAR10;
        VAR9 = FUN6(VAR7->VAR19 + 5);
        if (FUN7(VAR4, VAR5) < 0)
        {
            return FUN8(VAR22);
        }
        VAR4->VAR23 = VAR7->VAR19[0];
        if ((unsigned)VAR4->VAR23 >= VAR2->VAR24)
        {
            FUN9(VAR2, VAR25, "", VAR4->VAR23);
            FUN10(VAR4);
            VAR7->VAR11 = VAR12;
            return -1;
        }
        VAR4->VAR16 = FUN4(VAR2->VAR15);
        if (VAR7->VAR19[1] & VAR26)
            VAR4->VAR27 |= VAR28;
        VAR7->VAR11 = VAR12;
        if (FUN5(VAR2, VAR4->VAR29, VAR5, 0) != VAR5)
        {
            FUN10(VAR4);
            return -1;
        }
        VAR4->VAR30 = FUN11(VAR7->VAR19 + 8);
        if (VAR7->VAR19[1] & VAR20)
            VAR4->VAR31 = VAR4->VAR30 - FUN12(VAR7->VAR19 + 16);
        else
            VAR4->VAR31 = VAR4->VAR30;
        VAR4->VAR9 = VAR9;
        break;
    }
    return 0;
}