static int FUN1(const void *VAR1, int VAR2, VAR3 **VAR4)
{
    union
    {
        const VAR5 *VAR6;
        const VAR7 *VAR8;
    } VAR9;
    const VAR10 *VAR11;
    const char *VAR12;
    VAR13 *VAR14 = NULL;
    if (VAR2)
    {
        VAR9.VAR6 = VAR1;
        VAR11 = VAR9.VAR6->VAR11;
        VAR12 = VAR9.VAR6->VAR15;
        if (VAR11->VAR16 == VAR17 || VAR11->VAR16 == VAR18 || !VAR19[VAR11->VAR16])
        {
            FUN2(VAR4, VAR20, "", "");
            return -1;
        }
    }
    else
    {
        VAR9.VAR8 = VAR1;
        VAR11 = VAR9.VAR8->VAR11;
        if (VAR11->VAR16 == VAR21)
        {
            FUN2(VAR4, VAR20, "", "");
            return -1;
        }
        VAR12 = VAR9.VAR8->VAR22 ? VAR9.VAR8->VAR15 : VAR9.VAR8->VAR12;
        if (VAR11->VAR16 == VAR23)
        {
            return 0;
        }
        if (!VAR19[VAR11->VAR16])
        {
            FUN2(VAR4, VAR20, "", ""
                                                                   "");
            return -1;
        }
    }
    if (!VAR2 && (VAR11->VAR16 != VAR18 || !VAR11->VAR24->VAR25))
    {
        VAR14 = FUN3(VAR9.VAR8->VAR26 ? VAR9.VAR8->VAR27 : 0, NULL);
    }
    if (VAR19[VAR11->VAR16](VAR11, VAR12, VAR14, VAR4) < 0)
    {
        if (VAR4 && !*VAR4)
        {
            FUN2(VAR4, VAR28, VAR29[VAR11->VAR16]);
        }
        return -1;
    }
    return 0;
}