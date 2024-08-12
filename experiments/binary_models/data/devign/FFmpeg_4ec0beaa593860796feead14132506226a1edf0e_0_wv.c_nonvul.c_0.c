static int FUN1(VAR1 *VAR2, VAR3 *VAR4)
{
    VAR5 *VAR6 = VAR2->VAR7;
    int VAR8, VAR9;
    if (FUN2(&VAR2->VAR10))
        return -VAR11;
    if (VAR6->VAR12)
    {
        if (FUN3(VAR2, &VAR2->VAR10) < 0)
            return -1;
    }
    if (FUN4(VAR4, VAR6->VAR13 + VAR14) < 0)
        return VAR15;
    memcpy(VAR4->VAR16, VAR6->VAR17, VAR14);
    VAR8 = FUN5(&VAR2->VAR10, VAR4->VAR16 + VAR14, VAR6->VAR13);
    if (VAR8 != VAR6->VAR13)
    {
        FUN6(VAR4);
        return VAR18;
    }
    VAR4->VAR19 = 0;
    VAR6->VAR12 = 1;
    VAR4->VAR20 = VAR8 + VAR14;
    return 0;
}