void FUN1(const char *VAR1, VAR2 **VAR3)
{
    VAR4 *VAR5;
    VAR6 *VAR7 = FUN2(VAR1, &VAR5);
    if (!VAR7)
    {
        FUN3(VAR3, VAR8, VAR1);
        return;
    }
    FUN4(VAR7);
    FUN5(VAR7);
    FUN6(VAR5);
}