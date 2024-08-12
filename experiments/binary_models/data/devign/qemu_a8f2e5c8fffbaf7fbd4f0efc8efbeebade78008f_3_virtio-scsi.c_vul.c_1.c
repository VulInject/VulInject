static void FUN1(VAR1 *VAR2, VAR3 *VAR4)
{
    VAR5 *VAR6 = (VAR5 *)VAR2;
    VAR7 *VAR8;
    if (VAR6->VAR9 && !VAR6->VAR10)
    {
        FUN2(VAR6);
        return;
    }
    while ((VAR8 = FUN3(VAR6, VAR4)))
    {
        FUN4(VAR6, VAR8);
    }
}