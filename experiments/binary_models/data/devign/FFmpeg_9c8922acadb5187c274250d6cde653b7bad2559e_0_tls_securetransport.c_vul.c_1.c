static int FUN1(VAR1 *VAR2, VAR3 *VAR4, int VAR5)
{
    VAR6 *VAR7 = VAR2->VAR8;
    size_t VAR9 = 0;
    int VAR10 = FUN2(VAR7->VAR11, VAR4, VAR5, &VAR9);
    VAR10 = FUN3(VAR10, VAR9);
    if (VAR10 > 0)
        return VAR10;
    if (VAR10 == 0)
        return VAR12;
    return FUN4(VAR2, VAR10);
}