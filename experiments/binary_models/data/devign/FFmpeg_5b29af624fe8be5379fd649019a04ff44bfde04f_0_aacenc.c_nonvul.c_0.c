static int FUN1(VAR1 *VAR2, VAR3 *VAR4, int VAR5, void *VAR6)
{
    VAR7 *VAR8 = VAR2->VAR9;
    VAR10 *VAR11 = VAR8->VAR11, *VAR12, *VAR13;
    VAR14 *VAR15;
    int VAR16, VAR17, VAR18, VAR19, VAR20, VAR21;
    const VAR3 *VAR22 = VAR23[VAR2->VAR24 - 1];
    int VAR25[4];
    FFPsyWindowInfo VAR26[VAR27];
    if (VAR8->VAR28)
        return 0;
    if (VAR6)
    {
        if (!VAR8->VAR29)
        {
            memcpy(VAR8->VAR11 + 1024 * VAR2->VAR24, VAR6, 1024 * VAR2->VAR24 * sizeof(VAR8->VAR11[0]));
        }
        else
        {
            VAR21 = 0;
            VAR12 = VAR8->VAR11 + 1024 * VAR2->VAR24;
            for (VAR16 = 0; VAR16 < VAR22[0]; VAR16++)
            {
                VAR20 = VAR22[VAR16 + 1];
                VAR19 = VAR20 == VAR30 ? 2 : 1;
                FUN2(VAR8->VAR29, (VAR31 *)VAR6 + VAR21, VAR12 + VAR21, VAR21, VAR19);
                VAR21 += VAR19;
            }
        }
    }
    if (!VAR2->VAR32)
    {
        memcpy(VAR8->VAR11, VAR8->VAR11 + 1024 * VAR2->VAR24, 1024 * VAR2->VAR24 * sizeof(VAR8->VAR11[0]));
        return 0;
    }
    VAR21 = 0;
    for (VAR16 = 0; VAR16 < VAR22[0]; VAR16++)
    {
        VAR33 *VAR34 = VAR26 + VAR21;
        VAR20 = VAR22[VAR16 + 1];
        VAR19 = VAR20 == VAR30 ? 2 : 1;
        VAR15 = &VAR8->VAR15[VAR16];
        for (VAR17 = 0; VAR17 < VAR19; VAR17++)
        {
            VAR35 *VAR36 = &VAR15->VAR17[VAR17].VAR36;
            int VAR37 = VAR21 + VAR17;
            VAR12 = VAR11 + VAR37;
            VAR13 = VAR12 + (448 + 64) * VAR2->VAR24;
            if (!VAR6)
                VAR13 = NULL;
            if (VAR20 == VAR38)
            {
                VAR34[VAR17].VAR39[0] = VAR40;
                VAR34[VAR17].VAR41 = 0;
                VAR34[VAR17].VAR42 = 1;
                VAR34[VAR17].VAR43[0] = 1;
            }
            else
            {
                VAR34[VAR17] = FUN3(&VAR8->VAR44, VAR12, VAR13, VAR37, VAR36->VAR45[0]);
            }
            VAR36->VAR45[1] = VAR36->VAR45[0];
            VAR36->VAR45[0] = VAR34[VAR17].VAR39[0];
            VAR36->VAR46[1] = VAR36->VAR46[0];
            VAR36->VAR46[0] = VAR34[VAR17].VAR41;
            VAR36->VAR42 = VAR34[VAR17].VAR42;
            VAR36->VAR47 = VAR8->VAR44.VAR48[VAR36->VAR42 == 8];
            VAR36->VAR49 = VAR20 == VAR38 ? 12 : VAR8->VAR44.VAR50[VAR36->VAR42 == 8];
            for (VAR18 = 0; VAR18 < VAR36->VAR42; VAR18++)
                VAR36->VAR51[VAR18] = VAR34[VAR17].VAR43[VAR18];
            FUN4(VAR2, VAR8, &VAR15->VAR17[VAR17], VAR12);
        }
        VAR21 += VAR19;
    }
    do
    {
        int VAR52;
        FUN5(&VAR8->VAR53, VAR4, VAR5 * 8);
        if ((VAR2->VAR32 & 0xFF) == 1 && !(VAR2->VAR54 & VAR55))
            FUN6(VAR2, VAR8, VAR56);
        VAR21 = 0;
        memset(VAR25, 0, sizeof(VAR25));
        for (VAR16 = 0; VAR16 < VAR22[0]; VAR16++)
        {
            VAR33 *VAR34 = VAR26 + VAR21;
            VAR20 = VAR22[VAR16 + 1];
            VAR19 = VAR20 == VAR30 ? 2 : 1;
            VAR15 = &VAR8->VAR15[VAR16];
            FUN7(&VAR8->VAR53, 3, VAR20);
            FUN7(&VAR8->VAR53, 4, VAR25[VAR20]++);
            for (VAR17 = 0; VAR17 < VAR19; VAR17++)
            {
                VAR8->VAR37 = VAR21 + VAR17;
                FUN8(&VAR8->VAR44, VAR8->VAR37, VAR15->VAR17[VAR17].VAR57, &VAR34[VAR17]);
                VAR8->VAR58->FUN9(VAR2, VAR8, &VAR15->VAR17[VAR17], VAR8->VAR59);
            }
            VAR15->VAR60 = 0;
            if (VAR19 > 1 && VAR34[0].VAR39[0] == VAR34[1].VAR39[0] && VAR34[0].VAR41 == VAR34[1].VAR41)
            {
                VAR15->VAR60 = 1;
                for (VAR18 = 0; VAR18 < VAR34[0].VAR42; VAR18++)
                {
                    if (VAR34[0].VAR43[VAR18] != VAR34[1].VAR43[VAR18])
                    {
                        VAR15->VAR60 = 0;
                        break;
                    }
                }
            }
            VAR8->VAR37 = VAR21;
            if (VAR15->VAR60 && VAR8->VAR58->VAR61)
                VAR8->VAR58->FUN10(VAR8, VAR15, VAR8->VAR59);
            FUN11(VAR8, VAR15, VAR19);
            if (VAR19 == 2)
            {
                FUN7(&VAR8->VAR53, 1, VAR15->VAR60);
                if (VAR15->VAR60)
                {
                    FUN12(VAR8, &VAR15->VAR17[0].VAR36);
                    FUN13(&VAR8->VAR53, VAR15);
                }
            }
            for (VAR17 = 0; VAR17 < VAR19; VAR17++)
            {
                VAR8->VAR37 = VAR21 + VAR17;
                FUN14(VAR2, VAR8, &VAR15->VAR17[VAR17], VAR15->VAR60);
            }
            VAR21 += VAR19;
        }
        VAR52 = FUN15(&VAR8->VAR53);
        if (VAR52 <= 6144 * VAR2->VAR24 - 3)
        {
            VAR8->VAR44.VAR62.VAR63 = VAR52 / VAR2->VAR24;
            break;
        }
        VAR8->VAR59 *= VAR2->VAR64 * 1024.0f / VAR2->VAR65 / VAR52;
    } while (1);
    FUN7(&VAR8->VAR53, 3, VAR66);
    FUN16(&VAR8->VAR53);
    VAR2->VAR52 = FUN15(&VAR8->VAR53);
    if (!(VAR2->VAR54 & VAR67))
    {
        float VAR68 = VAR2->VAR64 * 1024.0f / VAR2->VAR65 / VAR2->VAR52;
        VAR8->VAR59 *= VAR68;
        VAR8->VAR59 = FUN17(VAR8->VAR59, 65536.VAR69);
    }
    if (!VAR6)
        VAR8->VAR28 = 1;
    memcpy(VAR8->VAR11, VAR8->VAR11 + 1024 * VAR2->VAR24, 1024 * VAR2->VAR24 * sizeof(VAR8->VAR11[0]));
    return FUN15(&VAR8->VAR53) >> 3;
}