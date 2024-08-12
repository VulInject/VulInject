static int FUN1(const char *VAR1, const char *VAR2, void *VAR3)
{
    VAR4 *VAR5 = VAR3;
    int VAR6 = 0;
    if (!strcmp(VAR1, ""))
    {
        VAR5->VAR1 = FUN2(VAR2);
    }
    else if (!strcmp(VAR1, ""))
    {
        strncpy(VAR5->VAR7, VAR2, sizeof(VAR5->VAR7));
    }
    else if (!strcmp(VAR1, ""))
    {
        FUN3(&VAR5->VAR8, VAR2, &VAR6)
    }
    else if (!strcmp(VAR1, ""))
    {
        FUN4(&VAR2[0], &VAR5->VAR9);
        FUN4(&VAR2[4], &VAR5->VAR10);
        FUN4(&VAR2[8], &VAR5->VAR11);
    }
    else if (!strcmp(VAR1, ""))
    {
        FUN3(&VAR5->VAR12, VAR2, &VAR6)
    }
    else if (!strcmp(VAR1, ""))
    {
        FUN3(&VAR5->VAR13, VAR2, &VAR6)
    }
    else if (!strcmp(VAR1, ""))
    {
        FUN3(&VAR5->VAR14, VAR2, &VAR6)
    }
    else if (!strcmp(VAR1, ""))
    {
        FUN5(&VAR5->VAR15, VAR2, VAR16, &VAR6);
    }
    else if (!strcmp(VAR1, ""))
    {
        FUN5(&VAR5->VAR17, VAR2, VAR18, &VAR6);
    }
    else if (!strcmp(VAR1, ""))
    {
        FUN5(&VAR5->VAR19, VAR2, VAR20, &VAR6);
    }
    else if (!strcmp(VAR1, ""))
    {
        FUN5(&VAR5->VAR21, VAR2, VAR22, &VAR6);
    }
    else if (!strcmp(VAR1, ""))
    {
        FUN3(&VAR5->VAR23, VAR2, &VAR6)
    }
    else
    {
        fprintf(VAR24, "", VAR1, VAR2);
        return (1);
    }
    if (VAR6)
    {
        fprintf(VAR24, "", VAR1, VAR2);
        return (1);
    }
    return (0);
}