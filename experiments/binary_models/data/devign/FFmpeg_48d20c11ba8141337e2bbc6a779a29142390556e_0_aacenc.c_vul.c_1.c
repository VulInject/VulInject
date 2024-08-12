static int FUN1(VAR1 *VAR2, VAR3 *VAR4, int VAR5, void *VAR6)
{
    VAR7 *VAR8 = VAR2->VAR9;
    VAR10 *VAR11 = VAR8->VAR11, *VAR12, *VAR13;
    VAR14 *VAR15;
    int VAR16, VAR17, VAR18, VAR19, VAR20;
    const VAR3 *VAR21 = VAR22[VAR2->VAR23 - 1];
    int VAR24[4];
    FFPsyWindowInfo VAR25[VAR2->VAR23];
    if (VAR8->VAR26)
        return 0;
    if (VAR6)
    {
        if (!VAR8->VAR27)
        {
            memcpy(VAR8->VAR11 + 1024 * VAR2->VAR23, VAR6, 1024 * VAR2->VAR23 * sizeof(VAR8->VAR11[0]));
        }
        else
        {
            VAR20 = 0;
            VAR12 = VAR8->VAR11 + 1024 * VAR2->VAR23;
            for (VAR16 = 0; VAR16 < VAR21[0]; VAR16++)
            {
                VAR19 = VAR21[VAR16 + 1];
                VAR18 = VAR19 == VAR28 ? 2 : 1;
                FUN2(VAR8->VAR27, (VAR29 *)VAR6 + VAR20, VAR12 + VAR20, VAR20, VAR18);
                VAR20 += VAR18;
            }
        }
    }
    if (!VAR2->VAR30)
    {
        memcpy(VAR8->VAR11, VAR8->VAR11 + 1024 * VAR2->VAR23, 1024 * VAR2->VAR23 * sizeof(VAR8->VAR11[0]));
        return 0;
    }
    VAR20 = 0;
    for (VAR16 = 0; VAR16 < VAR21[0]; VAR16++)
    {
        VAR31 *VAR32 = VAR25 + VAR20;
        VAR19 = VAR21[VAR16 + 1];
        VAR18 = VAR19 == VAR28 ? 2 : 1;
        VAR15 = &VAR8->VAR15[VAR16];
        VAR12 = VAR11 + VAR20;
        VAR13 = VAR12 + 1024 * VAR2->VAR23 + VAR20;
        if (!VAR6)
            VAR13 = NULL;
        for (VAR17 = 0; VAR17 < VAR18; VAR17++)
        {
            VAR33 *VAR34 = &VAR15->VAR35[VAR17].VAR34;
            int VAR36;
            VAR32[VAR17] = FUN3(&VAR8->VAR37, VAR12, VAR13, VAR20 + VAR17, VAR34->VAR38[0]);
            VAR34->VAR38[1] = VAR34->VAR38[0];
            VAR34->VAR38[0] = VAR32[VAR17].VAR39[0];
            VAR34->VAR40[1] = VAR34->VAR40[0];
            VAR34->VAR40[0] = VAR32[VAR17].VAR41;
            VAR34->VAR42 = VAR32[VAR17].VAR42;
            VAR34->VAR43 = VAR8->VAR37.VAR44[VAR34->VAR42 == 8];
            VAR34->VAR45 = VAR8->VAR37.VAR46[VAR34->VAR42 == 8];
            for (VAR36 = 0; VAR36 < VAR34->VAR42; VAR36++)
                VAR34->VAR47[VAR36] = VAR32[VAR17].VAR48[VAR36];
            VAR8->VAR49 = VAR20 + VAR17;
            FUN4(VAR2, VAR8, &VAR15->VAR35[VAR17], VAR12, VAR17);
        }
        VAR20 += VAR18;
    }
    FUN5(&VAR8->VAR50, VAR4, VAR5 * 8);
    if ((VAR2->VAR30 & 0xFF) == 1 && !(VAR2->VAR51 & VAR52))
        FUN6(VAR2, VAR8, VAR53);
    VAR20 = 0;
    memset(VAR24, 0, sizeof(VAR24));
    for (VAR16 = 0; VAR16 < VAR21[0]; VAR16++)
    {
        VAR31 *VAR32 = VAR25 + VAR20;
        VAR19 = VAR21[VAR16 + 1];
        VAR18 = VAR19 == VAR28 ? 2 : 1;
        VAR15 = &VAR8->VAR15[VAR16];
        for (VAR17 = 0; VAR17 < VAR18; VAR17++)
        {
            VAR8->VAR54->FUN7(VAR2, VAR8, &VAR15->VAR35[VAR17], VAR8->VAR55);
        }
        VAR15->VAR56 = 0;
        if (VAR18 > 1 && VAR32[0].VAR39[0] == VAR32[1].VAR39[0] && VAR32[0].VAR41 == VAR32[1].VAR41)
        {
            VAR15->VAR56 = 1;
            for (VAR17 = 0; VAR17 < VAR32[0].VAR42; VAR17++)
            {
                if (VAR32[0].VAR48[VAR17] != VAR32[1].VAR48[VAR17])
                {
                    VAR15->VAR56 = 0;
                    break;
                }
            }
        }
        if (VAR15->VAR56 && VAR8->VAR54->VAR57)
            VAR8->VAR54->FUN8(VAR8, VAR15, VAR8->VAR55);
        FUN9(VAR8, VAR15, VAR18);
        FUN10(&VAR8->VAR50, 3, VAR19);
        FUN10(&VAR8->VAR50, 4, VAR24[VAR19]++);
        if (VAR18 == 2)
        {
            FUN10(&VAR8->VAR50, 1, VAR15->VAR56);
            if (VAR15->VAR56)
            {
                FUN11(VAR8, &VAR15->VAR35[0].VAR34);
                FUN12(&VAR8->VAR50, VAR15);
            }
        }
        for (VAR17 = 0; VAR17 < VAR18; VAR17++)
        {
            VAR8->VAR49 = VAR20 + VAR17;
            FUN13(&VAR8->VAR37, VAR8->VAR49, VAR15->VAR35[VAR17].VAR58, &VAR32[VAR17]);
            FUN14(VAR2, VAR8, &VAR15->VAR35[VAR17], VAR15->VAR56);
        }
        VAR20 += VAR18;
    }
    FUN10(&VAR8->VAR50, 3, VAR59);
    FUN15(&VAR8->VAR50);
    VAR2->VAR60 = FUN16(&VAR8->VAR50);
    if (!(VAR2->VAR51 & VAR61))
    {
        float VAR62 = VAR2->VAR63 * 1024.0f / VAR2->VAR64 / VAR2->VAR60;
        VAR8->VAR55 *= VAR62;
        VAR8->VAR55 = FUN17(VAR8->VAR55, 65536.VAR65);
    }
    if (VAR2->VAR60 > 6144 * VAR2->VAR23)
        FUN18(VAR2, VAR66, "", VAR2->VAR60, 6144 * VAR2->VAR23);
    if (!VAR6)
        VAR8->VAR26 = 1;
    memcpy(VAR8->VAR11, VAR8->VAR11 + 1024 * VAR2->VAR23, 1024 * VAR2->VAR23 * sizeof(VAR8->VAR11[0]));
    return FUN16(&VAR8->VAR50) >> 3;
}