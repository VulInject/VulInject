static int FUN1(VAR1 *VAR2, VAR3 *VAR4)
{
    int VAR5, VAR6, VAR7, VAR8, VAR9, VAR10, VAR11;
    int VAR12, VAR13, VAR14, VAR15, VAR16, VAR17, VAR18;
    VAR19 *VAR20, *VAR21, *VAR22, *VAR23, *VAR24;
    int VAR25;
    VAR26 *VAR27;
    if (FUN2(&VAR2->VAR28) < 9)
        return VAR29;
    VAR5 = FUN3(&VAR2->VAR28);
    VAR6 = FUN3(&VAR2->VAR28);
    VAR7 = FUN3(&VAR2->VAR28);
    VAR8 = FUN3(&VAR2->VAR28);
    VAR11 = FUN4(&VAR2->VAR28);
    VAR12 = VAR11 & 0x40;
    VAR13 = VAR11 & 0x80;
    VAR9 = (VAR11 & 0x07) + 1;
    FUN5(VAR2->VAR30, "", VAR5, VAR6, VAR7, VAR8);
    if (VAR13)
    {
        VAR18 = 1 << VAR9;
        if (FUN2(&VAR2->VAR28) < VAR18 * 3)
            return VAR29;
        FUN6(VAR2, VAR2->VAR31, VAR18);
        VAR21 = VAR2->VAR31;
    }
    else
    {
        if (!VAR2->VAR32)
        {
            FUN7(VAR2->VAR30, VAR33, "");
            return VAR29;
        }
        VAR21 = VAR2->VAR34;
    }
    if (VAR2->VAR35)
    {
        if (VAR2->VAR36 == -1 && VAR2->VAR32)
        {
            FUN8(VAR4, VAR2->VAR37);
        }
        else
        {
            FUN8(VAR4, VAR2->VAR38);
        }
    }
    if (VAR5 + VAR7 > VAR2->VAR39 || VAR6 + VAR8 > VAR2->VAR40)
    {
        FUN7(VAR2->VAR30, VAR33, "");
        return VAR29;
    }
    if (VAR7 <= 0 || VAR8 <= 0)
    {
        FUN7(VAR2->VAR30, VAR33, "");
        return VAR29;
    }
    if (VAR2->VAR41 == VAR42)
    {
        FUN9(VAR4, VAR2->VAR43, VAR2->VAR44, VAR2->VAR45, VAR2->VAR46, VAR2->VAR47);
    }
    else if (VAR2->VAR41 == VAR48)
    {
        FUN10(VAR2->VAR49, (VAR19 *)VAR4->VAR50[0], VAR4->VAR17[0] / sizeof(VAR19), VAR2->VAR44, VAR2->VAR45, VAR2->VAR46, VAR2->VAR47);
    }
    VAR2->VAR41 = VAR2->VAR51;
    if (VAR2->VAR51 != VAR52)
    {
        VAR2->VAR44 = VAR5;
        VAR2->VAR45 = VAR6;
        VAR2->VAR46 = VAR7;
        VAR2->VAR47 = VAR8;
        if (VAR2->VAR51 == VAR42)
        {
            if (VAR2->VAR36 >= 0)
                VAR2->VAR43 = VAR2->VAR38;
            else
                VAR2->VAR43 = VAR2->VAR37;
        }
        else if (VAR2->VAR51 == VAR48)
        {
            FUN11(&VAR2->VAR49, &VAR2->VAR53, VAR4->VAR17[0] * VAR4->VAR8);
            if (!VAR2->VAR49)
                return FUN12(VAR54);
            FUN10((VAR19 *)VAR4->VAR50[0], VAR2->VAR49, VAR4->VAR17[0] / sizeof(VAR19), VAR5, VAR6, VAR7, VAR8);
        }
    }
    if (FUN2(&VAR2->VAR28) < 2)
        return VAR29;
    VAR10 = FUN4(&VAR2->VAR28);
    if ((VAR25 = FUN13(VAR2->VAR55, VAR10, VAR2->VAR28.VAR56, FUN2(&VAR2->VAR28), VAR57)) < 0)
    {
        FUN7(VAR2->VAR30, VAR33, "");
        return VAR25;
    }
    VAR17 = VAR4->VAR17[0] / sizeof(VAR19);
    VAR24 = (VAR19 *)VAR4->VAR50[0] + VAR6 * VAR17 + VAR5;
    VAR20 = VAR24;
    VAR15 = 0;
    VAR16 = 0;
    for (VAR14 = 0; VAR14 < VAR8; VAR14++)
    {
        int VAR58 = FUN14(VAR2->VAR55, VAR2->VAR59, VAR7);
        if (VAR58 != VAR7)
        {
            if (VAR58)
                FUN7(VAR2->VAR30, VAR33, "");
            goto VAR60;
        }
        VAR23 = VAR20 + VAR7;
        for (VAR22 = VAR20, VAR27 = VAR2->VAR59; VAR22 < VAR23; VAR22++, VAR27++)
        {
            if (*VAR27 != VAR2->VAR36)
                *VAR22 = VAR21[*VAR27];
        }
        if (VAR12)
        {
            switch (VAR15)
            {
            default:
            case 0:
            case 1:
                VAR16 += 8;
                VAR20 += VAR17 * 8;
                if (VAR16 >= VAR8)
                {
                    VAR16 = VAR15 ? 2 : 4;
                    VAR20 = VAR24 + VAR17 * VAR16;
                    VAR15++;
                }
                break;
            case 2:
                VAR16 += 4;
                VAR20 += VAR17 * 4;
                if (VAR16 >= VAR8)
                {
                    VAR16 = 1;
                    VAR20 = VAR24 + VAR17;
                    VAR15++;
                }
                break;
            case 3:
                VAR16 += 2;
                VAR20 += VAR17 * 2;
                break;
            }
        }
        else
        {
            VAR20 += VAR17;
        }
    }
VAR60:
    FUN15(VAR2->VAR55);
    VAR2->VAR36 = -1;
    VAR2->VAR51 = VAR52;
    return 0;
}