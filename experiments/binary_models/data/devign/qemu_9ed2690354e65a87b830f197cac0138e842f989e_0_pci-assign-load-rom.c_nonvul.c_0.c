void *FUN1(VAR1 *VAR2, struct VAR3 *VAR4, int *VAR5, unsigned int VAR6, unsigned int VAR7, unsigned int VAR8, unsigned int VAR9)
{
    char VAR10[32], VAR11[64];
    VAR12 *VAR13;
    uint8_t VAR14;
    struct stat VAR15;
    void *VAR16 = NULL;
    if (VAR2->VAR17 || !VAR2->VAR18)
    {
        return NULL;
    }
    snprintf(VAR11, sizeof(VAR11), "", VAR6, VAR7, VAR8, VAR9);
    VAR13 = fopen(VAR11, "");
    if (VAR13 == NULL)
    {
        if (VAR19 != VAR20)
        {
            FUN2("", VAR11, strerror(VAR19));
        }
        return NULL;
    }
    if (FUN3(FUN4(VAR13), &VAR15) == -1)
    {
        FUN2("", VAR11, strerror(VAR19));
        goto VAR21;
    }
    VAR14 = 1;
    if (fwrite(&VAR14, 1, 1, VAR13) != 1)
    {
        goto VAR21;
    }
    FUN5(VAR13, 0, VAR22);
    snprintf(VAR10, sizeof(VAR10), "", FUN6(VAR4));
    FUN7(&VAR2->VAR23, VAR4, VAR10, VAR15.VAR24, &VAR25);
    FUN8(&VAR2->VAR23, &VAR2->VAR26);
    VAR16 = FUN9(&VAR2->VAR23);
    memset(VAR16, 0xff, VAR15.VAR24);
    if (!fread(VAR16, 1, VAR15.VAR24, VAR13))
    {
        FUN2("", VAR11);
        FUN10(""
                     ""
                     "");
        goto VAR21;
    }
    FUN11(VAR2, VAR27, 0, &VAR2->VAR23);
    VAR2->VAR28 = true;
    *VAR5 = VAR15.VAR24;
VAR21:
    FUN5(VAR13, 0, VAR22);
    VAR14 = 0;
    if (!fwrite(&VAR14, 1, 1, VAR13))
    {
        FUN12("", "");
    }
    fclose(VAR13);
    return VAR16;
}