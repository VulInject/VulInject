static void *FUN1(VAR1 *VAR2, VAR3 *VAR4)
{
    VAR5 *VAR6 = VAR4->VAR6;
    VAR7 *VAR8 = FUN2(VAR6, VAR7, VAR6);
    VAR9 *VAR10 = FUN3(VAR8);
    VAR11 *VAR12;
    uint32_t VAR13;
    FUN4(VAR2, &VAR13);
    assert(VAR13 < VAR10->VAR14.VAR15);
    VAR12 = FUN5(VAR8, VAR10->VAR16[VAR13]);
    FUN6(VAR2, (unsigned char *)&VAR12->VAR17, sizeof(VAR12->VAR17));
    assert(VAR12->VAR17.VAR18 <= FUN7(VAR12->VAR17.VAR19));
    assert(VAR12->VAR17.VAR20 <= FUN7(VAR12->VAR17.VAR21));
    if (FUN8(VAR12, sizeof(VAR22) + VAR10->VAR23, sizeof(VAR24) + VAR10->VAR25) < 0)
    {
        FUN9("");
        FUN10(1);
    }
    FUN11(VAR4);
    VAR12->VAR4 = VAR4;
    if (VAR12->VAR4->VAR26.VAR27 != VAR28)
    {
        int VAR29 = (VAR12->VAR17.VAR18 > 1 ? VAR30 : VAR31);
        assert(VAR12->VAR4->VAR26.VAR27 == VAR29);
    }
    return VAR12;
}