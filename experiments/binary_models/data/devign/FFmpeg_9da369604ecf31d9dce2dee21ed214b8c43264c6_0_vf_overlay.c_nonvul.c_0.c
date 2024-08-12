static int FUN1(VAR1 *VAR2, const char *VAR3, const char *VAR4, char *VAR5, int VAR6, int VAR7)
{
    VAR8 *VAR9 = VAR2->VAR10;
    int VAR11;
    if (!strcmp(VAR3, ""))
        VAR11 = FUN2(&VAR9->VAR12, VAR4, VAR3, VAR2);
    else if (!strcmp(VAR3, ""))
        VAR11 = FUN2(&VAR9->VAR13, VAR4, VAR3, VAR2);
    else if (!strcmp(VAR3, ""))
        VAR11 = FUN2(&VAR9->VAR14, VAR4, VAR3, VAR2);
    else
        VAR11 = FUN3(VAR15);
    if (VAR11 < 0)
        return VAR11;
    if (VAR9->VAR16 == VAR17)
    {
        FUN4(VAR2, VAR18);
        FUN5(VAR2, VAR19, "", VAR9->VAR20[VAR21], VAR9->VAR22, VAR9->VAR20[VAR23], VAR9->VAR24, VAR9->VAR25);
    }
    return VAR11;
}