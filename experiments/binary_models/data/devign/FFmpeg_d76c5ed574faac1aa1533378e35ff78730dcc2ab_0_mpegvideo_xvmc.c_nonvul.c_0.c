int FUN1(VAR1 *VAR2, VAR3 *VAR4)
{
    struct VAR5 *VAR6, *VAR7, *VAR8 = (struct VAR5 *)VAR2->VAR9.VAR10[2];
    const int VAR11 = 4 + (1 << VAR2->VAR12);
    assert(VAR4);
    if (!VAR8 || VAR8->VAR13 != VAR14 || !VAR8->VAR15 || !VAR8->VAR16)
    {
        FUN2(VAR4, VAR17, "");
        return -1;
    }
    if (VAR8->VAR18)
    {
        FUN2(VAR4, VAR17, "", VAR8->VAR18);
        return -1;
    }
    if (VAR8->VAR19 < 1 || VAR8->VAR20 < VAR11)
    {
        FUN2(VAR4, VAR17, "");
        return -1;
    }
    if (VAR8->VAR19 < 1 || VAR8->VAR20 < VAR11)
    {
        FUN2(VAR4, VAR17, "");
        return -1;
    }
    VAR8->VAR21 = VAR2->VAR21;
    VAR8->VAR22 = VAR2->VAR23 ? 0 : VAR24;
    VAR8->VAR25 = NULL;
    VAR8->VAR26 = NULL;
    switch (VAR2->VAR27)
    {
    case VAR28:
        return 0;
    case VAR29:
        VAR7 = (struct VAR5 *)VAR2->VAR30.VAR10[2];
        if (!VAR7)
            return -1;
        if (VAR7->VAR13 != VAR14)
            return -1;
        VAR8->VAR25 = VAR7->VAR31;
    case VAR32:
        VAR6 = (struct VAR5 *)VAR2->VAR33.VAR10[2];
        if (!VAR6)
            VAR6 = VAR8;
        if (VAR6->VAR13 != VAR14)
            return -1;
        VAR8->VAR26 = VAR6->VAR31;
        return 0;
    }
    return -1;
}