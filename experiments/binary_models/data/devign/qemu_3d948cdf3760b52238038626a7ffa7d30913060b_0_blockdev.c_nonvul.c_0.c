void FUN1(const char *VAR1, int64_t VAR2, VAR3 **VAR4)
{
    VAR5 *VAR6;
    VAR7 *VAR8 = FUN2(VAR1, &VAR6);
    if (!VAR8)
    {
        FUN3(VAR4, VAR9, VAR1);
        return;
    }
    FUN4(VAR8, VAR2, VAR4);
    FUN5(VAR6);
}