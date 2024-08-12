static int FUN1(VAR1 *VAR2, int64_t VAR3, VAR4 *VAR5)
{
    int64_t VAR6 = FUN2(VAR2, VAR3, VAR7);
    uint8_t VAR8[4];
    unsigned VAR9;
    MPADecodeHeader VAR10;
    if (VAR6 < 0)
        return VAR11;
    VAR6 = FUN3(VAR2, &VAR8[0], 4);
    if (VAR6 < 0)
        return VAR11;
    VAR9 = FUN4(&VAR8[0]);
    if (FUN5(VAR9) < 0)
        return VAR12;
    if (FUN6(&VAR10, VAR9) == 1)
        return VAR12;
    if (VAR5)
        *VAR5 = VAR9;
    return VAR10.VAR13;
}