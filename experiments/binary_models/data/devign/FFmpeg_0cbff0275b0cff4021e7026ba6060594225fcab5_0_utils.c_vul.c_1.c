int FUN1(VAR1 *VAR2)
{
    int VAR3, VAR4, VAR5, VAR6, VAR7;
    VAR8 *VAR9;
    AVPacket VAR10, *VAR11;
    VAR12 *VAR13 = NULL, **VAR14;
    int64_t VAR15[VAR16];
    int VAR17[VAR16] = {0};
    double VAR18[VAR16][VAR19] = {{0}};
    offset_t VAR20 = FUN2(&VAR2->VAR21);
    for (VAR3 = 0; VAR3 < VAR2->VAR22; VAR3++)
    {
        VAR9 = VAR2->VAR23[VAR3];
        if (VAR9->VAR24->VAR25 == VAR26)
        {
            if (!VAR9->VAR24->VAR27.VAR28)
                VAR9->VAR24->VAR27 = VAR9->VAR27;
        }
        if (!VAR9->VAR29)
        {
            VAR9->VAR29 = FUN3(VAR9->VAR24->VAR30);
            if (VAR9->VAR31 == 2 && VAR9->VAR29)
            {
                VAR9->VAR29->VAR32 |= VAR33;
            }
        }
    }
    for (VAR3 = 0; VAR3 < VAR16; VAR3++)
    {
        VAR15[VAR3] = VAR34;
    }
    VAR4 = 0;
    VAR6 = 0;
    VAR14 = &VAR2->VAR35;
    for (;;)
    {
        for (VAR3 = 0; VAR3 < VAR2->VAR22; VAR3++)
        {
            VAR9 = VAR2->VAR23[VAR3];
            if (!FUN4(VAR9->VAR24))
                break;
            if (VAR9->VAR24->VAR27.VAR36 >= 101LL * VAR9->VAR24->VAR27.VAR28 && VAR17[VAR3] < 20 && VAR9->VAR24->VAR25 == VAR26)
                break;
            if (VAR9->VAR29 && VAR9->VAR29->VAR29->VAR37 && !VAR9->VAR24->VAR38)
                break;
        }
        if (VAR3 == VAR2->VAR22)
        {
            if (!(VAR2->VAR39 & VAR40))
            {
                VAR5 = VAR4;
                break;
            }
        }
        if (VAR6 >= VAR41)
        {
            VAR5 = VAR4;
            break;
        }
        VAR5 = FUN5(VAR2, &VAR10);
        if (VAR5 < 0)
        {
            VAR5 = -1;
            for (VAR3 = 0; VAR3 < VAR2->VAR22; VAR3++)
            {
                VAR9 = VAR2->VAR23[VAR3];
                if (!FUN4(VAR9->VAR24))
                {
                    char VAR42[256];
                    FUN6(VAR42, sizeof(VAR42), VAR9->VAR24, 0);
                    FUN7(VAR2, VAR43, "", VAR42);
                }
                else
                {
                    VAR5 = 0;
                }
            }
            break;
        }
        VAR13 = FUN8(sizeof(VAR12));
        if (!VAR13)
        {
            VAR5 = VAR44;
            break;
        }
        *VAR14 = VAR13;
        VAR14 = &VAR13->VAR45;
        VAR11 = &VAR13->VAR11;
        *VAR11 = VAR10;
        if (FUN9(VAR11) < 0)
        {
            VAR5 = VAR44;
            break;
        }
        VAR6 += VAR11->VAR46;
        VAR9 = VAR2->VAR23[VAR11->VAR47];
        if (VAR9->VAR48 > 1)
            VAR9->VAR49 += VAR11->VAR50;
        if (VAR11->VAR50 != 0)
            VAR9->VAR48++;
        {
            int VAR51 = VAR11->VAR47;
            int64_t VAR52 = VAR15[VAR51];
            int64_t VAR50 = VAR11->VAR53 - VAR52;
            if (VAR11->VAR53 != VAR34 && VAR52 != VAR34 && VAR50 > 0)
            {
                double VAR54 = VAR50 * FUN10(VAR9->VAR27);
                if (VAR17[VAR51] < 2)
                    memset(VAR18, 0, sizeof(VAR18));
                for (VAR3 = 1; VAR3 < VAR19; VAR3++)
                {
                    int VAR55 = FUN11(VAR3);
                    int VAR56 = FUN12(VAR54 * VAR55 / (1001 * 12));
                    double VAR57 = VAR54 - VAR56 * 1001 * 12 / (double)VAR55;
                    VAR18[VAR51][VAR3] += VAR57 * VAR57;
                }
                VAR17[VAR51]++;
                if (VAR9->VAR48 == 0 && 0)
                    VAR9->VAR49 += VAR50;
            }
            if (VAR52 == VAR34 || VAR17[VAR51] <= 1)
                VAR15[VAR11->VAR47] = VAR11->VAR53;
        }
        if (VAR9->VAR29 && VAR9->VAR29->VAR29->VAR37 && !VAR9->VAR24->VAR38)
        {
            int VAR3 = VAR9->VAR29->VAR29->FUN13(VAR9->VAR24, VAR11->VAR58, VAR11->VAR46);
            if (VAR3)
            {
                VAR9->VAR24->VAR59 = VAR3;
                VAR9->VAR24->VAR38 = FUN14(VAR9->VAR24->VAR59 + VAR60);
                memcpy(VAR9->VAR24->VAR38, VAR11->VAR58, VAR9->VAR24->VAR59);
                memset(VAR9->VAR24->VAR38 + VAR3, 0, VAR60);
            }
        }
        if (!FUN4(VAR9->VAR24))
            FUN15(VAR9, VAR11->VAR58, VAR11->VAR46);
        if (FUN16(VAR9->VAR49, VAR9->VAR27, VAR61) >= VAR2->VAR62)
        {
            break;
        }
        VAR4++;
    }
    for (VAR3 = 0; VAR3 < VAR2->VAR22; VAR3++)
    {
        VAR9 = VAR2->VAR23[VAR3];
        if (VAR9->VAR24->VAR24)
            FUN17(VAR9->VAR24);
    }
    for (VAR3 = 0; VAR3 < VAR2->VAR22; VAR3++)
    {
        VAR9 = VAR2->VAR23[VAR3];
        if (VAR9->VAR24->VAR25 == VAR26)
        {
            if (VAR9->VAR24->VAR30 == VAR63 && !VAR9->VAR24->VAR64 && !VAR9->VAR24->VAR65)
                VAR9->VAR24->VAR64 = FUN18(VAR9->VAR24->VAR66);
            if (VAR17[VAR3] && (VAR9->VAR24->VAR27.VAR28 * 101LL <= VAR9->VAR24->VAR27.VAR36 || VAR9->VAR24->VAR30 == VAR67))
            {
                double VAR68 = 2 * FUN10(VAR9->VAR27);
                VAR68 = VAR68 * VAR68 * VAR17[VAR3] * 1000 * 12 * 30;
                for (VAR7 = 1; VAR7 < VAR19; VAR7++)
                {
                    double VAR57 = VAR18[VAR3][VAR7] * FUN11(VAR7);
                    if (VAR57 < VAR68)
                    {
                        VAR68 = VAR57;
                        FUN19(&VAR9->VAR69.VAR28, &VAR9->VAR69.VAR36, FUN11(VAR7), 12 * 1001, VAR70);
                    }
                }
            }
            if (!VAR9->VAR69.VAR28)
            {
                if (VAR9->VAR24->VAR27.VAR36 * (VAR71)VAR9->VAR27.VAR28 <= VAR9->VAR24->VAR27.VAR28 * (VAR71)VAR9->VAR27.VAR36)
                {
                    VAR9->VAR69.VAR28 = VAR9->VAR24->VAR27.VAR36;
                    VAR9->VAR69.VAR36 = VAR9->VAR24->VAR27.VAR28;
                }
                else
                {
                    VAR9->VAR69.VAR28 = VAR9->VAR27.VAR36;
                    VAR9->VAR69.VAR36 = VAR9->VAR27.VAR28;
                }
            }
        }
        else if (VAR9->VAR24->VAR25 == VAR72)
        {
            if (!VAR9->VAR24->VAR65)
                VAR9->VAR24->VAR65 = FUN20(VAR9->VAR24->VAR30);
        }
    }
    FUN21(VAR2, VAR20);
    for (VAR3 = 0; VAR3 < VAR2->VAR22; VAR3++)
    {
        VAR9 = VAR2->VAR23[VAR3];
        if (VAR9->VAR24->VAR25 == VAR26)
        {
            if (VAR73 - VAR74)
            {
                VAR14 = &VAR2->VAR35;
                while (VAR75)
                {
                    if (VAR75->VAR47 != VAR3)
                        continue;
                    if (VAR75->VAR11->VAR53 < 0)
                        break;
                    if (VAR75->VAR11->VAR76 != VAR34)
                        break;
                    VAR75->VAR11->VAR53 -= VAR77;
                    VAR75 = VAR75->VAR45;
                }
                if (VAR75)
                    continue;
                VAR9->VAR78 -= VAR77;
            }
        }
    }
    return VAR5;
}