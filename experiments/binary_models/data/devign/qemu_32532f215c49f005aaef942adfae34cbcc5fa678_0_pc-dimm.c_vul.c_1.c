static void FUN1(VAR1 *VAR2, VAR3 **VAR4)
{
    VAR5 *VAR6 = FUN2(VAR2);
    if (!VAR6->VAR7)
    {
        FUN3(VAR4, "" VAR8 "");
        return;
    }
    if ((VAR9 > 0) && (VAR6->VAR10 >= VAR9))
    {
        FUN3(VAR4, "" VAR11 "" VAR12 "", VAR6->VAR10, VAR9);
        return;
    }
}