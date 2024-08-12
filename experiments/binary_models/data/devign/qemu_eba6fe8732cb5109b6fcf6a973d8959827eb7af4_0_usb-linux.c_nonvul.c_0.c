static int FUN1(void *VAR1, VAR2 *VAR3)
{
    VAR4 *VAR5 = VAR6;
    VAR7 *VAR8 = NULL;
    VAR9 *VAR10 = NULL;
    int VAR11 = 0;
    const char *VAR12[] = {"", "", "", ""};
    char VAR13[VAR14];
    if (!VAR15)
    {
        VAR10 = FUN2(VAR16 "");
        if (VAR10)
        {
            strcpy(VAR13, VAR17);
            VAR15 = VAR18;
            FUN3(VAR10);
            FUN4(VAR19, VAR16);
            goto VAR20;
        }
        VAR8 = fopen(VAR21 "", "");
        if (VAR8)
        {
            strcpy(VAR13, VAR21);
            VAR15 = VAR22;
            fclose(VAR8);
            FUN4(VAR19, VAR21);
            goto VAR20;
        }
        VAR8 = fopen(VAR17 "", "");
        if (VAR8)
        {
            strcpy(VAR13, VAR17);
            VAR15 = VAR23;
            fclose(VAR8);
            FUN4(VAR19, VAR17);
            goto VAR20;
        }
    VAR20:
        if (!VAR15)
        {
            if (VAR5)
                FUN5(VAR5, "");
            return -VAR24;
        }
        VAR25 = FUN6(strlen(VAR13) + 1);
        strcpy(VAR25, VAR13);
        if (VAR5)
            FUN5(VAR5, "", VAR12[VAR15], VAR25);
    }
    switch (VAR15)
    {
    case VAR22:
    case VAR23:
        VAR11 = FUN7(VAR1, VAR3);
        break;
    case VAR18:
        VAR11 = FUN8(VAR1, VAR3);
        break;
    default:
        VAR11 = -VAR26;
        break;
    }
    return VAR11;
}