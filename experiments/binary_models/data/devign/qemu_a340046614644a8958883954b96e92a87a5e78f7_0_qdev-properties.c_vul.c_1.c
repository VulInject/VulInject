static void FUN1(VAR1 *VAR2, VAR3 *VAR4, void *VAR5, const char *VAR6, VAR7 **VAR8)
{
    VAR9 *VAR10 = FUN2(VAR2);
    VAR11 *VAR12 = VAR5;
    VAR13 *VAR14 = FUN3(VAR10, VAR12);
    unsigned int VAR15, VAR16, VAR17;
    VAR7 *VAR18 = NULL;
    char *VAR19 = (char *)"";
    if (VAR10->VAR20 != VAR21)
    {
        FUN4(VAR8, VAR22);
        return;
    }
    FUN5(VAR4, &VAR19, VAR6, &VAR18);
    if (VAR18)
    {
        FUN6(VAR18);
        return FUN7(VAR2, VAR4, VAR5, VAR6, VAR8);
    }
    if (sscanf(VAR19, "", &VAR15, &VAR16, &VAR17) != 2)
    {
        VAR16 = 0;
        if (sscanf(VAR19, "", &VAR15, &VAR17) != 1)
        {
            goto VAR23;
        }
    }
    if (VAR19[VAR17] != '' || VAR16 > 7 || VAR15 > 31)
    {
        goto VAR23;
    }
    *VAR14 = VAR15 << 3 | VAR16;
    return;
VAR23:
    FUN8(VAR8, VAR24, VAR10, VAR12, VAR19);
}