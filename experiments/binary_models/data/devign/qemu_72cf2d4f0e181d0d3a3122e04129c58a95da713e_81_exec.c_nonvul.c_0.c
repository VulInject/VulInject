int FUN1(VAR1 *VAR2, target_ulong VAR3, target_ulong VAR4, int VAR5)
{
    target_ulong VAR6 = ~(VAR4 - 1);
    VAR7 *VAR8;
    FUN2(VAR8, &VAR2->VAR9, VAR10)
    {
        if (VAR3 == VAR8->VAR11 && VAR6 == VAR8->VAR6 && VAR5 == (VAR8->VAR5 & ~VAR12))
        {
            FUN3(VAR2, VAR8);
            return 0;
        }
    }
    return -VAR13;
}