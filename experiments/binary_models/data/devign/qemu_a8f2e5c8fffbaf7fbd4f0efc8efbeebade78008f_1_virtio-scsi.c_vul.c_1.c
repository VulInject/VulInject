static void FUN1(VAR1 *VAR2, VAR3 *VAR4)
{
    VAR5 *VAR6 = FUN2(VAR2);
    if (VAR6->VAR7 && !VAR6->VAR8)
    {
        FUN3(VAR6);
        return;
    }
    if (VAR6->VAR9)
    {
        FUN4(VAR6, NULL, VAR10, 0);
    }
}