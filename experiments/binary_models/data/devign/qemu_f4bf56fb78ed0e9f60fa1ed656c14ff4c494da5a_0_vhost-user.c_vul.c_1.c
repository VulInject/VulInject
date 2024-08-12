static int FUN1(struct VAR1 *VAR2, struct VAR3 *VAR4)
{
    int VAR5[VAR6];
    int VAR7, VAR8;
    size_t VAR9 = 0;
    bool VAR10 = FUN2(VAR2->VAR11, VAR12);
    VhostUserMsg VAR13 = {
        .VAR14.VAR15 = VAR16,
        .VAR14.VAR17 = VAR18,
    };
    if (VAR10)
    {
        VAR13.VAR14.VAR17 |= VAR19;
    }
    for (VAR7 = 0; VAR7 < VAR2->VAR4->VAR20; ++VAR7)
    {
        struct VAR21 *VAR22 = VAR2->VAR4->VAR23 + VAR7;
        ram_addr_t VAR24;
        VAR25 *VAR26;
        assert((VAR27)VAR22->VAR28 == VAR22->VAR28);
        VAR26 = FUN3((void *)(VAR27)VAR22->VAR28, &VAR24);
        VAR8 = FUN4(VAR26);
        if (VAR8 > 0)
        {
            VAR13.VAR29.VAR30.VAR23[VAR9].VAR28 = VAR22->VAR28;
            VAR13.VAR29.VAR30.VAR23[VAR9].VAR31 = VAR22->VAR31;
            VAR13.VAR29.VAR30.VAR23[VAR9].VAR32 = VAR22->VAR32;
            VAR13.VAR29.VAR30.VAR23[VAR9].VAR33 = VAR24;
            assert(VAR9 < VAR6);
            VAR5[VAR9++] = VAR8;
        }
    }
    VAR13.VAR29.VAR30.VAR20 = VAR9;
    if (!VAR9)
    {
        FUN5(""
                     "");
        return -1;
    }
    VAR13.VAR14.VAR34 = sizeof(VAR13.VAR29.VAR30.VAR20);
    VAR13.VAR14.VAR34 += sizeof(VAR13.VAR29.VAR30.VAR35);
    VAR13.VAR14.VAR34 += VAR9 * sizeof(VAR36);
    if (FUN6(VAR2, &VAR13, VAR5, VAR9) < 0)
    {
        return -1;
    }
    if (VAR10)
    {
        return FUN7(VAR2, &VAR13);
    }
    return 0;
}