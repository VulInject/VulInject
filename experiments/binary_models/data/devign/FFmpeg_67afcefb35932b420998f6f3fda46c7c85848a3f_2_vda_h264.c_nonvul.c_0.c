static int FUN1(VAR1 *VAR2, const VAR3 *VAR4, uint32_t VAR5)
{
    VAR6 *VAR7 = VAR2->VAR8->VAR9;
    void *VAR10;
    VAR10 = FUN2(VAR7->VAR11, &VAR7->VAR12, VAR7->VAR13 + VAR5 + 4);
    if (!VAR10)
        return FUN3(VAR14);
    VAR7->VAR11 = VAR10;
    FUN4(VAR7->VAR11 + VAR7->VAR13, VAR5);
    memcpy(VAR7->VAR11 + VAR7->VAR13 + 4, VAR4, VAR5);
    VAR7->VAR13 += VAR5 + 4;
    return 0;
}