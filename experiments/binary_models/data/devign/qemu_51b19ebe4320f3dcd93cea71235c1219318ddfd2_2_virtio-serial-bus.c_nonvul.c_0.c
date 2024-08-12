static VAR1 FUN1(VAR2 *VAR3, void *VAR4, size_t VAR5)
{
    VAR6 *VAR7;
    VAR8 *VAR9;
    VAR9 = VAR3->VAR10;
    if (!FUN2(VAR9))
    {
        return 0;
    }
    VAR7 = FUN3(VAR9, sizeof(VAR6));
    if (!VAR7)
    {
        return 0;
    }
    FUN4(VAR7->VAR11, VAR7->VAR12, 0, VAR4, VAR5);
    FUN5(VAR9, VAR7, VAR5);
    FUN6(FUN7(VAR3), VAR9);
    FUN8(VAR7);
    return VAR5;
}