int FUN1(VAR1 *VAR2, VAR3 *VAR4)
{
    if (!VAR4 || (!VAR4->VAR5 && !VAR4->VAR6))
    {
        VAR2->VAR7->VAR8 = 1;
        return 0;
    }
    if (VAR2->VAR7->VAR8)
    {
        FUN2(VAR2, VAR9, "");
        return FUN3(VAR10);
    }
    if (VAR2->VAR7->VAR11->VAR5 || VAR2->VAR7->VAR11->VAR6)
        return FUN3(VAR12);
    FUN4(VAR2->VAR7->VAR11, VAR4);
    return 0;
}