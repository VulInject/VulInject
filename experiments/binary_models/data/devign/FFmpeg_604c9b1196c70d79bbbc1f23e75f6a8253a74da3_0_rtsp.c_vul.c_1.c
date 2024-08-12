int FUN1(VAR1 *VAR2, VAR3 *VAR4)
{
    VAR5 *VAR6 = VAR2->VAR7;
    int VAR8, VAR9;
    VAR10 *VAR11, *VAR12 = NULL;
    int64_t VAR13 = 0;
    if (VAR6->VAR14 == VAR6->VAR15)
        return VAR16;
    if (VAR6->VAR17)
    {
        if (VAR6->VAR18 == VAR19)
        {
            VAR8 = FUN2(VAR6->VAR17, VAR4, NULL, 0);
        }
        else if (VAR6->VAR18 == VAR20)
        {
            VAR8 = FUN3(VAR6->VAR17, VAR4, NULL, 0);
        }
        else if (VAR6->VAR21 && VAR22)
        {
            VAR8 = FUN4(VAR6->VAR21, VAR4, VAR6->VAR23 + VAR6->VAR24, VAR6->VAR25 - VAR6->VAR24);
            if (VAR8 >= 0)
            {
                VAR6->VAR24 += VAR8;
                VAR8 = VAR6->VAR24 < VAR6->VAR25;
            }
        }
        else
            VAR8 = -1;
        if (VAR8 == 0)
        {
            VAR6->VAR17 = NULL;
            return 0;
        }
        else if (VAR8 == 1)
        {
            return 0;
        }
        else
            VAR6->VAR17 = NULL;
    }
VAR26:
    if (VAR6->VAR18 == VAR20)
    {
        int VAR27;
        int64_t VAR28 = 0;
        for (VAR27 = 0; VAR27 < VAR6->VAR15; VAR27++)
        {
            VAR29 *VAR30 = VAR6->VAR31[VAR27]->VAR32;
            int64_t VAR33;
            if (!VAR30)
                continue;
            VAR33 = FUN5(VAR30);
            if (VAR33 && (VAR33 - VAR28 < 0 || !VAR28))
            {
                VAR28 = VAR33;
                VAR12 = VAR6->VAR31[VAR27];
            }
        }
        if (VAR28)
        {
            VAR13 = VAR28 + VAR2->VAR34;
        }
        else
        {
            VAR13 = 0;
            VAR12 = NULL;
        }
    }
    if (!VAR6->VAR23)
    {
        VAR6->VAR23 = FUN6(VAR35);
        if (!VAR6->VAR23)
            return FUN7(VAR36);
    }
    switch (VAR6->VAR37)
    {
    default:
    case VAR38:
        VAR9 = FUN8(VAR2, &VAR11, VAR6->VAR23, VAR35);
        break;
    case VAR39:
    case VAR40:
        VAR9 = FUN9(VAR2, &VAR11, VAR6->VAR23, VAR35, VAR13);
        if (VAR9 > 0 && VAR11->VAR32 && VAR6->VAR18 == VAR20)
            FUN10(VAR11->VAR32, VAR11->VAR41, NULL, VAR9);
        break;
    case VAR42:
        if (VAR12 && VAR6->VAR18 == VAR20 && VAR13 && VAR13 < FUN11())
            VAR9 = FUN7(VAR43);
        else
            VAR9 = FUN12(VAR2->VAR44, VAR6->VAR23, VAR35);
        VAR9 = FUN13(VAR2, &VAR11, VAR6->VAR23, VAR9);
        if (VAR9 > 0 && VAR11->VAR32 && VAR6->VAR18 == VAR20)
            FUN10(VAR11->VAR32, NULL, VAR2->VAR44, VAR9);
        break;
    }
    if (VAR9 == FUN7(VAR43) && VAR12 && VAR6->VAR18 == VAR20)
    {
        VAR11 = VAR12;
        VAR8 = FUN3(VAR11->VAR32, VAR4, NULL, 0);
        goto VAR45;
    }
    if (VAR9 < 0)
        return VAR9;
    if (VAR9 == 0)
        return VAR16;
    if (VAR6->VAR18 == VAR19)
    {
        VAR8 = FUN2(VAR11->VAR32, VAR4, &VAR6->VAR23, VAR9);
    }
    else if (VAR6->VAR18 == VAR20)
    {
        VAR8 = FUN3(VAR11->VAR32, VAR4, &VAR6->VAR23, VAR9);
        if (VAR11->VAR46)
        {
            VAR47 *VAR44 = NULL;
            if (VAR6->VAR37 == VAR42)
                VAR44 = VAR2->VAR44;
            FUN14(VAR11->VAR32, VAR11->VAR41, VAR44);
        }
        if (VAR8 < 0)
        {
            VAR29 *VAR30 = VAR11->VAR32;
            if (VAR30->VAR48 != VAR49)
            {
                int VAR27;
                VAR50 *VAR51 = NULL;
                if (VAR11->VAR52 >= 0)
                    VAR51 = VAR2->VAR53[VAR11->VAR52];
                for (VAR27 = 0; VAR27 < VAR6->VAR15; VAR27++)
                {
                    VAR29 *VAR54 = VAR6->VAR31[VAR27]->VAR32;
                    VAR50 *VAR55 = NULL;
                    if (VAR6->VAR31[VAR27]->VAR52 >= 0)
                        VAR55 = VAR2->VAR53[VAR6->VAR31[VAR27]->VAR52];
                    if (VAR54 && VAR51 && VAR55 && VAR54->VAR48 == VAR49)
                    {
                        VAR54->VAR48 = VAR30->VAR48;
                        VAR54->VAR56 = FUN15(VAR30->VAR56, VAR51->VAR57, VAR55->VAR57);
                    }
                }
            }
            if (VAR8 == -VAR58)
            {
                VAR6->VAR14++;
                FUN16(VAR2, VAR59, "", VAR11->VAR52, VAR6->VAR14, VAR6->VAR15);
                if (VAR6->VAR14 == VAR6->VAR15)
                    return VAR16;
            }
        }
    }
    else if (VAR6->VAR21 && VAR22)
    {
        VAR8 = FUN4(VAR6->VAR21, VAR4, VAR6->VAR23, VAR9);
        if (VAR8 >= 0)
        {
            if (VAR8 < VAR9)
            {
                VAR6->VAR25 = VAR9;
                VAR6->VAR24 = VAR8;
                VAR6->VAR17 = VAR6->VAR21;
                return 1;
            }
            else
            {
                VAR8 = 0;
            }
        }
    }
    else
    {
        return VAR60;
    }
VAR45:
    if (VAR8 < 0)
        goto VAR26;
    if (VAR8 == 1)
        VAR6->VAR17 = VAR11->VAR32;
    return VAR8;
}