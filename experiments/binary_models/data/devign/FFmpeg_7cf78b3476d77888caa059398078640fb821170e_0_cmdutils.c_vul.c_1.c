int FUN1(VAR1 *VAR2, VAR3 *VAR4, const char *VAR5)
{
    if (*VAR5 <= '' && *VAR5 >= '')
        return FUN2(VAR5, NULL, 0) == VAR4->VAR6;
    else if (*VAR5 == '' || *VAR5 == '' || *VAR5 == '' || *VAR5 == '' || *VAR5 == '')
    {
        enum AVMediaType VAR7;
        switch (*VAR5++)
        {
        case '':
            VAR7 = VAR8;
            break;
        case '':
            VAR7 = VAR9;
            break;
        case '':
            VAR7 = VAR10;
            break;
        case '':
            VAR7 = VAR11;
            break;
        case '':
            VAR7 = VAR12;
            break;
        }
        if (VAR7 != VAR4->VAR13->VAR14)
            return 0;
        if (*VAR5++ == '')
        {
            int VAR15, VAR6 = FUN2(VAR5, NULL, 0);
            for (VAR15 = 0; VAR15 < VAR2->VAR16; VAR15++)
                if (VAR2->VAR17[VAR15]->VAR13->VAR14 == VAR7 && VAR6-- == 0)
                    return VAR15 == VAR4->VAR6;
            return 0;
        }
        return 1;
    }
    else if (*VAR5 == '' && *(VAR5 + 1) == '')
    {
        int VAR18, VAR15, VAR19;
        char *VAR20;
        VAR5 += 2;
        VAR18 = FUN2(VAR5, &VAR20, 0);
        for (VAR15 = 0; VAR15 < VAR2->VAR21; VAR15++)
        {
            if (VAR2->VAR22[VAR15]->VAR23 != VAR18)
                continue;
            if (*VAR20++ == '')
            {
                int VAR24 = FUN2(VAR20, NULL, 0);
                return VAR24 >= 0 && VAR24 < VAR2->VAR22[VAR15]->VAR25 && VAR4->VAR6 == VAR2->VAR22[VAR15]->VAR26[VAR24];
            }
            for (VAR19 = 0; VAR19 < VAR2->VAR22[VAR15]->VAR25; VAR19++)
                if (VAR4->VAR6 == VAR2->VAR22[VAR15]->VAR26[VAR19])
                    return 1;
        }
        return 0;
    }
    else if (!*VAR5)
        return 1;
    FUN3(VAR2, VAR27, "", VAR5);
    return FUN4(VAR28);