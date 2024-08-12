static void FUN1(VAR1 *VAR2)
{
    VAR3 *VAR4;
    VAR4 = FUN2();
    if (!VAR4)
        return;
    FUN3(VAR4, (VAR5 *)VAR2, VAR6, VAR7);
    FUN3(VAR4, (VAR5 *)VAR2, VAR6, 0);
}