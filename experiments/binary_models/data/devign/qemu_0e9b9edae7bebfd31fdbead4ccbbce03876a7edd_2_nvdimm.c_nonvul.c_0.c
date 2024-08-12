void FUN1(VAR1 *VAR2, VAR1 *VAR3, VAR4 *VAR5)
{
    VAR6 *VAR7;
    VAR7 = FUN2();
    if (!VAR7)
    {
        return;
    }
    FUN3(VAR7, VAR2, VAR3, VAR5);
    FUN4(VAR7, VAR2, VAR3, VAR5);
    FUN5(VAR7);
}