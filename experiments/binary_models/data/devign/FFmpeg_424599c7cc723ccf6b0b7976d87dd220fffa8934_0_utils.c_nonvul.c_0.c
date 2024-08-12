static void FUN1(VAR1 *VAR2, int64_t VAR3)
{
    AVPacket VAR4, *VAR5 = &VAR4;
    VAR6 *VAR7;
    int VAR8, VAR9, VAR10;
    int64_t VAR11;
    int64_t VAR12, VAR13, VAR14;
    int VAR15 = 0;
    FUN2(VAR2);
    for (VAR9 = 0; VAR9 < VAR2->VAR16; VAR9++)
    {
        VAR7 = VAR2->VAR17[VAR9];
        if (VAR7->VAR18 == VAR19 && VAR7->VAR20 == VAR19 && VAR7->VAR21->VAR22 != VAR23)
            FUN3(VAR7->VAR21, VAR24, "", VAR9);
        if (VAR7->VAR25)
        {
            FUN4(VAR7->VAR25);
            VAR7->VAR25 = NULL;
        }
    }
    VAR12 = VAR2->VAR26 ? FUN5(VAR2->VAR26) : 0;
    VAR11 = VAR19;
    do
    {
        VAR13 = VAR12 - (VAR27 << VAR15);
        if (VAR13 < 0)
            VAR13 = 0;
        FUN6(VAR2->VAR26, VAR13, VAR28);
        VAR8 = 0;
        for (;;)
        {
            if (VAR8 >= VAR27 << (FUN7(VAR15 - 1, 0)))
                break;
            do
            {
                VAR10 = FUN8(VAR2, VAR5);
            } while (VAR10 == FUN9(VAR29));
            if (VAR10 != 0)
                break;
            VAR8 += VAR5->VAR30;
            VAR7 = VAR2->VAR17[VAR5->VAR31];
            if (VAR5->VAR32 != VAR19 && (VAR7->VAR18 != VAR19 || VAR7->VAR20 != VAR19))
            {
                VAR14 = VAR11 = VAR5->VAR32 + VAR5->VAR14;
                if (VAR7->VAR18 != VAR19)
                    VAR14 -= VAR7->VAR18;
                else
                    VAR14 -= VAR7->VAR20;
                if (VAR14 > 0)
                {
                    if (VAR7->VAR14 == VAR19 || VAR7->VAR33->VAR34 <= 0 || (VAR7->VAR14 < VAR14 && FUN10(VAR14 - VAR7->VAR33->VAR34) < 60LL * VAR7->VAR35.VAR36 / VAR7->VAR35.VAR37))
                        VAR7->VAR14 = VAR14;
                    VAR7->VAR33->VAR34 = VAR14;
                }
            }
            FUN11(VAR5);
        }
    } while (VAR11 == VAR19 && VAR13 && ++VAR15 <= VAR38);
    for (VAR9 = 0; VAR9 < VAR2->VAR16; VAR9++)
    {
        VAR7 = VAR2->VAR17[VAR9];
        if (VAR7->VAR14 == VAR19)
        {
            switch (VAR7->VAR21->VAR22)
            {
            case VAR39:
            case VAR40:
                if (VAR7->VAR18 != VAR19 || VAR7->VAR20 != VAR19)
                {
                    FUN3(VAR2, VAR41, "", VAR9);
                }
                else
                    FUN3(VAR2, VAR41, "", VAR9);
            }
        }
    }
    FUN12(VAR2);
    FUN6(VAR2->VAR26, VAR3, VAR28);
    for (VAR9 = 0; VAR9 < VAR2->VAR16; VAR9++)
    {
        int VAR42;
        VAR7 = VAR2->VAR17[VAR9];
        VAR7->VAR43 = VAR7->VAR20;
        VAR7->VAR44 = VAR19;
        VAR7->VAR45 = VAR19;
        for (VAR42 = 0; VAR42 < VAR46 + 1; VAR42++)
            VAR7->VAR47[VAR42] = VAR19;
    }
}