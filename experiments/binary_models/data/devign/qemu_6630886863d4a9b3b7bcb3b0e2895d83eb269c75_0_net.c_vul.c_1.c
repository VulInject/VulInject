static int FUN1(const VAR1 *VAR2, const char *VAR3, VAR4 *VAR5, VAR6 **VAR7)
{
    int VAR8;
    VAR9 *VAR10;
    const VAR11 *VAR12;
    assert(VAR2->VAR13 == VAR14);
    VAR12 = VAR2->VAR12;
    VAR8 = FUN2();
    if (VAR8 == -1 || VAR15 >= VAR16)
    {
        FUN3("");
        return -1;
    }
    VAR10 = &VAR17[VAR8];
    memset(VAR10, 0, sizeof(*VAR10));
    if (VAR12->VAR18)
    {
        VAR10->VAR19 = FUN4(VAR12->VAR19);
        if (!VAR10->VAR19)
        {
            FUN3("", VAR12->VAR19);
            return -1;
        }
    }
    else
    {
        assert(VAR5);
        VAR10->VAR19 = VAR5;
    }
    VAR10->VAR3 = FUN5(VAR3);
    if (VAR12->VAR20)
    {
        VAR10->VAR21 = FUN5(VAR12->VAR21);
    }
    if (VAR12->VAR22)
    {
        VAR10->VAR23 = FUN5(VAR12->VAR24);
    }
    if (VAR12->VAR25 && FUN6(VAR10->VAR26.VAR27, VAR12->VAR26) < 0)
    {
        FUN3("");
        return -1;
    }
    if (VAR12->VAR25 && FUN7(VAR10->VAR26.VAR27))
    {
        FUN3("");
        return -1;
    }
    FUN8(&VAR10->VAR26);
    if (VAR12->VAR28)
    {
        if (VAR12->VAR29 > 0x7ffffff)
        {
            FUN3("" VAR30, VAR12->VAR29);
            return -1;
        }
        VAR10->VAR31 = VAR12->VAR29;
    }
    else
    {
        VAR10->VAR31 = VAR32;
    }
    VAR10->VAR33 = 1;
    VAR15++;
    return VAR8;
}