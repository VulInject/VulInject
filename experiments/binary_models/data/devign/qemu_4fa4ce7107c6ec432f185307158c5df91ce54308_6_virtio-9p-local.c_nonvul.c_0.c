static int FUN1(VAR1 *VAR2, const char *VAR3, VAR4 *VAR5)
{
    VAR6 *VAR7;
    int VAR8 = 0;
    char VAR9[VAR10];
    char *VAR11;
    int VAR12 = -1, VAR13 = -1, VAR14 = -1, VAR15 = -1;
    VAR11 = FUN2(VAR2, VAR3);
    VAR7 = FUN3(VAR11, "");
    if (!VAR7)
    {
        goto VAR16;
    }
    memset(VAR9, 0, VAR10);
    while (fgets(VAR9, VAR10, VAR7))
    {
        if (!FUN4(VAR9, "", 10))
        {
            VAR12 = FUN5(VAR9 + 11);
        }
        else if (!FUN4(VAR9, "", 10))
        {
            VAR13 = FUN5(VAR9 + 11);
        }
        else if (!FUN4(VAR9, "", 11))
        {
            VAR14 = FUN5(VAR9 + 12);
        }
        else if (!FUN4(VAR9, "", 11))
        {
            VAR15 = FUN5(VAR9 + 12);
        }
        memset(VAR9, 0, VAR10);
    }
    fclose(VAR7);
    goto VAR17;
VAR16:
    VAR8 = FUN6(VAR2, VAR3);
    if (VAR8 < 0)
    {
        goto VAR18;
    }
VAR17:
    VAR7 = FUN3(VAR11, "");
    if (!VAR7)
    {
        VAR8 = -1;
        goto VAR18;
    }
    if (VAR5->VAR19 != -1)
    {
        VAR12 = VAR5->VAR19;
    }
    if (VAR5->VAR20 != -1)
    {
        VAR13 = VAR5->VAR20;
    }
    if (VAR5->VAR21 != -1)
    {
        VAR14 = VAR5->VAR21;
    }
    if (VAR5->VAR22 != -1)
    {
        VAR15 = VAR5->VAR22;
    }
    if (VAR12 != -1)
    {
        fprintf(VAR7, "", VAR12);
    }
    if (VAR13 != -1)
    {
        fprintf(VAR7, "", VAR13);
    }
    if (VAR14 != -1)
    {
        fprintf(VAR7, "", VAR14);
    }
    if (VAR15 != -1)
    {
        fprintf(VAR7, "", VAR15);
    }
    fclose(VAR7);
VAR18:
    FUN7(VAR11);
    return VAR8;
}