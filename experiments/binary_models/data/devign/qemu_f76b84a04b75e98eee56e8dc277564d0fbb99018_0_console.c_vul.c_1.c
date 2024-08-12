VAR1 *FUN1(int VAR2, int VAR3, pixman_format_code_t VAR4, int VAR5, uint64_t VAR6)
{
    VAR1 *VAR7;
    hwaddr VAR8;
    void *VAR9;
    if (VAR5 == 0)
    {
        VAR5 = VAR2 * FUN2(VAR4) / 8;
    }
    VAR8 = VAR5 * VAR3;
    VAR9 = FUN3(VAR6, &VAR8, 0);
    if (VAR8 != VAR5 * VAR3)
    {
        FUN4(VAR9, VAR8, 0, 0);
        return NULL;
    }
    VAR7 = FUN5(VAR2, VAR3, VAR4, VAR5, VAR9);
    FUN6(VAR7->VAR10, VAR11, NULL);
    return VAR7;
}