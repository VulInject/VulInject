static void FUN1(void *VAR1)
{
    VAR2 *VAR3 = VAR1;
    VAR4 *VAR5 = VAR3->VAR5;
    VAR6 *VAR7 = FUN2(VAR5);
    if (!VAR7->VAR8)
    {
        assert(VAR3->VAR9);
        return;
    }
    VAR3->VAR9 = 0;
    if (!(VAR7->VAR10 & VAR11))
    {
        return;
    }
    FUN3(VAR3->VAR12, 1);
    FUN4(VAR3);
}