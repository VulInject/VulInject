int FUN1(VAR1 *VAR2, int VAR3, int64_t VAR4, int64_t VAR5, const char *VAR6)
{
    VAR7 *VAR8 = NULL;
    int VAR9;
    for (VAR9 = 0; VAR9 < VAR2->VAR10; VAR9++)
        if (VAR2->VAR11[VAR9]->VAR3 == VAR3)
            VAR8 = VAR2->VAR11[VAR9];
    if (!VAR8)
    {
        VAR8 = FUN2(sizeof(VAR7));
        if (!VAR8)
            return FUN3(VAR12);
        FUN4(&VAR2->VAR11, &VAR2->VAR10, VAR8);
    }
    if (VAR8->VAR6)
        FUN5(VAR8->VAR6);
    VAR8->VAR6 = FUN6(VAR6);
    VAR8->VAR3 = VAR3;
    VAR8->VAR4 = VAR4;
    VAR8->VAR5 = VAR5;
    return 0;
}