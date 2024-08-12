int FUN1(VAR1 *VAR2, void *VAR3, int *VAR4, VAR5 *VAR6)
{
    const VAR7 *VAR8 = VAR6->VAR3;
    VAR9 *VAR10 = VAR2->VAR11;
    VAR12 *const VAR13 = VAR10->VAR14[VAR15];
    int VAR16 = VAR6->VAR17;
    int VAR18, FUN2(VAR19);
    if (VAR10->VAR20)
    {
        if (VAR16 < 3)
            return -1;
        VAR19 = FUN3(&VAR8);
        VAR16 -= 3;
        if (VAR16 < VAR19)
            return -1;
    }
    for (VAR18 = 0; VAR18 < 1 + VAR10->VAR20; VAR18++)
    {
        int VAR21, VAR22, VAR23, VAR24 = 0;
        int VAR25, VAR26, VAR27, VAR28, VAR29;
        int VAR30 = 0;
        int VAR31;
        VAR10->VAR32 = &VAR10->VAR33[VAR18];
        VAR31 = VAR10->FUN4(VAR10, VAR8, VAR16, &VAR30);
        if (!VAR31)
            return -1;
        if (VAR31 == 2)
        {
            int VAR34;
            for (VAR34 = 0; VAR34 < 4; VAR34++)
            {
                if (VAR10->VAR35[VAR34].VAR3[0])
                    VAR2->FUN5(VAR2, &VAR10->VAR35[VAR34]);
            }
            if (VAR18)
                return -1;
        }
        if (!VAR18)
        {
            VAR13->VAR36 = 1;
            if (VAR2->FUN6(VAR2, VAR13) < 0)
            {
                FUN7(VAR2, VAR37, "");
                return -1;
            }
            if (VAR31 == 2)
                if (FUN8(VAR2))
                {
                    VAR2->FUN5(VAR2, VAR13);
                    return -1;
                }
        }
        if (VAR13->VAR38)
        {
            VAR13->VAR39 = VAR40;
            VAR10->FUN9(VAR10);
            for (VAR25 = 0; VAR25 < VAR10->VAR41 * VAR10->VAR42; VAR25++)
                VAR10->VAR43[VAR25].VAR44 = VAR45;
        }
        else
        {
            VAR13->VAR39 = VAR46;
            FUN10(VAR10);
            VAR10->FUN11(VAR10);
            VAR10->VAR47 = VAR48;
        }
        if (VAR10->FUN12(VAR10))
            goto VAR49;
        memset(VAR10->VAR50, 0, sizeof(VAR10->VAR50));
        VAR10->VAR50[1][VAR15] = 128;
        VAR10->VAR50[2][VAR15] = 128;
        for (VAR25 = 0; VAR25 < 4 * VAR10->VAR42 + 6; VAR25++)
        {
            VAR10->VAR51[VAR25].VAR52 = VAR53;
            VAR10->VAR51[VAR25].VAR54 = 0;
            VAR10->VAR51[VAR25].VAR55 = 0;
        }
        VAR10->VAR51[2 * VAR10->VAR42 + 2].VAR52 = VAR15;
        VAR10->VAR51[3 * VAR10->VAR42 + 4].VAR52 = VAR15;
        VAR28 = VAR13->VAR56[0];
        VAR29 = VAR13->VAR56[1];
        if (VAR10->VAR57 < 0)
            VAR24 = 7;
        for (VAR21 = 0; VAR21 < VAR10->VAR41; VAR21++)
        {
            if (VAR10->VAR57 < 0)
                VAR23 = VAR10->VAR41 - VAR21 - 1;
            else
                VAR23 = VAR21;
            for (VAR25 = 0; VAR25 < 4; VAR25++)
            {
                VAR10->VAR58[VAR25].VAR52 = VAR53;
                VAR10->VAR58[VAR25].VAR54 = 0;
                VAR10->VAR58[VAR25].VAR55 = 0;
            }
            memset(VAR10->VAR59, 0, sizeof(VAR10->VAR59));
            memset(VAR10->VAR60, 24, sizeof(VAR10->VAR60));
            VAR10->VAR61[0] = 1;
            VAR10->VAR61[1] = 2;
            VAR10->VAR61[2] = 1;
            VAR10->VAR61[3] = 2;
            VAR10->VAR61[4] = 2 * VAR10->VAR42 + 2 + 1;
            VAR10->VAR61[5] = 3 * VAR10->VAR42 + 4 + 1;
            VAR10->VAR62[VAR10->VAR63] = (VAR23 * 16 + VAR24) * VAR28;
            VAR10->VAR62[VAR10->VAR64] = VAR10->VAR62[VAR10->VAR63] + 8 * VAR28;
            VAR10->VAR62[1] = VAR10->VAR62[0] + 8;
            VAR10->VAR62[3] = VAR10->VAR62[2] + 8;
            VAR10->VAR62[4] = (VAR23 * 8 + VAR24) * VAR29;
            VAR10->VAR62[5] = VAR10->VAR62[4];
            for (VAR22 = 0; VAR22 < VAR10->VAR42; VAR22++)
            {
                FUN13(VAR10, VAR21, VAR22, VAR18);
                for (VAR26 = 0; VAR26 < 4; VAR26++)
                {
                    VAR10->VAR61[VAR26] += 2;
                    VAR10->VAR62[VAR26] += 16;
                }
                for (VAR27 = 4; VAR27 < 6; VAR27++)
                {
                    VAR10->VAR61[VAR27] += 1;
                    VAR10->VAR62[VAR27] += 8;
                }
            }
        }
    VAR49:
        if (VAR13->VAR38 || VAR30)
        {
            if (VAR10->VAR14[VAR65]->VAR3[0] && VAR10->VAR14[VAR65] != VAR10->VAR14[VAR66])
                VAR2->FUN5(VAR2, VAR10->VAR14[VAR65]);
            VAR10->VAR14[VAR65] = VAR13;
        }
        if (VAR10->VAR20)
        {
            FUN14(VAR12 *, VAR10->VAR14[VAR65], VAR10->VAR14[VAR66]);
            VAR8 += VAR19;
            VAR16 -= VAR19;
        }
    }
    if (VAR10->VAR14[VAR67] == VAR10->VAR14[VAR65] || VAR10->VAR14[VAR67] == VAR10->VAR14[VAR66])
    {
        if (VAR10->VAR14[VAR68] != VAR10->VAR14[VAR65] && VAR10->VAR14[VAR68] != VAR10->VAR14[VAR66])
            FUN14(VAR12 *, VAR10->VAR14[VAR67], VAR10->VAR14[VAR68]);
        else
            FUN14(VAR12 *, VAR10->VAR14[VAR67], VAR10->VAR14[VAR69]);
    }
    else if (VAR10->VAR14[VAR67]->VAR3[0])
        VAR2->FUN5(VAR2, VAR10->VAR14[VAR67]);
    FUN14(VAR12 *, VAR10->VAR14[VAR15], VAR10->VAR14[VAR67]);
    VAR13->VAR70 = 0;
    VAR13->VAR71 = VAR10->VAR71;
    VAR13->VAR72 = VAR73;
    *(VAR12 *)VAR3 = *VAR13;
    *VAR4 = sizeof(VAR12);
    return VAR6->VAR17;
}