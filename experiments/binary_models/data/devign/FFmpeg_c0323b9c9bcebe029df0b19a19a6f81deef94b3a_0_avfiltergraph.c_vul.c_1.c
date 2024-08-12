int FUN1(VAR1 *VAR2, const char *VAR3, const char *VAR4, const char *VAR5, char *VAR6, int VAR7, int VAR8)
{
    int VAR9, VAR10 = FUN2(VAR11);
    if (!VAR2)
        return VAR10;
    if ((VAR8 & VAR12) && !(VAR8 & VAR13))
    {
        VAR10 = FUN1(VAR2, VAR3, VAR4, VAR5, VAR6, VAR7, VAR8 | VAR13);
        if (VAR10 != FUN2(VAR11))
            return VAR10;
    }
    if (VAR7 && VAR6)
        VAR6[0] = 0;
    for (VAR9 = 0; VAR9 < VAR2->VAR14; VAR9++)
    {
        VAR15 *VAR16 = VAR2->VAR17[VAR9];
        if (!strcmp(VAR3, "") || !strcmp(VAR3, VAR16->VAR18) || !strcmp(VAR3, VAR16->VAR16->VAR18))
        {
            VAR10 = FUN3(VAR16, VAR4, VAR5, VAR6, VAR7, VAR8);
            if (VAR10 != FUN2(VAR11))
            {
                if ((VAR8 & VAR12) || VAR10 < 0)
                    return VAR10;
            }
        }
    }
    return VAR10;
}