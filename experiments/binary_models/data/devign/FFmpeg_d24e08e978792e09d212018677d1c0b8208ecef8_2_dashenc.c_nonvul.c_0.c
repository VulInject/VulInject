static int FUN1(VAR1 *VAR2, int final, int VAR3)
{
    VAR4 *VAR5 = VAR2->VAR6;
    int VAR7, VAR8 = 0;
    const char *VAR9 = FUN2(VAR2->VAR10);
    int VAR11 = VAR9 && !strcmp(VAR9, "");
    int VAR12 = 0;
    if (VAR3 >= 0)
        VAR12 = VAR5->VAR13[VAR3].VAR14;
    for (VAR7 = 0; VAR7 < VAR2->VAR15; VAR7++)
    {
        VAR16 *VAR17 = &VAR5->VAR13[VAR7];
        VAR18 *VAR19 = VAR2->VAR13[VAR7];
        char VAR10[1024] = "", VAR20[1024], VAR21[1024];
        int VAR22, VAR23 = 0;
        if (!VAR17->VAR24)
            continue;
        if (VAR3 >= 0 && VAR7 != VAR3)
        {
            if (VAR2->VAR13[VAR7]->VAR25->VAR26 != VAR27)
                continue;
            if (VAR5->VAR28 && VAR17->VAR14 > VAR12)
                continue;
        }
        if (!VAR17->VAR29)
        {
            FUN3(VAR2, VAR17);
        }
        if (!VAR5->VAR30)
        {
            VAR31 *VAR32 = NULL;
            FUN4(VAR10, sizeof(VAR10), VAR5->VAR33, VAR7, VAR17->VAR14, VAR17->VAR34, VAR17->VAR35);
            snprintf(VAR20, sizeof(VAR20), "", VAR5->VAR36, VAR10);
            snprintf(VAR21, sizeof(VAR21), VAR11 ? "" : "", VAR20);
            FUN5(&VAR32, VAR5);
            VAR8 = VAR2->FUN6(VAR2, &VAR17->VAR37, VAR21, VAR38, &VAR32);
            if (VAR8 < 0)
                break;
            FUN7(&VAR32);
            if (!strcmp(VAR17->VAR39, ""))
                FUN8(VAR17->VAR40->VAR41);
        }
        else
        {
            snprintf(VAR20, sizeof(VAR20), "", VAR5->VAR36, VAR17->VAR42);
        }
        VAR8 = FUN9(VAR17, &VAR22);
        if (VAR8 < 0)
            break;
        VAR17->VAR24 = 0;
        if (VAR5->VAR30)
        {
            FUN10(VAR2, VAR20, VAR17->VAR43, &VAR23);
        }
        else
        {
            FUN11(VAR2, &VAR17->VAR37);
            if (VAR11)
            {
                VAR8 = FUN12(VAR21, VAR20);
                if (VAR8 < 0)
                    break;
            }
        }
        if (!VAR17->VAR34)
        {
            int64_t VAR44 = (VAR45)VAR22 * 8 * VAR46 / FUN13(VAR17->VAR47 - VAR17->VAR35, VAR19->VAR48, VAR49);
            if (VAR44 >= 0)
            {
                VAR17->VAR34 = VAR44;
                snprintf(VAR17->VAR50, sizeof(VAR17->VAR50), ""%VAR51\"", VAR17->VAR34);
            }
        }
        FUN14(VAR17, VAR10, VAR17->VAR35, VAR17->VAR47 - VAR17->VAR35, VAR17->VAR43, VAR22, VAR23);
        FUN15(VAR2, VAR52, "", VAR7, VAR17->VAR14, VAR20);
        VAR17->VAR43 += VAR22;
    }
    if (VAR5->VAR53 || (final && VAR5->VAR54))
    {
        for (VAR7 = 0; VAR7 < VAR2->VAR15; VAR7++)
        {
            VAR16 *VAR17 = &VAR5->VAR13[VAR7];
            int VAR55;
            int remove = VAR17->VAR56 - VAR5->VAR53 - VAR5->VAR57;
            if (final && VAR5->VAR54)
                remove = VAR17->VAR56;
            if (remove > 0)
            {
                for (VAR55 = 0; VAR55 < remove; VAR55++)
                {
                    char VAR10[1024];
                    snprintf(VAR10, sizeof(VAR10), "", VAR5->VAR36, VAR17->VAR58[VAR55]->VAR59);
                    unlink(VAR10);
                    FUN16(VAR17->VAR58[VAR55]);
                }
                VAR17->VAR56 -= remove;
                memmove(VAR17->VAR58, VAR17->VAR58 + remove, VAR17->VAR56 * sizeof(*VAR17->VAR58));
            }
        }
    }
    if (VAR8 >= 0)
        VAR8 = FUN17(VAR2, final);
    return VAR8;
}