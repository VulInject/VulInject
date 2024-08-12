static void FUN1(VAR1 *VAR2, void *VAR3)
{
    VAR4 *VAR5 = FUN2(VAR2);
    char *typename = FUN3(VAR5->VAR6);
    size_t VAR7 = FUN4(typename);
    int VAR8;
    for (VAR8 = 0; VAR8 < VAR2->VAR9; VAR8++)
    {
        VAR10 *VAR11 = FUN5(VAR2->VAR12 + VAR8 * VAR7);
        FUN6(VAR2, VAR11, VAR3);
    }
    if (VAR2->VAR13)
    {
        FUN7(VAR3, VAR2->VAR14, VAR2->VAR15, VAR2->VAR13);
    }
    FUN8(typename);