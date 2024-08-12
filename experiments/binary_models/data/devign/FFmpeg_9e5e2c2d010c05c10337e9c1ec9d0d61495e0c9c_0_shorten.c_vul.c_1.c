static int FUN1(VAR1 *VAR2, void *VAR3, int *VAR4, VAR5 *VAR6)
{
    const VAR7 *VAR8 = VAR6->VAR3;
    int VAR9 = VAR6->VAR10;
    VAR11 *VAR12 = VAR2->VAR13;
    int VAR14, VAR15 = 0;
    VAR16 *VAR17 = VAR3;
    if (VAR12->VAR18 == 0)
    {
        VAR12->VAR18 = 1024;
        VAR12->VAR19 = FUN2(VAR12->VAR19, &VAR12->VAR20, VAR12->VAR18);
    }
    if (1 && VAR12->VAR18)
    {
        VAR9 = FUN3(VAR9, VAR12->VAR18 - VAR12->VAR21);
        VAR15 = VAR9;
        if (VAR12->VAR22 + VAR12->VAR21 + VAR9 > VAR12->VAR20)
        {
            memmove(VAR12->VAR19, &VAR12->VAR19[VAR12->VAR22], VAR12->VAR21);
            VAR12->VAR22 = 0;
        }
        memcpy(&VAR12->VAR19[VAR12->VAR22 + VAR12->VAR21], VAR8, VAR9);
        VAR8 = &VAR12->VAR19[VAR12->VAR22];
        VAR9 += VAR12->VAR21;
        VAR12->VAR21 = VAR9;
        if (VAR9 < VAR12->VAR18)
        {
            *VAR4 = 0;
            return VAR15;
        }
    }
    FUN4(&VAR12->VAR23, VAR8, VAR9 * 8);
    FUN5(&VAR12->VAR23, VAR12->VAR24);
    if (!VAR12->VAR25)
    {
        int VAR26;
        if ((VAR26 = FUN6(VAR12)) < 0)
            return VAR26;
        *VAR4 = 0;
    }
    else
    {
        int VAR27;
        int VAR28;
        VAR27 = FUN7(&VAR12->VAR23, VAR29);
        if (VAR27 > VAR30)
        {
            FUN8(VAR2, VAR31, "", VAR27);
            if (VAR12->VAR21 > 0)
            {
                VAR12->VAR22++;
                VAR12->VAR21--;
            }
            return -1;
        }
        if (!VAR32[VAR27])
        {
            switch (VAR27)
            {
            case VAR30:
                VAR28 = FUN7(&VAR12->VAR23, VAR33);
                while (VAR28--)
                {
                    FUN7(&VAR12->VAR23, VAR34);
                }
                break;
            case VAR35:
                VAR12->VAR36 = FUN7(&VAR12->VAR23, VAR37);
                break;
            case VAR38:
            {
                int VAR25 = FUN9(VAR12, FUN10(VAR12->VAR25));
                if (VAR25 > VAR12->VAR25)
                {
                    FUN8(VAR2, VAR31, "");
                    return VAR39;
                }
                VAR12->VAR25 = VAR25;
                break;
            }
            case VAR40:
                break;
            }
            *VAR4 = 0;
        }
        else
        {
            int VAR26;
            int VAR41 = 0;
            int VAR42 = VAR12->VAR43;
            int32_t VAR44;
            if (VAR27 != VAR45)
            {
                VAR41 = FUN7(&VAR12->VAR23, VAR46);
                if (VAR12->VAR47 == 0)
                    VAR41--;
            }
            if (VAR12->VAR48 == 0)
                VAR44 = VAR12->VAR49[VAR42][0];
            else
            {
                int32_t VAR50 = (VAR12->VAR47 < 2) ? 0 : VAR12->VAR48 / 2;
                for (VAR14 = 0; VAR14 < VAR12->VAR48; VAR14++)
                    VAR50 += VAR12->VAR49[VAR42][VAR14];
                VAR44 = VAR50 / VAR12->VAR48;
                if (VAR12->VAR47 >= 2)
                    VAR44 >>= FUN3(1, VAR12->VAR36);
            }
            switch (VAR27)
            {
            case VAR45:
                for (VAR14 = 0; VAR14 < VAR12->VAR25; VAR14++)
                    VAR12->VAR51[VAR42][VAR14] = 0;
                break;
            case VAR52:
                for (VAR14 = 0; VAR14 < VAR12->VAR25; VAR14++)
                    VAR12->VAR51[VAR42][VAR14] = FUN11(&VAR12->VAR23, VAR41) + VAR44;
                break;
            case VAR53:
                for (VAR14 = 0; VAR14 < VAR12->VAR25; VAR14++)
                    VAR12->VAR51[VAR42][VAR14] = FUN11(&VAR12->VAR23, VAR41) + VAR12->VAR51[VAR42][VAR14 - 1];
                break;
            case VAR54:
                for (VAR14 = 0; VAR14 < VAR12->VAR25; VAR14++)
                    VAR12->VAR51[VAR42][VAR14] = FUN11(&VAR12->VAR23, VAR41) + 2 * VAR12->VAR51[VAR42][VAR14 - 1] - VAR12->VAR51[VAR42][VAR14 - 2];
                break;
            case VAR55:
                for (VAR14 = 0; VAR14 < VAR12->VAR25; VAR14++)
                    VAR12->VAR51[VAR42][VAR14] = FUN11(&VAR12->VAR23, VAR41) + 3 * VAR12->VAR51[VAR42][VAR14 - 1] - 3 * VAR12->VAR51[VAR42][VAR14 - 2] + VAR12->VAR51[VAR42][VAR14 - 3];
                break;
            case VAR56:
                if ((VAR26 = FUN12(VAR12, VAR42, VAR41, VAR44)) < 0)
                    return VAR26;
                break;
            }
            if (VAR12->VAR48 > 0)
            {
                int32_t VAR50 = (VAR12->VAR47 < 2) ? 0 : VAR12->VAR25 / 2;
                for (VAR14 = 0; VAR14 < VAR12->VAR25; VAR14++)
                    VAR50 += VAR12->VAR51[VAR42][VAR14];
                for (VAR14 = 1; VAR14 < VAR12->VAR48; VAR14++)
                    VAR12->VAR49[VAR42][VAR14 - 1] = VAR12->VAR49[VAR42][VAR14];
                if (VAR12->VAR47 < 2)
                    VAR12->VAR49[VAR42][VAR12->VAR48 - 1] = VAR50 / VAR12->VAR25;
                else
                    VAR12->VAR49[VAR42][VAR12->VAR48 - 1] = (VAR50 / VAR12->VAR25) << VAR12->VAR36;
            }
            for (VAR14 = -VAR12->VAR57; VAR14 < 0; VAR14++)
                VAR12->VAR51[VAR42][VAR14] = VAR12->VAR51[VAR42][VAR14 + VAR12->VAR25];
            FUN13(VAR12, VAR12->VAR51[VAR42]);
            VAR12->VAR43++;
            if (VAR12->VAR43 == VAR12->VAR58)
            {
                VAR17 = FUN14(VAR17, VAR12->VAR58, VAR12->VAR25, VAR12->VAR51);
                VAR12->VAR43 = 0;
                *VAR4 = (VAR59 *)VAR17 - (VAR59 *)VAR3;
            }
            else
            {
                *VAR4 = 0;
            }
        }
    }
    VAR12->VAR24 = FUN15(&VAR12->VAR23) - 8 * ((FUN15(&VAR12->VAR23)) / 8);
    VAR14 = (FUN15(&VAR12->VAR23)) / 8;
    if (VAR14 > VAR9)
    {
        FUN8(VAR12->VAR2, VAR31, "", VAR14 - VAR9);
        VAR12->VAR21 = 0;
        VAR12->VAR22 = 0;
        return -1;
    }
    if (VAR12->VAR21)
    {
        VAR12->VAR22 += VAR14;
        VAR12->VAR21 -= VAR14;
        return VAR15;
    }
    else
        return VAR14;
}