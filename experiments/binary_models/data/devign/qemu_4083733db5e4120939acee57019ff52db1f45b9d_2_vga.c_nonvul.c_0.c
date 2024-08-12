static void FUN1(void *VAR1, VAR2 *VAR3)
{
    VAR4 *VAR5 = VAR1;
    int VAR6, VAR7, VAR8, VAR9;
    int VAR10, VAR11, VAR12, VAR13, VAR14, VAR15, VAR16;
    VAR17 *VAR18;
    VAR2 *VAR19, VAR20;
    char VAR21[80];
    int VAR22 = 0;
    FUN2();
    if (!(VAR5->VAR23 & 0x20))
    {
        VAR6 = VAR24;
    }
    else
    {
        VAR6 = VAR5->VAR25[VAR26] & VAR27;
    }
    if (VAR6 != VAR5->VAR6)
    {
        VAR5->VAR6 = VAR6;
        VAR22 = 1;
    }
    if (VAR5->VAR28 == -1)
    {
        VAR5->VAR28 = 0;
        VAR22 = 1;
    }
    switch (VAR6)
    {
    case VAR29:
        VAR22 |= FUN3(VAR5);
        VAR11 = (VAR5->VAR30[VAR31] & 0x1f) + 1;
        VAR10 = 8;
        if (!(VAR5->VAR32[VAR33] & VAR34))
        {
            VAR10 = 9;
        }
        if (VAR5->VAR32[VAR33] & 0x08)
        {
            VAR10 = 16;
        }
        VAR12 = (VAR5->VAR30[VAR35] + 1);
        if (VAR5->VAR30[VAR36] == 100)
        {
            VAR13 = 100;
        }
        else
        {
            VAR13 = VAR5->VAR30[VAR37] | ((VAR5->VAR30[VAR38] & 0x02) << 7) | ((VAR5->VAR30[VAR38] & 0x40) << 3);
            VAR13 = (VAR13 + 1) / VAR11;
        }
        VAR14 = (VAR13 * VAR12);
        if (VAR14 > VAR39)
        {
            if (!VAR22)
                return;
            snprintf(VAR21, sizeof(VAR21), "", VAR12, VAR13);
            break;
        }
        if (VAR12 != VAR5->VAR28 || VAR13 != VAR5->VAR40 || VAR10 != VAR5->VAR41 || VAR11 != VAR5->VAR42)
        {
            VAR5->VAR43 = VAR12 * VAR10;
            VAR5->VAR44 = VAR13 * VAR11;
            FUN4(VAR5->VAR45, VAR5->VAR43, VAR5->VAR44);
            FUN5(VAR5->VAR45, VAR12, VAR13);
            VAR5->VAR46 = 0;
            VAR5->VAR28 = VAR12;
            VAR5->VAR40 = VAR13;
            VAR5->VAR42 = VAR11;
            VAR5->VAR41 = VAR10;
            VAR22 = 1;
        }
        if (VAR22)
        {
            VAR5->VAR47 = 1;
        }
        if (VAR5->VAR48)
        {
            VAR5->VAR48 = 0;
            VAR22 |= 1;
        }
        VAR8 = ((VAR5->VAR30[VAR49] << 8) | VAR5->VAR30[VAR50]) - VAR5->VAR51;
        if (VAR8 != VAR5->VAR8 || VAR5->VAR30[VAR52] != VAR5->VAR53 || VAR5->VAR30[VAR54] != VAR5->VAR55 || VAR22)
        {
            VAR9 = !(VAR5->VAR30[VAR52] & 0x20);
            if (VAR9 && VAR8 < VAR14 && VAR8 >= 0)
                FUN6(VAR5->VAR45, FUN7(VAR8), FUN8(VAR8));
            else
                FUN6(VAR5->VAR45, -1, -1);
            VAR5->VAR8 = VAR8;
            VAR5->VAR53 = VAR5->VAR30[VAR52];
            VAR5->VAR55 = VAR5->VAR30[VAR54];
        }
        VAR18 = (VAR17 *)VAR5->VAR56 + VAR5->VAR51;
        VAR19 = VAR3;
        if (VAR22)
        {
            for (VAR7 = 0; VAR7 < VAR14; VAR18++, VAR19++, VAR7++)
                FUN9(VAR19, FUN10(FUN11(*VAR18)));
            FUN12(VAR5->VAR45, 0, 0, VAR12, VAR13);
        }
        else
        {
            VAR16 = 0;
            for (VAR7 = 0; VAR7 < VAR14; VAR18++, VAR19++, VAR7++)
            {
                FUN9(&VAR20, FUN10(FUN11(*VAR18)));
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
                FUN9(&VAR20, FUN10(FUN11(*VAR18)));
                if (*VAR19 != VAR20)
                {
                    *VAR19 = VAR20;
                    VAR16 = VAR7;
                }
            }
            if (VAR15 <= VAR16)
            {
                VAR7 = FUN8(VAR15);
                FUN12(VAR5->VAR45, 0, VAR7, VAR12, FUN8(VAR16) - VAR7 + 1);
            }
        }
        return;
    case VAR57:
        if (!VAR22)
            return;
        VAR5->FUN13(VAR5, &VAR12, &VAR13);
        snprintf(VAR21, sizeof(VAR21), "", VAR12, VAR13);
        break;
    case VAR24:
    default:
        if (!VAR22)
            return;
        snprintf(VAR21, sizeof(VAR21), "");
        break;
    }
    VAR5->VAR28 = 60;
    VAR5->VAR40 = VAR13 = 3;
    FUN6(VAR5->VAR45, -1, -1);
    FUN5(VAR5->VAR45, VAR5->VAR28, VAR13);
    for (VAR19 = VAR3, VAR7 = 0; VAR7 < VAR5->VAR28 * VAR13; VAR7++)
        FUN9(VAR19++, '');
    VAR14 = strlen(VAR21);
    VAR12 = (VAR5->VAR28 - VAR14) / 2;
    VAR19 = VAR3 + VAR5->VAR28 + VAR12;
    for (VAR7 = 0; VAR7 < VAR14; VAR7++)
        FUN9(VAR19++, FUN14(VAR21[VAR7], VAR58, VAR59, 1));
    FUN12(VAR5->VAR45, 0, 0, VAR5->VAR28, VAR13);
}