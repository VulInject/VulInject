static VAR1 FUN1(VAR2 *VAR3, VAR4 *VAR5, target_ulong VAR6, VAR1 *VAR7)
{
    target_ulong VAR8 = VAR7[0];
    int VAR9 = VAR7[1];
    VAR10 *VAR11 = VAR5->VAR12;
    uint64_t VAR13 = FUN2(VAR5)->VAR14;
    int VAR15;
    if (VAR5->VAR16 == VAR17)
    {
        return VAR18;
    }
    if (!VAR5->VAR19)
    {
        return VAR20;
    }
    FUN3(VAR8, VAR9);
    if (VAR8 != 0)
    {
        return VAR21;
    }
    if (VAR9 && ((VAR9 < 18) || (VAR9 > 46)))
    {
        return VAR21;
    }
    VAR13 = FUN4(&VAR22);
    if (VAR9 > (FUN5(VAR13) + 1))
    {
        return VAR23;
    }
    VAR15 = FUN6(VAR3, VAR8, VAR9);
    if (VAR15 != -VAR24)
    {
        return FUN7(VAR15);
    }
    if (VAR11)
    {
        if (VAR11->VAR9 == VAR9)
        {
            if (VAR11->VAR25)
            {
                return VAR11->VAR26;
            }
            else
            {
                return VAR27;
            }
        }
        FUN8(VAR5);
    }
    if (!VAR9)
    {
        return VAR28;
    }
    VAR11 = FUN9(VAR10, 1);
    VAR11->VAR9 = VAR9;
    VAR11->VAR26 = VAR29;
    FUN10(&VAR11->VAR30, "", VAR31, VAR11, VAR32);
    VAR5->VAR12 = VAR11;
    return VAR27;
}