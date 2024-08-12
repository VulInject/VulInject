int FUN1(VAR1 *VAR2, target_ulong VAR3, target_ulong VAR4, int VAR5)
{
    struct VAR6 *VAR7;
    VAR1 *VAR8;
    int VAR9;
    if (VAR5 == VAR10)
    {
        VAR7 = FUN2(VAR2, VAR3);
        if (!VAR7)
        {
            return -VAR11;
        }
        if (VAR7->VAR12 > 1)
        {
            VAR7->VAR12--;
            return 0;
        }
        VAR9 = FUN3(VAR2, VAR7);
        if (VAR9)
        {
            return VAR9;
        }
        FUN4(&VAR2->VAR13->VAR14, VAR7, VAR15);
        FUN5(VAR7);
    }
    else
    {
        VAR9 = FUN6(VAR3, VAR4, VAR5);
        if (VAR9)
        {
            return VAR9;
        }
    }
    for (VAR8 = VAR16; VAR8 != NULL; VAR8 = VAR8->VAR17)
    {
        VAR9 = FUN7(VAR8, 0);
        if (VAR9)
        {
            return VAR9;
        }
    }
    return 0;
}