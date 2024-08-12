static char *FUN1(VAR1 *VAR2, const char *VAR3, const char *VAR4, const char *VAR5, const char *VAR6)
{
    VAR7 *VAR8 = &VAR2->VAR9;
    int VAR10;
    uint32_t VAR11[2];
    char VAR12[17];
    char VAR13[9];
    int VAR14;
    char VAR15[33], VAR16[33], VAR17[33];
    struct VAR18 *VAR19;
    uint8_t VAR20[16];
    char *VAR21;
    VAR8->VAR13++;
    snprintf(VAR13, sizeof(VAR13), "", VAR8->VAR13);
    for (VAR14 = 0; VAR14 < 2; VAR14++)
        VAR11[VAR14] = FUN2();
    FUN3(VAR12, (const VAR22 *)VAR11, sizeof(VAR11), 1);
    VAR12[2 * sizeof(VAR11)] = 0;
    VAR19 = FUN4();
    if (!VAR19)
        return NULL;
    FUN5(VAR19);
    FUN6(VAR19, VAR3, "", VAR2->VAR23, "", VAR4, NULL);
    FUN7(VAR19, VAR20);
    FUN3(VAR15, VAR20, 16, 1);
    VAR15[32] = 0;
    if (!strcmp(VAR8->VAR24, "") || !strcmp(VAR8->VAR24, ""))
    {
    }
    else if (!strcmp(VAR8->VAR24, ""))
    {
        FUN5(VAR19);
        FUN6(VAR19, VAR15, "", VAR8->VAR25, "", VAR12, NULL);
        FUN7(VAR19, VAR20);
        FUN3(VAR15, VAR20, 16, 1);
        VAR15[32] = 0;
    }
    else
    {
        FUN8(VAR19);
        return NULL;
    }
    FUN5(VAR19);
    FUN6(VAR19, VAR6, "", VAR5, NULL);
    FUN7(VAR19, VAR20);
    FUN3(VAR16, VAR20, 16, 1);
    VAR16[32] = 0;
    FUN5(VAR19);
    FUN6(VAR19, VAR15, "", VAR8->VAR25, NULL);
    if (!strcmp(VAR8->VAR26, "") || !strcmp(VAR8->VAR26, ""))
    {
        FUN6(VAR19, "", VAR13, "", VAR12, "", VAR8->VAR26, NULL);
    }
    FUN6(VAR19, "", VAR16, NULL);
    FUN7(VAR19, VAR20);
    FUN3(VAR17, VAR20, 16, 1);
    VAR17[32] = 0;
    FUN8(VAR19);
    if (!strcmp(VAR8->VAR26, "") || !strcmp(VAR8->VAR26, ""))
    {
    }
    else if (!strcmp(VAR8->VAR26, ""))
    {
        return NULL;
    }
    else
    {
        return NULL;
    }
    VAR10 = strlen(VAR3) + strlen(VAR2->VAR23) + strlen(VAR8->VAR25) + strlen(VAR5) + strlen(VAR17) + strlen(VAR8->VAR24) + strlen(VAR8->VAR27) + strlen(VAR8->VAR26) + strlen(VAR12) + strlen(VAR13) + 150;
    VAR21 = FUN9(VAR10);
    if (!VAR21)
        return NULL;
    snprintf(VAR21, VAR10, "");
    FUN10(VAR21, VAR10, ""%VAR28\"", VAR3);
    FUN10(VAR21, VAR10, ""%VAR28\"", VAR2->VAR23);
    FUN10(VAR21, VAR10, ""%VAR28\"", VAR8->VAR25);
    FUN10(VAR21, VAR10, ""%VAR28\"", VAR5);
    FUN10(VAR21, VAR10, ""%VAR28\"", VAR17);
    if (VAR8->VAR24[0])
        FUN10(VAR21, VAR10, ""%VAR28\"", VAR8->VAR24);
    if (VAR8->VAR27[0])
        FUN10(VAR21, VAR10, ""%VAR28\"", VAR8->VAR27);
    if (VAR8->VAR26[0])
    {
        FUN10(VAR21, VAR10, ""%VAR28\"", VAR8->VAR26);
        FUN10(VAR21, VAR10, ""%VAR28\"", VAR12);
        FUN10(VAR21, VAR10, "", VAR13);
    }
    FUN10(VAR21, VAR10, "");
    return VAR21;
}