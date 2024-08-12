int FUN1(VAR1 *VAR2, void *VAR3, int *VAR4, const VAR5 *VAR6, int VAR7)
{
    VAR8 *VAR9 = VAR2->VAR10;
    VAR11 *const VAR12 = VAR9->VAR13[VAR14];
    int VAR15 = VAR7;
    int VAR16, VAR17;
    if (VAR9->VAR18)
    {
        VAR17 = FUN2(&VAR6);
        VAR15 -= 3;
    }
    for (VAR16 = 0; VAR16 < 1 + VAR9->VAR18; VAR16++)
    {
        int VAR19, VAR20, VAR21, VAR22 = 0;
        int VAR23, VAR24, VAR25, VAR26, VAR27;
        int VAR28 = 0;
        int VAR29;
        VAR9->VAR30 = &VAR9->VAR31[VAR16];
        VAR29 = VAR9->FUN3(VAR9, VAR6, VAR15, &VAR28);
        if (!VAR29)
            return -1;
        if (!VAR16)
        {
            VAR12->VAR32 = 1;
            if (VAR2->FUN4(VAR2, VAR12) < 0)
            {
                FUN5(VAR2, VAR33, "");
                return -1;
            }
            if (VAR29 == 2)
                if (FUN6(VAR2))
                {
                    VAR2->FUN7(VAR2, VAR12);
                    return -1;
                }
        }
        if (VAR12->VAR34)
        {
            VAR12->VAR35 = VAR36;
            VAR9->FUN8(VAR9);
            for (VAR23 = 0; VAR23 < VAR9->VAR37 * VAR9->VAR38; VAR23++)
                VAR9->VAR39[VAR23].VAR40 = VAR41;
        }
        else
        {
            VAR12->VAR35 = VAR42;
            FUN9(VAR9);
            VAR9->FUN10(VAR9);
            VAR9->VAR43 = VAR44;
        }
        VAR9->FUN11(VAR9);
        memset(VAR9->VAR45, 0, sizeof(VAR9->VAR45));
        VAR9->VAR45[1][VAR14] = 128;
        VAR9->VAR45[2][VAR14] = 128;
        for (VAR23 = 0; VAR23 < 4 * VAR9->VAR38 + 6; VAR23++)
        {
            VAR9->VAR46[VAR23].VAR47 = VAR48;
            VAR9->VAR46[VAR23].VAR49 = 0;
            VAR9->VAR46[VAR23].VAR50 = 0;
        }
        VAR9->VAR46[2 * VAR9->VAR38 + 2].VAR47 = VAR14;
        VAR9->VAR46[3 * VAR9->VAR38 + 4].VAR47 = VAR14;
        VAR26 = VAR12->VAR51[0];
        VAR27 = VAR12->VAR51[1];
        if (VAR9->VAR52 < 0)
            VAR22 = 7;
        for (VAR19 = 0; VAR19 < VAR9->VAR37; VAR19++)
        {
            if (VAR9->VAR52 < 0)
                VAR21 = VAR9->VAR37 - VAR19 - 1;
            else
                VAR21 = VAR19;
            for (VAR23 = 0; VAR23 < 4; VAR23++)
            {
                VAR9->VAR53[VAR23].VAR47 = VAR48;
                VAR9->VAR53[VAR23].VAR49 = 0;
                VAR9->VAR53[VAR23].VAR50 = 0;
            }
            memset(VAR9->VAR54, 0, sizeof(VAR9->VAR54));
            memset(VAR9->VAR55, 24, sizeof(VAR9->VAR55));
            VAR9->VAR56[0] = 1;
            VAR9->VAR56[1] = 2;
            VAR9->VAR56[2] = 1;
            VAR9->VAR56[3] = 2;
            VAR9->VAR56[4] = 2 * VAR9->VAR38 + 2 + 1;
            VAR9->VAR56[5] = 3 * VAR9->VAR38 + 4 + 1;
            VAR9->VAR57[VAR9->VAR58] = (VAR21 * 16 + VAR22) * VAR26;
            VAR9->VAR57[VAR9->VAR59] = VAR9->VAR57[VAR9->VAR58] + 8 * VAR26;
            VAR9->VAR57[1] = VAR9->VAR57[0] + 8;
            VAR9->VAR57[3] = VAR9->VAR57[2] + 8;
            VAR9->VAR57[4] = (VAR21 * 8 + VAR22) * VAR27;
            VAR9->VAR57[5] = VAR9->VAR57[4];
            for (VAR20 = 0; VAR20 < VAR9->VAR38; VAR20++)
            {
                FUN12(VAR9, VAR19, VAR20, VAR16);
                for (VAR24 = 0; VAR24 < 4; VAR24++)
                {
                    VAR9->VAR56[VAR24] += 2;
                    VAR9->VAR57[VAR24] += 16;
                }
                for (VAR25 = 4; VAR25 < 6; VAR25++)
                {
                    VAR9->VAR56[VAR25] += 1;
                    VAR9->VAR57[VAR25] += 8;
                }
            }
        }
        if (VAR12->VAR34 || VAR28)
        {
            if (VAR9->VAR13[VAR60]->VAR3[0] && VAR9->VAR13[VAR60] != VAR9->VAR13[VAR61])
                VAR2->FUN7(VAR2, VAR9->VAR13[VAR60]);
            VAR9->VAR13[VAR60] = VAR12;
        }
        if (VAR9->VAR18)
        {
            FUN13(VAR11 *, VAR9->VAR13[VAR60], VAR9->VAR13[VAR61]);
            VAR6 += VAR17;
            VAR15 -= VAR17;
        }
    }
    if (VAR9->VAR13[VAR62] == VAR9->VAR13[VAR60] || VAR9->VAR13[VAR62] == VAR9->VAR13[VAR61])
    {
        if (VAR9->VAR13[VAR63] != VAR9->VAR13[VAR60] && VAR9->VAR13[VAR63] != VAR9->VAR13[VAR61])
            FUN13(VAR11 *, VAR9->VAR13[VAR62], VAR9->VAR13[VAR63]);
        else
            FUN13(VAR11 *, VAR9->VAR13[VAR62], VAR9->VAR13[VAR64]);
    }
    else if (VAR9->VAR13[VAR62]->VAR3[0])
        VAR2->FUN7(VAR2, VAR9->VAR13[VAR62]);
    FUN13(VAR11 *, VAR9->VAR13[VAR14], VAR9->VAR13[VAR62]);
    *(VAR11 *)VAR3 = *VAR12;
    *VAR4 = sizeof(VAR11);
    return VAR7;
}