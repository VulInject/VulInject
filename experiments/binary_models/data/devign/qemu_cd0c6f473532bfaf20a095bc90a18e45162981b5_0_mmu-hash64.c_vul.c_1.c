void FUN1(VAR1 *VAR2, target_ulong VAR3)
{
    VAR4 *VAR5 = FUN2(VAR2);
    VAR6 *VAR7;
    VAR7 = FUN3(VAR5, VAR3);
    if (!VAR7)
    {
        return;
    }
    if (VAR7->VAR8 & VAR9)
    {
        VAR7->VAR8 &= ~VAR9;
        FUN4(FUN5(VAR5), 1);
    }
}