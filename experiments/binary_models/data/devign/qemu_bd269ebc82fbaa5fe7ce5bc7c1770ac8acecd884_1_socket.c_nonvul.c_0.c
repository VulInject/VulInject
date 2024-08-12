void FUN1(const char *VAR1, VAR2 **VAR3)
{
    VAR2 *VAR4 = NULL;
    VAR5 *VAR6 = FUN2(VAR1, &VAR4);
    if (!VAR4)
    {
        FUN3(VAR6, &VAR4);
    }
    FUN4(VAR3, VAR4);
}