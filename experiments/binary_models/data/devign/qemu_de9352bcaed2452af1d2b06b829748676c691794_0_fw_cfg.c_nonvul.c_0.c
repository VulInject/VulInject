int FUN1(VAR1 *VAR2, const char *VAR3, const char *VAR4, VAR5 *VAR6, uint32_t VAR7)
{
    const char *VAR8;
    int VAR9, VAR10;
    if (!VAR2->VAR11)
    {
        int VAR12 = sizeof(VAR13) + sizeof(VAR14) * VAR15;
        VAR2->VAR11 = FUN2(VAR12);
        FUN3(VAR2, VAR16, (VAR5 *)VAR2->VAR11, VAR12);
    }
    VAR10 = FUN4(VAR2->VAR11->VAR17);
    if (VAR10 == VAR15)
    {
        fprintf(VAR18, "");
        return 0;
    }
    FUN3(VAR2, VAR19 + VAR10, VAR6, VAR7);
    VAR8 = strrchr(VAR4, '');
    if (VAR8)
    {
        VAR8++;
    }
    else
    {
        VAR8 = VAR4;
    }
    snprintf(VAR2->VAR11->VAR20[VAR10].VAR21, sizeof(VAR2->VAR11->VAR20[VAR10].VAR21), "", VAR3, VAR8);
    for (VAR9 = 0; VAR9 < VAR10; VAR9++)
    {
        if (strcmp(VAR2->VAR11->VAR20[VAR10].VAR21, VAR2->VAR11->VAR20[VAR9].VAR21) == 0)
        {
            FUN5("", VAR22, VAR2->VAR11->VAR20[VAR10].VAR21);
            return 1;
        }
    }
    VAR2->VAR11->VAR20[VAR10].VAR23 = FUN6(VAR7);
    VAR2->VAR11->VAR20[VAR10].VAR24 = FUN7(VAR19 + VAR10);
    FUN5("", VAR22, VAR10, VAR2->VAR11->VAR20[VAR10].VAR21, VAR7);
    VAR2->VAR11->VAR17 = FUN6(VAR10 + 1);
    return 1;
}