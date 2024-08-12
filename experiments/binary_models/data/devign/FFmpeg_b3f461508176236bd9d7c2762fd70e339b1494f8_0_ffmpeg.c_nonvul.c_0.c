static void FUN1(int64_t VAR1)
{
    uint64_t VAR2 = 0, VAR3 = 0, VAR4 = 0, VAR5 = 0;
    uint64_t VAR6 = 0;
    uint64_t VAR7 = 0;
    float VAR8 = -1.0;
    int VAR9, VAR10;
    for (VAR9 = 0; VAR9 < VAR11; VAR9++)
    {
        VAR12 *VAR13 = VAR14[VAR9];
        switch (VAR13->VAR15->VAR16->VAR17)
        {
        case VAR18:
            VAR2 += VAR13->VAR7;
            break;
        case VAR19:
            VAR3 += VAR13->VAR7;
            break;
        case VAR20:
            VAR6 += VAR13->VAR7;
            break;
        default:
            VAR5 += VAR13->VAR7;
            break;
        }
        VAR4 += VAR13->VAR15->VAR16->VAR21;
        VAR7 += VAR13->VAR7;
    }
    if (VAR7 && VAR1 > 0 && VAR1 >= VAR7)
        VAR8 = 100.0 * (VAR1 - VAR7) / VAR7;
    FUN2(NULL, VAR22, "");
    FUN2(NULL, VAR22, "", VAR2 / 1024.0, VAR3 / 1024.0, VAR6 / 1024.0, VAR5 / 1024.0, VAR4 / 1024.0);
    if (VAR8 >= 0.0)
        FUN2(NULL, VAR22, "", VAR8);
    else
        FUN2(NULL, VAR22, "");
    FUN2(NULL, VAR22, "");
    for (VAR9 = 0; VAR9 < VAR23; VAR9++)
    {
        VAR24 *VAR25 = VAR26[VAR9];
        uint64_t VAR27 = 0, VAR1 = 0;
        FUN2(NULL, VAR28, "", VAR9, VAR25->VAR29->VAR30);
        for (VAR10 = 0; VAR10 < VAR25->VAR31; VAR10++)
        {
            VAR32 *VAR33 = VAR34[VAR25->VAR35 + VAR10];
            enum AVMediaType VAR36 = VAR33->VAR15->VAR16->VAR17;
            VAR1 += VAR33->VAR7;
            VAR27 += VAR33->VAR37;
            FUN2(NULL, VAR28, "", VAR9, VAR10, FUN3(VAR36));
            FUN2(NULL, VAR28, "" VAR38 "" VAR38 "", VAR33->VAR37, VAR33->VAR7);
            if (VAR33->VAR39)
            {
                FUN2(NULL, VAR28, "" VAR38 "", VAR33->VAR40);
                if (VAR36 == VAR19)
                    FUN2(NULL, VAR28, "" VAR38 "", VAR33->VAR41);
                FUN2(NULL, VAR28, "");
            }
            FUN2(NULL, VAR28, "");
        }
        FUN2(NULL, VAR28, "" VAR38 "" VAR38 "", VAR27, VAR1);
    }
    for (VAR9 = 0; VAR9 < VAR42; VAR9++)
    {
        VAR43 *VAR44 = VAR45[VAR9];
        uint64_t VAR27 = 0, VAR1 = 0;
        FUN2(NULL, VAR28, "", VAR9, VAR44->VAR29->VAR30);
        for (VAR10 = 0; VAR10 < VAR44->VAR29->VAR31; VAR10++)
        {
            VAR12 *VAR13 = VAR14[VAR44->VAR46 + VAR10];
            enum AVMediaType VAR36 = VAR13->VAR15->VAR16->VAR17;
            VAR1 += VAR13->VAR7;
            VAR27 += VAR13->VAR47;
            FUN2(NULL, VAR28, "", VAR9, VAR10, FUN3(VAR36));
            if (VAR13->VAR48)
            {
                FUN2(NULL, VAR28, "" VAR38 "", VAR13->VAR49);
                if (VAR36 == VAR19)
                    FUN2(NULL, VAR28, "" VAR38 "", VAR13->VAR50);
                FUN2(NULL, VAR28, "");
            }
            FUN2(NULL, VAR28, "" VAR38 "" VAR38 "", VAR13->VAR47, VAR13->VAR7);
            FUN2(NULL, VAR28, "");
        }
        FUN2(NULL, VAR28, "" VAR38 "" VAR38 "", VAR27, VAR1);
    }
    if (VAR2 + VAR7 + VAR3 + VAR6 + VAR4 == 0)
    {
        FUN2(NULL, VAR51, "");
    }
}