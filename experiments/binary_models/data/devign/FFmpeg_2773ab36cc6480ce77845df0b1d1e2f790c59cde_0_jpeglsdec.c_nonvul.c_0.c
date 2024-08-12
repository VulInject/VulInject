int FUN1(VAR1 *VAR2)
{
    int VAR3;
    int VAR4, VAR5, VAR6, VAR7, VAR8;
    int VAR9 = FUN2(&VAR2->VAR10, 16);
    VAR3 = FUN2(&VAR2->VAR10, 8);
    switch (VAR3)
    {
    case 1:
        if (VAR9 < 13)
            return VAR11;
        VAR2->VAR12 = FUN2(&VAR2->VAR10, 16);
        VAR2->VAR13 = FUN2(&VAR2->VAR10, 16);
        VAR2->VAR14 = FUN2(&VAR2->VAR10, 16);
        VAR2->VAR15 = FUN2(&VAR2->VAR10, 16);
        VAR2->VAR16 = FUN2(&VAR2->VAR10, 16);
        break;
    case 2:
        VAR2->VAR17 = 0;
    case 3:
        VAR4 = FUN2(&VAR2->VAR10, 8);
        VAR5 = FUN2(&VAR2->VAR10, 8);
        if (VAR9 < 5)
            return VAR11;
        if (VAR5 < 1 || VAR5 > VAR18)
        {
            FUN3(VAR2->VAR19, "", VAR5);
            return VAR20;
        }
        if (!VAR2->VAR12)
            VAR6 = 255;
        else if ((5 + VAR5 * (VAR2->VAR12 + 1)) < 65535)
            VAR6 = VAR2->VAR12;
        else
            VAR6 = 65530 / VAR5 - 1;
        if (VAR2->VAR19->VAR21 & VAR22)
        {
            FUN4(VAR2->VAR19, VAR23, "", VAR3, VAR4, VAR5, VAR6);
        }
        if (VAR6 >= 256)
        {
            FUN3(VAR2->VAR19, "");
            return VAR20;
        }
        VAR6 = FUN5(VAR6, (VAR9 - 5) / VAR5 + VAR2->VAR17);
        if (VAR2->VAR17 > VAR6)
            return VAR11;
        if ((VAR2->VAR19->VAR24 == VAR25 || VAR2->VAR19->VAR24 == VAR26) && (VAR2->VAR27->VAR28 == VAR25 || VAR2->VAR27->VAR28 == VAR26))
        {
            VAR29 *VAR30 = VAR2->VAR27->VAR31[1];
            VAR2->VAR27->VAR28 = VAR2->VAR19->VAR24 = VAR26;
            for (VAR7 = VAR2->VAR17; VAR7 <= VAR6; VAR7++)
            {
                VAR30[VAR7] = 0;
                for (VAR8 = 0; VAR8 < VAR5; VAR8++)
                {
                    VAR30[VAR7] |= FUN2(&VAR2->VAR10, 8) << (8 * (VAR5 - VAR8 - 1));
                }
            }
            VAR2->VAR17 = VAR7;
        }
        break;
    case 4:
        FUN3(VAR2->VAR19, "");
        return FUN6(VAR32);
    default:
        FUN4(VAR2->VAR19, VAR33, "", VAR3);
        return VAR11;
    }
    FUN7(VAR2->VAR19, "", VAR3, VAR2->VAR13, VAR2->VAR14, VAR2->VAR15);
    return 0;
}