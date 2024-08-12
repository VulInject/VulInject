static void FUN1(const VAR1 *VAR2, VAR3 *VAR4, const char *VAR5, const char *VAR6, const char *VAR7, const char *VAR8, const char *VAR9, const char *VAR10, int VAR11, int VAR12, VAR13 **VAR14)
{
    VAR13 *VAR15 = NULL;
    VAR16 *VAR17 = FUN2(VAR4, VAR5, VAR6, VAR12, VAR11);
    int VAR18;
    FUN3(VAR17->VAR12, VAR2, &VAR15);
    if (VAR15)
    {
        FUN4(VAR14, VAR15);
        return;
    }
    if (VAR2->VAR19 || VAR2->VAR20)
    {
        snprintf(VAR17->VAR21.VAR22, sizeof(VAR17->VAR21.VAR22), "", VAR12);
    }
    else if (VAR2->VAR23)
    {
        snprintf(VAR17->VAR21.VAR22, sizeof(VAR17->VAR21.VAR22), "", VAR2->VAR24);
    }
    else
    {
        snprintf(VAR17->VAR21.VAR22, sizeof(VAR17->VAR21.VAR22), "", VAR7, VAR8, VAR9);
        if (strcmp(VAR9, "") != 0)
        {
            snprintf(VAR17->VAR25, sizeof(VAR17->VAR25), "", VAR9);
            snprintf(VAR17->VAR26, sizeof(VAR17->VAR26), "", VAR7);
        }
    }
    if (VAR2->VAR27 ? VAR2->VAR28 : VAR10 || (VAR2->VAR29 && VAR2->VAR30))
    {
        VhostNetOptions VAR31;
        VAR31.VAR32 = VAR33;
        VAR31.VAR34 = &VAR17->VAR21;
        VAR31.VAR35 = VAR2->VAR29 && VAR2->VAR30;
        if (VAR2->VAR36 || VAR2->VAR37)
        {
            VAR18 = FUN5(VAR38, VAR10, &VAR15);
            if (VAR18 == -1)
            {
                FUN4(VAR14, VAR15);
                return;
            }
        }
        else
        {
            VAR18 = open("", VAR39);
            if (VAR18 < 0)
            {
                FUN6(VAR14, VAR40, "");
                return;
            }
        }
        VAR31.VAR41 = (void *)(VAR42)VAR18;
        VAR17->VAR43 = FUN7(&VAR31);
        if (!VAR17->VAR43)
        {
            FUN8(VAR14, "");
            return;
        }
    }
    else if (VAR2->VAR36 || VAR2->VAR37)
    {
        FUN8(VAR14, "");
    }
}