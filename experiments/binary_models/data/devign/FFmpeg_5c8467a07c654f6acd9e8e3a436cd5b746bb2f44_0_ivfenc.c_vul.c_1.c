static int FUN1(VAR1 *VAR2)
{
    VAR3 *VAR4 = VAR2->VAR4;
    if (VAR4->VAR5)
    {
        VAR6 *VAR7 = VAR2->VAR8;
        size_t VAR9 = FUN2(VAR4);
        FUN3(VAR4, 24, VAR10);
        FUN4(VAR4, VAR7->VAR11 * VAR7->VAR12 / (VAR7->VAR11 - 1));
        FUN3(VAR4, VAR9, VAR10);
    }
    return 0;
}