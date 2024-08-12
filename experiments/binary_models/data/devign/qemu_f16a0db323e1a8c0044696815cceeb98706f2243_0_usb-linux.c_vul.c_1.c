static int FUN1(void *VAR1, VAR2 *VAR3)
{
    VAR4 *VAR5 = 0;
    VAR6 *VAR7 = 0;
    int VAR8 = 0;
    const char *VAR9 = "";
    const char *VAR10 = "";
    const char *VAR11[] = {"", "", "", ""};
    char VAR12[VAR13];
    if (!VAR14)
    {
        VAR5 = fopen(VAR15 "", "");
        if (VAR5)
        {
            strcpy(VAR12, VAR15);
            VAR14 = VAR16;
            fclose(VAR5);
            FUN2(VAR10, VAR15, VAR9);
        }
        VAR5 = fopen(VAR17 "", "");
        if (!VAR14 && VAR5)
        {
            strcpy(VAR12, VAR17);
            VAR14 = VAR18;
            fclose(VAR5);
            FUN2(VAR10, VAR17, VAR9);
        }
        VAR7 = FUN3(VAR19 "");
        if (!VAR14 && VAR7)
        {
            strcpy(VAR12, VAR17);
            VAR14 = VAR20;
            FUN4(VAR7);
            FUN2(VAR10, VAR19, VAR9);
        }
        if (!VAR14)
        {
            FUN5("");
            goto VAR21;
        }
        VAR22 = FUN6(strlen(VAR12) + 1);
        if (VAR22)
        {
            strcpy(VAR22, VAR12);
            FUN5("", VAR11[VAR14], VAR22);
        }
        else
        {
            FUN7("");
            goto VAR21;
        }
    }
    switch (VAR14)
    {
    case VAR16:
    case VAR18:
        VAR8 = FUN8(VAR1, VAR3);
        break;
    case VAR20:
        VAR8 = FUN9(VAR1, VAR3);
        break;
    }
VAR21:
    return VAR8;
}