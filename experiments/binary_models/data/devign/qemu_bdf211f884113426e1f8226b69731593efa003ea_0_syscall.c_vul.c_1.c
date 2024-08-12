static VAR1 FUN1(const VAR2 *VAR3, VAR4 *VAR5, int VAR6, int VAR7, abi_long VAR8)
{
    const VAR9 *VAR10 = VAR3->VAR10;
    const VAR11 *VAR12;
    const VAR9 *VAR13;
    const int *VAR14, *VAR15;
    int VAR16;
    void *VAR17;
    VAR18 *VAR19;
    unsigned long *VAR20;
    abi_long VAR21;
    int VAR22;
    assert(VAR3->VAR23 == VAR24);
    assert(*VAR10 == VAR25);
    VAR10++;
    assert(*VAR10 == VAR26);
    VAR16 = FUN2(VAR10, 0);
    VAR17 = FUN3(VAR27, VAR8, VAR16, 1);
    if (!VAR17)
    {
        return -VAR28;
    }
    VAR10++;
    assert(*VAR10 == (int)VAR29);
    VAR12 = VAR30 + *VAR10++;
    assert(VAR12->VAR31[0] == NULL);
    VAR13 = VAR12->VAR13;
    VAR14 = VAR12->VAR32[VAR33];
    VAR15 = VAR12->VAR32[VAR34];
    for (VAR22 = 0; VAR22 < VAR12->VAR35; VAR22++)
    {
        if (VAR14[VAR22] == FUN4(struct VAR36, VAR37))
        {
            assert(*VAR13 == VAR38);
            VAR19 = (VAR18 *)(VAR17 + VAR15[VAR22]);
            VAR20 = (unsigned long *)(VAR5 + VAR14[VAR22]);
            if (*VAR19 != 0)
            {
                *VAR20 = (unsigned long)FUN5(FUN6(*VAR19));
                if (!*VAR20)
                {
                    FUN7(VAR17, VAR8, 0);
                    return -VAR28;
                }
            }
            else
            {
                *VAR20 = 0;
            }
            VAR13++;
            continue;
        }
        VAR13 = FUN8(VAR5 + VAR14[VAR22], VAR17 + VAR15[VAR22], VAR13, VAR33);
    }
    FUN7(VAR17, VAR8, 0);
    assert(VAR20);
    VAR21 = FUN9(FUN10(VAR6, VAR3->VAR39, VAR5));
    if (*VAR20 != 0)
    {
        FUN7((void *)*VAR20, *VAR19, 0);
    }
    return VAR21;
}