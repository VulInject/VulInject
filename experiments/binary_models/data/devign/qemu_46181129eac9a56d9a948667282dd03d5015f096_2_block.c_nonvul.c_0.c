static int FUN1(VAR1 *VAR2, uint64_t VAR3, uint64_t VAR4, VAR5 *VAR6, VAR7 **VAR8)
{
    VAR9 *VAR10 = VAR2->VAR10;
    VAR11 *VAR12;
    int VAR13;
    if ((VAR3 & (VAR14 | VAR15)) && FUN2(VAR2))
    {
        FUN3(VAR8, "");
        return -VAR16;
    }
    if (!VAR10)
    {
        return 0;
    }
    if (VAR10->VAR17)
    {
        return VAR10->FUN1(VAR2, VAR3, VAR4, VAR8);
    }
    if (!VAR10->VAR18)
    {
        assert(FUN4(&VAR2->VAR19));
        return 0;
    }
    FUN5(VAR12, &VAR2->VAR19, VAR20)
    {
        uint64_t VAR21, VAR22;
        VAR10->FUN6(VAR2, VAR12, VAR12->VAR23, VAR3, VAR4, &VAR21, &VAR22);
        VAR13 = FUN7(VAR12, VAR21, VAR22, VAR6, VAR8);
        if (VAR13 < 0)
        {
            return VAR13;
        }
    }
    return 0;
}