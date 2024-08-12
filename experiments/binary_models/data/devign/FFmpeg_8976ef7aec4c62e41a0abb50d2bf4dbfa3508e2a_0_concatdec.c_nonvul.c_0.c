static int FUN1(VAR1 *VAR2, char *VAR3, VAR4 **VAR5, unsigned *VAR6)
{
    VAR7 *VAR8 = VAR2->VAR9;
    VAR4 *VAR10;
    char *VAR11;
    size_t VAR12;
    VAR12 = strlen(VAR2->VAR3) + strlen(VAR3) + 16;
    if (!(VAR11 = FUN2(VAR12)))
        return FUN3(VAR13);
    FUN4(VAR11, VAR12, VAR2->VAR3, VAR3);
    FUN5(VAR3);
    if (VAR8->VAR14 >= *VAR6)
    {
        size_t VAR15 = FUN6(*VAR6 * 2, 16);
        VAR4 *VAR16;
        if (VAR15 <= VAR8->VAR14 || VAR15 > VAR17 / sizeof(*VAR8->VAR18) || !(VAR16 = FUN7(VAR8->VAR18, VAR15 * sizeof(*VAR8->VAR18))))
            return FUN3(VAR13);
        VAR8->VAR18 = VAR16;
        *VAR6 = VAR15;
    }
    VAR10 = &VAR8->VAR18[VAR8->VAR14++];
    memset(VAR10, 0, sizeof(*VAR10));
    *VAR5 = VAR10;
    VAR10->VAR11 = VAR11;
    VAR10->VAR19 = VAR20;
    VAR10->VAR21 = VAR20;
    return 0;
}