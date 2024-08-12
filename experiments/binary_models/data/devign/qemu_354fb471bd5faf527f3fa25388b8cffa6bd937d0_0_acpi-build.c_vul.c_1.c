static void FUN1(VAR1 *VAR2, uint64_t VAR3, uint64_t VAR4)
{
    VAR1 *VAR5 = FUN2(VAR6);
    uint64_t VAR7 = VAR3;
    int VAR8;
    FUN3(VAR2, VAR9);
    for (VAR8 = 0; VAR8 < VAR2->VAR10; VAR8++)
    {
        VAR11 *VAR12 = FUN4(VAR2, VAR8);
        if (VAR7 < VAR12->VAR13)
        {
            FUN5(VAR5, VAR7, VAR12->VAR13 - 1);
        }
        VAR7 = VAR12->VAR14 + 1;
    }
    if (VAR7 < VAR4)
    {
        FUN5(VAR5, VAR7, VAR4);
    }
    FUN6(VAR2, 0);
    for (VAR8 = 0; VAR8 < VAR5->VAR10; VAR8++)
    {
        FUN7(VAR2, FUN4(VAR5, VAR8));
    }
    FUN8(VAR5, false);
}