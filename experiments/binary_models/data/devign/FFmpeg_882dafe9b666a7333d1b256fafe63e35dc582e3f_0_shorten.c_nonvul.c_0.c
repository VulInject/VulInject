static int FUN1(VAR1 *VAR2, void *VAR3, int *VAR4, VAR5 *VAR6)
{
    const VAR7 *VAR8 = VAR6->VAR3;
    int VAR9 = VAR6->VAR10;
    VAR11 *VAR12 = VAR2->VAR13;
    int VAR14, VAR15 = 0;
    VAR16 *VAR17 = VAR3;
    int VAR18;
    if (VAR12->VAR19 == 0)
    {
        void *VAR20;
        VAR12->VAR19 = 1024;
        VAR20 = FUN2(VAR12->VAR21, &VAR12->VAR22, VAR12->VAR19);
        if (!VAR20)
        {
            FUN3(VAR2, VAR23, "");
            return FUN4(VAR24);
        }
        VAR12->VAR21 = VAR20;
    }
    if (1 && VAR12->VAR19)
    {
        VAR9 = FUN5(VAR9, VAR12->VAR19 - VAR12->VAR25);
        VAR15 = VAR9;
        if (VAR12->VAR26 + VAR12->VAR25 + VAR9 > VAR12->VAR22)
        {
            memmove(VAR12->VAR21, &VAR12->VAR21[VAR12->VAR26], VAR12->VAR25);
            VAR12->VAR26 = 0;
        }
        memcpy(&VAR12->VAR21[VAR12->VAR26 + VAR12->VAR25], VAR8, VAR9);
        VAR8 = &VAR12->VAR21[VAR12->VAR26];
        VAR9 += VAR12->VAR25;
        VAR12->VAR25 = VAR9;
        if (VAR9 < VAR12->VAR19)
        {
            *VAR4 = 0;
            return VAR15;
        }
    }
    FUN6(&VAR12->VAR27, VAR8, VAR9 * 8);
    FUN7(&VAR12->VAR27, VAR12->VAR28);
    if (!VAR12->VAR29)
    {
        if ((VAR18 = FUN8(VAR12)) < 0)
            return VAR18;
        *VAR4 = 0;
    }
    else
    {
        int VAR30;
        int VAR31;
        VAR30 = FUN9(&VAR12->VAR27, VAR32);
        if (VAR30 > VAR33)
        {
            FUN3(VAR2, VAR23, "", VAR30);
            if (VAR12->VAR25 > 0)
            {
                VAR12->VAR26++;
                VAR12->VAR25--;
            }
            return -1;
        }
        if (!VAR34[VAR30])
        {
            switch (VAR30)
            {
            case VAR33:
                VAR31 = FUN9(&VAR12->VAR27, VAR35);
                while (VAR31--)
                {
                    FUN9(&VAR12->VAR27, VAR36);
                }
                break;
            case VAR37:
                VAR12->VAR38 = FUN9(&VAR12->VAR27, VAR39);
                break;
            case VAR40:
            {
                int VAR29 = FUN10(VAR12, FUN11(VAR12->VAR29));
                if (VAR29 > VAR12->VAR29)
                {
                    FUN3(VAR2, VAR23, "");
                    return VAR41;
                }
                if (!VAR29 || VAR29 > VAR42)
                {
                    FUN3(VAR2, VAR23, ""
                                                "",
                           VAR29);
                    return FUN4(VAR43);
                }
                VAR12->VAR29 = VAR29;
                break;
            }
            case VAR44:
                break;
            }
            *VAR4 = 0;
        }
        else
        {
            int VAR45 = 0;
            int VAR46 = VAR12->VAR47;
            int32_t VAR48;
            if (VAR30 != VAR49)
            {
                VAR45 = FUN9(&VAR12->VAR27, VAR50);
                if (VAR12->VAR51 == 0)
                    VAR45--;
            }
            if (VAR12->VAR52 == 0)
                VAR48 = VAR12->VAR53[VAR46][0];
            else
            {
                int32_t VAR54 = (VAR12->VAR51 < 2) ? 0 : VAR12->VAR52 / 2;
                for (VAR14 = 0; VAR14 < VAR12->VAR52; VAR14++)
                    VAR54 += VAR12->VAR53[VAR46][VAR14];
                VAR48 = VAR54 / VAR12->VAR52;
                if (VAR12->VAR51 >= 2)
                    VAR48 >>= FUN5(1, VAR12->VAR38);
            }
            if (VAR30 == VAR49)
            {
                for (VAR14 = 0; VAR14 < VAR12->VAR29; VAR14++)
                    VAR12->VAR55[VAR46][VAR14] = 0;
            }
            else
            {
                if ((VAR18 = FUN12(VAR12, VAR30, VAR46, VAR45, VAR48)) < 0)
                    return VAR18;
            }
            if (VAR12->VAR52 > 0)
            {
                int32_t VAR54 = (VAR12->VAR51 < 2) ? 0 : VAR12->VAR29 / 2;
                for (VAR14 = 0; VAR14 < VAR12->VAR29; VAR14++)
                    VAR54 += VAR12->VAR55[VAR46][VAR14];
                for (VAR14 = 1; VAR14 < VAR12->VAR52; VAR14++)
                    VAR12->VAR53[VAR46][VAR14 - 1] = VAR12->VAR53[VAR46][VAR14];
                if (VAR12->VAR51 < 2)
                    VAR12->VAR53[VAR46][VAR12->VAR52 - 1] = VAR54 / VAR12->VAR29;
                else
                    VAR12->VAR53[VAR46][VAR12->VAR52 - 1] = (VAR54 / VAR12->VAR29) << VAR12->VAR38;
            }
            for (VAR14 = -VAR12->VAR56; VAR14 < 0; VAR14++)
                VAR12->VAR55[VAR46][VAR14] = VAR12->VAR55[VAR46][VAR14 + VAR12->VAR29];
            FUN13(VAR12, VAR12->VAR55[VAR46]);
            VAR12->VAR47++;
            if (VAR12->VAR47 == VAR12->VAR57)
            {
                int VAR58 = VAR12->VAR29 * VAR12->VAR57 * FUN14(VAR2->VAR59);
                if (*VAR4 < VAR58)
                {
                    FUN3(VAR2, VAR23, "");
                    return FUN4(VAR43);
                }
                VAR17 = FUN15(VAR17, VAR12->VAR57, VAR12->VAR29, VAR12->VAR55);
                VAR12->VAR47 = 0;
                *VAR4 = VAR58;
            }
            else
            {
                *VAR4 = 0;
            }
        }
    }
    VAR12->VAR28 = FUN16(&VAR12->VAR27) - 8 * ((FUN16(&VAR12->VAR27)) / 8);
    VAR14 = (FUN16(&VAR12->VAR27)) / 8;
    if (VAR14 > VAR9)
    {
        FUN3(VAR12->VAR2, VAR23, "", VAR14 - VAR9);
        VAR12->VAR25 = 0;
        VAR12->VAR26 = 0;
        return -1;
    }
    if (VAR12->VAR25)
    {
        VAR12->VAR26 += VAR14;
        VAR12->VAR25 -= VAR14;
        return VAR15;
    }
    else
        return VAR14;
}