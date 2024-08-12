int FUN1(VAR1 *VAR2, VAR3 *VAR4)
{
    struct VAR5 *VAR6, *VAR7, *VAR8 = (struct VAR5 *)VAR2->VAR9.VAR10.VAR11[2];
    const int VAR12 = 4 + (1 << VAR2->VAR13);
    assert(VAR4);
    if (!VAR8 || VAR8->VAR14 != VAR15 || !VAR8->VAR16 || !VAR8->VAR17 || (unsigned int)VAR8->VAR18 > VAR19 / (64 * 6) || (unsigned int)VAR8->VAR20 > VAR19 / 64 || !VAR8->VAR21)
    {
        FUN2(VAR4, VAR22, "");
        return -1;
    }
    if (VAR8->VAR23)
    {
        FUN2(VAR4, VAR22, "", VAR8->VAR23);
        return -1;
    }
    if (VAR8->VAR18 < 1 || VAR8->VAR20 < VAR8->VAR18 * VAR12 || VAR8->VAR24 >= VAR8->VAR18 || VAR8->VAR25 > VAR8->VAR20 - VAR12 * (VAR8->VAR18 - VAR8->VAR24))
    {
        FUN2(VAR4, VAR22, "");
        return -1;
    }
    VAR8->VAR26 = VAR2->VAR26;
    VAR8->VAR27 = VAR2->VAR28 ? 0 : VAR29;
    VAR8->VAR30 = NULL;
    VAR8->VAR31 = NULL;
    switch (VAR2->VAR32)
    {
    case VAR33:
        return 0;
    case VAR34:
        VAR7 = (struct VAR5 *)VAR2->VAR35.VAR10.VAR11[2];
        if (!VAR7)
            return -1;
        if (VAR7->VAR14 != VAR15)
            return -1;
        VAR8->VAR30 = VAR7->VAR21;
    case VAR36:
        VAR6 = (struct VAR5 *)VAR2->VAR37.VAR10.VAR11[2];
        if (!VAR6)
            VAR6 = VAR8;
        if (VAR6->VAR14 != VAR15)
            return -1;
        VAR8->VAR31 = VAR6->VAR21;
        return 0;
    }
    return -1;
}