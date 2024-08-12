static int FUN1(const VAR1 *VAR2, const char *VAR3, VAR4 *VAR5, VAR6 **VAR7)
{
    int VAR8;
    VAR9 *VAR10;
    const VAR11 *VAR12;
    assert(VAR2->VAR13 == VAR14);
    VAR12 = VAR2->VAR15.VAR12.VAR16;
    VAR8 = FUN2();
    if (VAR8 == -1 || VAR17 >= VAR18)
    {
        FUN3(VAR7, "");
        return -1;
    }
    VAR10 = &VAR19[VAR8];
    memset(VAR10, 0, sizeof(*VAR10));
    if (VAR12->VAR20)
    {
        VAR10->VAR21 = FUN4(VAR12->VAR21);
        if (!VAR10->VAR21)
        {
            FUN3(VAR7, "", VAR12->VAR21);
            return -1;
        }
    }
    else
    {
        assert(VAR5);
        VAR10->VAR21 = VAR5;
    }
    VAR10->VAR3 = FUN5(VAR3);
    if (VAR12->VAR22)
    {
        VAR10->VAR23 = FUN5(VAR12->VAR23);
    }
    if (VAR12->VAR24)
    {
        VAR10->VAR25 = FUN5(VAR12->VAR26);
    }
    if (VAR12->VAR27 && FUN6(VAR10->VAR28.VAR29, VAR12->VAR28) < 0)
    {
        FUN3(VAR7, "");
        return -1;
    }
    if (VAR12->VAR27 && FUN7(VAR10->VAR28.VAR29))
    {
        FUN3(VAR7, "");
        return -1;
    }
    FUN8(&VAR10->VAR28);
    if (VAR12->VAR30)
    {
        if (VAR12->VAR31 > 0x7ffffff)
        {
            FUN3(VAR7, "" VAR32, VAR12->VAR31);
            return -1;
        }
        VAR10->VAR33 = VAR12->VAR31;
    }
    else
    {
        VAR10->VAR33 = VAR34;
    }
    VAR10->VAR35 = 1;
    VAR17++;
    return VAR8;
}