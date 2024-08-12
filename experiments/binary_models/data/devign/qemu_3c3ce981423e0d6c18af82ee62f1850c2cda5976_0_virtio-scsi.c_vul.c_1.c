static void *FUN1(VAR1 *VAR2, VAR3 *VAR4)
{
    VAR5 *VAR6 = VAR4->VAR6;
    VAR7 *VAR8 = FUN2(VAR6, VAR7, VAR6);
    VAR9 *VAR10 = FUN3(VAR8);
    VAR11 *VAR12;
    uint32_t VAR13;
    VAR12 = FUN4(sizeof(*VAR12));
    FUN5(VAR2, &VAR13);
    assert(VAR13 < VAR10->VAR14.VAR15);
    FUN6(VAR2, (unsigned char *)&VAR12->VAR16, sizeof(VAR12->VAR16));
    FUN7(VAR8, VAR10->VAR17[VAR13], VAR12);
    FUN8(VAR4);
    VAR12->VAR4 = VAR4;
    if (VAR12->VAR4->VAR18.VAR19 != VAR20)
    {
        int VAR21 = (VAR12->VAR16.VAR22 > 1 ? VAR23 : VAR24);
        assert(VAR12->VAR4->VAR18.VAR19 == VAR21);
    }
    return VAR12;