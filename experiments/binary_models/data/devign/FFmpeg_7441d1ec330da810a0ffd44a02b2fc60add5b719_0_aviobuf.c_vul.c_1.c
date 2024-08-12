int FUN1(VAR1 *VAR2, VAR3 **VAR4)
{
    VAR5 *VAR6 = VAR2->VAR7;
    int VAR8;
    static const char VAR9[VAR10] = {0};
    int VAR11 = 0;
    if (!VAR2)
    {
        *VAR4 = NULL;
        return 0;
    }
    if (!VAR2->VAR12)
    {
        FUN2(VAR2, VAR9, sizeof(VAR9));
        VAR11 = VAR10;
    }
    FUN3(VAR2);
    *VAR4 = VAR6->VAR13;
    VAR8 = VAR6->VAR8;
    FUN4(VAR6);
    FUN4(VAR2);
    return VAR8 - VAR11;
}