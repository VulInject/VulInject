static void FUN1(void *VAR1, VAR2 *VAR3)
{
    VAR4 *VAR5 = VAR1;
    int VAR6, VAR7, VAR8, VAR9;
    int VAR10, VAR11, VAR12, VAR13, VAR14, VAR15, VAR16;
    VAR17 *VAR18;
    VAR2 *VAR19, VAR20;
    char VAR21[80];
    int VAR22 = 0;
    if (!(VAR5->VAR23 & 0x20))
    {
        VAR6 = VAR24;
    }
    else
    {
        VAR6 = VAR5->VAR25[6] & 1;
    }
    if (VAR6 != VAR5->VAR6)
    {
        VAR5->VAR6 = VAR6;
        VAR22 = 1;
    }
    if (VAR5->VAR26 == -1)
    {
        VAR5->VAR26 = 0;
        VAR22 = 1;
    }
    switch (VAR6)
    {
    case VAR27:
        VAR22 |= FUN2(VAR5);
        VAR11 = (VAR5->VAR28[9] & 0x1f) + 1;
        VAR10 = 8;
        if (!(VAR5->VAR29[1] & 0x01))
            VAR10 = 9;
        if (VAR5->VAR29[1] & 0x08)
            VAR10 = 16;
        VAR12 = (VAR5->VAR28[0x01] + 1);
        if (VAR5->VAR28[0x06] == 100)
        {
            VAR13 = 100;
        }
        else
        {
            VAR13 = VAR5->VAR28[0x12] | ((VAR5->VAR28[0x07] & 0x02) << 7) | ((VAR5->VAR28[0x07] & 0x40) << 3);
            VAR13 = (VAR13 + 1) / VAR11;
        }
        VAR14 = (VAR13 * VAR12);
        if (VAR14 > VAR30)
        {
            if (!VAR22)
                return;
            snprintf(VAR21, sizeof(VAR21), "", VAR12, VAR13);
            break;
        }
        if (VAR12 != VAR5->VAR26 || VAR13 != VAR5->VAR31 || VAR10 != VAR5->VAR32 || VAR11 != VAR5->VAR33)
        {
            VAR5->VAR34 = VAR12 * VAR10;
            VAR5->VAR35 = VAR13 * VAR11;
            VAR5->VAR36->VAR37->VAR12 = VAR12;
            VAR5->VAR36->VAR37->VAR13 = VAR13;
            FUN3(VAR5->VAR36);
            VAR5->VAR26 = VAR12;
            VAR5->VAR31 = VAR13;
            VAR5->VAR33 = VAR11;
            VAR5->VAR32 = VAR10;
            VAR22 = 1;
        }
        VAR8 = ((VAR5->VAR28[0x0e] << 8) | VAR5->VAR28[0x0f]) - VAR5->VAR38;
        if (VAR8 != VAR5->VAR8 || VAR5->VAR28[0xa] != VAR5->VAR39 || VAR5->VAR28[0xb] != VAR5->VAR40 || VAR22)
        {
            VAR9 = !(VAR5->VAR28[0xa] & 0x20);
            if (VAR9 && VAR8 < VAR14 && VAR8 >= 0)
                FUN4(VAR5->VAR36, FUN5(VAR8), FUN6(VAR8));
            else
                FUN4(VAR5->VAR36, -1, -1);
            VAR5->VAR8 = VAR8;
            VAR5->VAR39 = VAR5->VAR28[0xa];
            VAR5->VAR40 = VAR5->VAR28[0xb];
        }
        VAR18 = (VAR17 *)VAR5->VAR41 + VAR5->VAR38;
        VAR19 = VAR3;
        if (VAR22)
        {
            for (VAR7 = 0; VAR7 < VAR14; VAR18++, VAR19++, VAR7++)
                FUN7(VAR19, FUN8(FUN9(*VAR18)));
            FUN10(VAR5->VAR36, 0, 0, VAR12, VAR13);
        }
        else
        {
            VAR16 = 0;
            for (VAR7 = 0; VAR7 < VAR14; VAR18++, VAR19++, VAR7++)
            {
                FUN7(&VAR20, FUN8(FUN9(*VAR18)));
                if (*VAR19 != VAR20)
                {
                    *VAR19 = VAR20;
                    VAR16 = VAR7;
                    break;
                }
            }
            VAR15 = VAR7;
            for (; VAR7 < VAR14; VAR18++, VAR19++, VAR7++)
            {
                FUN7(&VAR20, FUN8(FUN9(*VAR18)));
                if (*VAR19 != VAR20)
                {
                    *VAR19 = VAR20;
                    VAR16 = VAR7;
                }
            }
            if (VAR15 <= VAR16)
            {
                VAR7 = FUN6(VAR15);
                FUN10(VAR5->VAR36, 0, VAR7, VAR12, FUN6(VAR16) - VAR7 + 1);
            }
        }
        return;
    case VAR42:
        if (!VAR22)
            return;
        VAR5->FUN11(VAR5, &VAR12, &VAR13);
        snprintf(VAR21, sizeof(VAR21), "", VAR12, VAR13);
        break;
    case VAR24:
    default:
        if (!VAR22)
            return;
        snprintf(VAR21, sizeof(VAR21), "");
        break;
    }
    VAR5->VAR26 = 60;
    VAR5->VAR31 = VAR13 = 3;
    FUN4(VAR5->VAR36, -1, -1);
    VAR5->VAR36->VAR37->VAR12 = VAR5->VAR26;
    VAR5->VAR36->VAR37->VAR13 = VAR13;
    FUN3(VAR5->VAR36);
    for (VAR19 = VAR3, VAR7 = 0; VAR7 < VAR5->VAR26 * VAR13; VAR7++)
        FUN7(VAR19++, '');
    VAR14 = strlen(VAR21);
    VAR12 = (VAR5->VAR26 - VAR14) / 2;
    VAR19 = VAR3 + VAR5->VAR26 + VAR12;
    for (VAR7 = 0; VAR7 < VAR14; VAR7++)
        FUN7(VAR19++, 0x00200100 | VAR21[VAR7]);
    FUN10(VAR5->VAR36, 0, 0, VAR5->VAR26, VAR13);