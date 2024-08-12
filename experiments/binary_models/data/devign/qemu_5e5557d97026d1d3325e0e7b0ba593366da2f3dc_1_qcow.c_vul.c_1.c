static int FUN1(VAR1 *VAR2)
{
    VAR3 *VAR4 = VAR2->VAR5;
    uint32_t VAR6 = VAR4->VAR7 * sizeof(VAR8);
    int VAR9;
    memset(VAR4->VAR10, 0, VAR6);
    if (FUN2(VAR2->VAR11, VAR4->VAR12, VAR4->VAR10, VAR6) < 0)
        return -1;
    VAR9 = FUN3(VAR2->VAR11, VAR4->VAR12 + VAR6);
    if (VAR9 < 0)
        return VAR9;
    memset(VAR4->VAR13, 0, VAR4->VAR14 * VAR15 * sizeof(VAR8));
    memset(VAR4->VAR16, 0, VAR15 * sizeof(VAR8));
    memset(VAR4->VAR17, 0, VAR15 * sizeof(VAR18));
    return 0;
}