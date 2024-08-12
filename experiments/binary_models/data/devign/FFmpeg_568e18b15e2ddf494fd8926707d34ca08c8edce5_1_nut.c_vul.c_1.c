static VAR1 FUN1(VAR2 *VAR3)
{
    uint64_t VAR4 = 0;
    int VAR5 = FUN2(VAR3);
    if (VAR5 > 8)
        return VAR6;
    while (VAR5--)
        VAR4 = (VAR4 << 8) + FUN3(VAR3);
    return VAR4;
}