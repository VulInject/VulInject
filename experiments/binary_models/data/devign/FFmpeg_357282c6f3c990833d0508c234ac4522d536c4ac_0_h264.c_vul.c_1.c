static int FUN1(VAR1 *VAR2, void *VAR3, int *VAR4, const VAR5 *VAR6, int VAR7)
{
    VAR8 *VAR9 = VAR2->VAR10;
    VAR11 *VAR12 = &VAR9->VAR12;
    VAR13 *VAR14 = VAR3;
    int VAR15;
    VAR12->VAR16 = VAR2->VAR16;
    VAR12->VAR17 = VAR2->VAR17;
    if (VAR7 == 0)
    {
        VAR18 *VAR19;
        int VAR20, VAR21;
        VAR19 = VAR9->VAR22[0];
        VAR21 = 0;
        for (VAR20 = 1; VAR9->VAR22[VAR20] && VAR9->VAR22[VAR20]->VAR23; VAR20++)
            if (VAR9->VAR22[VAR20]->VAR23 < VAR19->VAR23)
            {
                VAR19 = VAR9->VAR22[VAR20];
                VAR21 = VAR20;
            }
        for (VAR20 = VAR21; VAR9->VAR22[VAR20]; VAR20++)
            VAR9->VAR22[VAR20] = VAR9->VAR22[VAR20 + 1];
        if (VAR19)
        {
            *VAR4 = sizeof(VAR13);
            *VAR14 = *(VAR13 *)VAR19;
        }
        return 0;
    }
    if (VAR9->VAR24 && !VAR9->VAR25)
    {
        int VAR20, VAR26, VAR27;
        unsigned char *VAR28 = VAR2->VAR29;
        if (VAR2->VAR30 < 7)
        {
            FUN2(VAR2, VAR31, "");
            return -1;
        }
        if (*VAR28 != 1)
        {
            FUN2(VAR2, VAR31, "", *VAR28);
            return -1;
        }
        VAR9->VAR32 = 2;
        VAR26 = *(VAR28 + 5) & 0x1f;
        VAR28 += 6;
        for (VAR20 = 0; VAR20 < VAR26; VAR20++)
        {
            VAR27 = FUN3(VAR28) + 2;
            if (FUN4(VAR9, VAR28, VAR27) < 0)
            {
                FUN2(VAR2, VAR31, "", VAR20);
                return -1;
            }
            VAR28 += VAR27;
        }
        VAR26 = *(VAR28++);
        for (VAR20 = 0; VAR20 < VAR26; VAR20++)
        {
            VAR27 = FUN3(VAR28) + 2;
            if (FUN4(VAR9, VAR28, VAR27) != VAR27)
            {
                FUN2(VAR2, VAR31, "", VAR20);
                return -1;
            }
            VAR28 += VAR27;
        }
        VAR9->VAR32 = ((*(((char *)(VAR2->VAR29)) + 4)) & 0x03) + 1;
        VAR9->VAR25 = 1;
    }
    if (VAR2->VAR33 == 0 && !VAR9->VAR24 && VAR12->VAR2->VAR30)
    {
        if (FUN4(VAR9, VAR12->VAR2->VAR29, VAR12->VAR2->VAR30) < 0)
            return -1;
    }
    VAR15 = FUN4(VAR9, VAR6, VAR7);
    if (VAR15 < 0)
        return -1;
    if (!(VAR12->VAR17 & VAR34) && !VAR12->VAR35)
    {
        if (VAR2->VAR36 >= VAR37 || VAR12->VAR38)
            return 0;
        FUN2(VAR2, VAR31, "");
        return -1;
    }
    if (!(VAR12->VAR17 & VAR34) || (VAR12->VAR39 >= VAR12->VAR40 && VAR12->VAR40))
    {
        VAR18 *VAR19 = VAR12->VAR35;
        VAR18 *VAR41 = VAR12->VAR35;
        int VAR20, VAR42, VAR43, VAR44, VAR21;
        VAR12->VAR39 = 0;
        VAR12->VAR35->VAR45 = VAR46;
        VAR12->VAR35->VAR47 = VAR12->VAR47;
        if (!VAR12->VAR48)
        {
            FUN5(VAR9, VAR9->VAR49, VAR9->VAR50);
            VAR9->VAR51 = VAR9->VAR52;
            VAR9->VAR53 = VAR9->VAR54;
        }
        VAR9->VAR55 = VAR9->VAR56;
        VAR9->VAR57 = VAR9->VAR58;
        if (!VAR59)
            FUN6(VAR12);
        FUN7(VAR12);
        if (VAR12->VAR60)
        {
            *VAR4 = 0;
        }
        else
        {
            VAR41->VAR61 = VAR62;
            VAR41->VAR63 = VAR41->VAR64[0] < VAR41->VAR64[1];
            if (VAR9->VAR65.VAR66 && VAR12->VAR2->VAR67 < VAR9->VAR65.VAR68)
            {
                VAR12->VAR2->VAR67 = VAR9->VAR65.VAR68;
                VAR12->VAR69 = 0;
            }
            if (VAR12->VAR2->VAR70 >= VAR71 && !VAR9->VAR65.VAR66)
            {
                VAR12->VAR2->VAR67 = VAR72;
                VAR12->VAR69 = 0;
            }
            VAR42 = 0;
            while (VAR9->VAR22[VAR42])
                VAR42++;
            assert(VAR42 <= VAR72);
            VAR9->VAR22[VAR42++] = VAR41;
            if (VAR41->VAR73 == 0)
                VAR41->VAR73 = VAR74;
            VAR19 = VAR9->VAR22[0];
            VAR21 = 0;
            for (VAR20 = 1; VAR9->VAR22[VAR20] && VAR9->VAR22[VAR20]->VAR23; VAR20++)
                if (VAR9->VAR22[VAR20]->VAR23 < VAR19->VAR23)
                {
                    VAR19 = VAR9->VAR22[VAR20];
                    VAR21 = VAR20;
                }
            VAR43 = !VAR9->VAR22[0]->VAR23 || !!VAR9->VAR22[VAR20];
            VAR44 = !VAR43 && VAR19->VAR23 < VAR9->VAR75;
            if (VAR9->VAR65.VAR66 && VAR12->VAR2->VAR67 >= VAR9->VAR65.VAR68)
            {
            }
            else if ((VAR44 && VAR42 - 1 == VAR12->VAR2->VAR67 && VAR12->VAR2->VAR67 < VAR72) || (VAR12->VAR69 && ((!VAR43 && VAR19->VAR23 > VAR9->VAR75 + 2) || VAR41->VAR47 == VAR76)))
            {
                VAR12->VAR69 = 0;
                VAR12->VAR2->VAR67++;
            }
            if (VAR44 || VAR42 > VAR12->VAR2->VAR67)
            {
                VAR19->VAR73 &= ~VAR74;
                for (VAR20 = VAR21; VAR9->VAR22[VAR20]; VAR20++)
                    VAR9->VAR22[VAR20] = VAR9->VAR22[VAR20 + 1];
            }
            if (!VAR44 && VAR42 > VAR12->VAR2->VAR67)
            {
                *VAR4 = sizeof(VAR13);
                VAR9->VAR75 = VAR19->VAR23;
                *VAR14 = *(VAR13 *)VAR19;
            }
            else
            {
                FUN2(VAR2, VAR77, "");
            }
        }
    }
    assert(VAR14->VAR3[0] || !*VAR4);
    FUN8(VAR12, VAR14);
    VAR2->VAR33 = VAR12->VAR78 - 1;
    return FUN9(VAR12, VAR15, VAR7);
}