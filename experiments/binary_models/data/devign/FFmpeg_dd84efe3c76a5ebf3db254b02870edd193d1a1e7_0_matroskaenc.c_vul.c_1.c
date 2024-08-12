static int FUN1(const VAR1 *VAR2)
{
    int VAR3, VAR4, VAR5, VAR6, VAR7, VAR8, VAR9, VAR10;
    uint64_t VAR11, VAR12;
    if (sscanf(VAR2, "", &VAR3, &VAR4, &VAR5, &VAR6, &VAR7, &VAR8, &VAR9, &VAR10) != 8)
        return 0;
    VAR11 = 3600000 * VAR3 + 60000 * VAR4 + 1000 * VAR5 + 10 * VAR6;
    VAR12 = 3600000 * VAR7 + 60000 * VAR8 + 1000 * VAR9 + 10 * VAR10;
    return VAR12 - VAR11;
}