int FUN1(VAR1 *VAR2, const char *VAR3, const char *VAR4, const char *VAR5, VAR6 *VAR7, unsigned char **VAR8, const unsigned char *VAR9, int VAR10)
{
    VAR11 *VAR12 = VAR2->VAR13;
    HTTPAuthType VAR14;
    int VAR15;
VAR16:
    VAR14 = VAR12->VAR17.VAR18;
    if ((VAR15 = FUN2(VAR2, VAR3, VAR4, VAR5, VAR9, VAR10)))
        return VAR15;
    if ((VAR15 = FUN3(VAR2, VAR7, VAR8, 0, VAR3)) < 0)
        return VAR15;
    if (VAR7->VAR19 == 401 && VAR14 == VAR20 && VAR12->VAR17.VAR18 != VAR20)
        goto VAR16;
    if (VAR7->VAR19 > 400)
    {
        FUN4(VAR2, VAR21, "", VAR3, VAR7->VAR19, VAR7->VAR22);
        FUN4(VAR2, VAR23, "", VAR12->VAR24);
    }
    return 0;
}