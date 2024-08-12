void FUN1(VAR1 *VAR2, target_ulong VAR3, target_ulong VAR4, target_ulong VAR5)
{
    VAR6 *VAR7 = &VAR2->VAR7;
    if (VAR7->VAR8 == VAR9)
    {
        FUN2(VAR3, VAR4, VAR5);
        return;
    }
    VAR3 *= VAR10;
    if (VAR7->VAR8)
    {
        FUN3(VAR7->VAR8 + VAR3, VAR4);
        FUN3(VAR7->VAR8 + VAR3 + VAR10 / 2, VAR5);
    }
    else
    {
        FUN4(FUN5(VAR2)->VAR11, VAR7->VAR12 + VAR3, VAR4);
        FUN4(FUN5(VAR2)->VAR11, VAR7->VAR12 + VAR3 + VAR10 / 2, VAR5);
    }
}