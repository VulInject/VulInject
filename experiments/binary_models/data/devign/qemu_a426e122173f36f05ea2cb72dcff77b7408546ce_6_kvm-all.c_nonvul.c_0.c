int FUN1(VAR1 *VAR2, target_ulong VAR3, target_ulong VAR4, int VAR5)
{
    struct VAR6 *VAR7;
    VAR1 *VAR8;
    int VAR9;
    if (VAR5 == VAR10)
    {
        VAR7 = FUN2(VAR2, VAR3);
        if (VAR7)
        {
            VAR7->VAR11++;
            return 0;
        }
        VAR7 = FUN3(sizeof(struct VAR6));
        if (!VAR7)
        {
            return -VAR12;
        }
        VAR7->VAR13 = VAR3;
        VAR7->VAR11 = 1;
        VAR9 = FUN4(VAR2, VAR7);
        if (VAR9)
        {
            free(VAR7);
            return VAR9;
        }
        FUN5(&VAR2->VAR14->VAR15, VAR7, VAR16);
    }
    else
    {
        VAR9 = FUN6(VAR3, VAR4, VAR5);
        if (VAR9)
        {
            return VAR9;
        }
    }
    for (VAR8 = VAR17; VAR8 != NULL; VAR8 = VAR8->VAR18)
    {
        VAR9 = FUN7(VAR8, 0);
        if (VAR9)
        {
            return VAR9;
        }
    }
    return 0;
}