static int FUN1(const VAR1 *VAR2, VAR3 *VAR4, const char *VAR5, const char *VAR6, const char *VAR7, const char *VAR8, const char *VAR9, const char *VAR10, int VAR11, int VAR12)
{
    VAR13 *VAR14;
    VAR14 = FUN2(VAR4, VAR5, VAR6, VAR12, VAR11);
    if (!VAR14)
    {
        close(VAR12);
        return -1;
    }
    if (FUN3(VAR14->VAR12, VAR2) < 0)
    {
        return -1;
    }
    if (VAR2->VAR15 || VAR2->VAR16)
    {
        snprintf(VAR14->VAR17.VAR18, sizeof(VAR14->VAR17.VAR18), "", VAR12);
    }
    else if (VAR2->VAR19)
    {
        snprintf(VAR14->VAR17.VAR18, sizeof(VAR14->VAR17.VAR18), "", VAR2->VAR20);
    }
    else
    {
        snprintf(VAR14->VAR17.VAR18, sizeof(VAR14->VAR17.VAR18), "", VAR7, VAR8, VAR9);
        if (strcmp(VAR9, "") != 0)
        {
            snprintf(VAR14->VAR21, sizeof(VAR14->VAR21), "", VAR9);
            snprintf(VAR14->VAR22, sizeof(VAR14->VAR22), "", VAR7);
        }
    }
    if (VAR2->VAR23 ? VAR2->VAR24 : VAR10 || (VAR2->VAR25 && VAR2->VAR26))
    {
        int VAR27;
        if (VAR2->VAR28 || VAR2->VAR29)
        {
            VAR27 = FUN4(VAR30, VAR10);
            if (VAR27 == -1)
            {
                return -1;
            }
        }
        else
        {
            VAR27 = -1;
        }
        VAR14->VAR31 = FUN5(&VAR14->VAR17, VAR27, VAR2->VAR25 && VAR2->VAR26);
        if (!VAR14->VAR31)
        {
            FUN6("");
            return -1;
        }
    }
    else if (VAR2->VAR28 || VAR2->VAR29)
    {
        FUN6("");
        return -1;
    }
    return 0;
}