int FUN1(VAR1 *VAR2, VAR3 *VAR4)
{
    struct VAR5 *VAR6, *VAR7, *VAR8 = (struct VAR5 *)VAR2->VAR9.VAR10[2];
    const int VAR11 = 4 + (1 << VAR2->VAR12);
    assert(VAR4);
    if (!VAR8 || VAR8->VAR13 != VAR14 || !VAR8->VAR15 || !VAR8->VAR16 || (unsigned int)VAR8->VAR17 > VAR18 / (64 * 6) || (unsigned int)VAR8->VAR19 > VAR18 / 64 || !VAR8->VAR20)
    {
        FUN2(VAR4, VAR21, "");
        return -1;
    }
    if (VAR8->VAR22)
    {
        FUN2(VAR4, VAR21, "", VAR8->VAR22);
        return -1;
    }
    if (VAR8->VAR17 < 1 || VAR8->VAR19 < VAR8->VAR17 * VAR11 || VAR8->VAR23 >= VAR8->VAR17 || VAR8->VAR24 > VAR8->VAR19 - VAR11 * (VAR8->VAR17 - VAR8->VAR23))
    {
        FUN2(VAR4, VAR21, "");
        return -1;
    }
    VAR8->VAR25 = VAR2->VAR25;
    VAR8->VAR26 = VAR2->VAR27 ? 0 : VAR28;
    VAR8->VAR29 = NULL;
    VAR8->VAR30 = NULL;
    switch (VAR2->VAR31)
    {
    case VAR32:
        return 0;
    case VAR33:
        VAR7 = (struct VAR5 *)VAR2->VAR34.VAR10[2];
        if (!VAR7)
            return -1;
        if (VAR7->VAR13 != VAR14)
            return -1;
        VAR8->VAR29 = VAR7->VAR20;
    case VAR35:
        VAR6 = (struct VAR5 *)VAR2->VAR36.VAR10[2];
        if (!VAR6)
            VAR6 = VAR8;
        if (VAR6->VAR13 != VAR14)
            return -1;
        VAR8->VAR30 = VAR6->VAR20;
        return 0;
    }
    return -1;
}