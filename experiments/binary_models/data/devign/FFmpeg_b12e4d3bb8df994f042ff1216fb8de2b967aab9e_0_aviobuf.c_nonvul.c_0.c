int FUN1(VAR1 *VAR2, VAR3 **VAR4)
{
    VAR5 *VAR6;
    int VAR7;
    static const char VAR8[VAR9] = {0};
    int VAR10 = 0;
    if (!VAR2)
    {
        *VAR4 = NULL;
        return 0;
    }
    if (!VAR2->VAR11)
    {
        FUN2(VAR2, VAR8, sizeof(VAR8));
        VAR10 = VAR9;
    }
    FUN3(VAR2);
    VAR6 = VAR2->VAR12;
    *VAR4 = VAR6->VAR13;
    VAR7 = VAR6->VAR7;
    FUN4(VAR6);
    FUN5(&VAR2);
    return VAR7 - VAR10;
}