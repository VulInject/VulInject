FUN1(VAR1 *VAR2, uint32_t VAR3, VAR4 *VAR5)
{
    int VAR6 = 0x80, read = 1, VAR7 = 1, VAR8 = 0;
    uint64_t VAR9;
    if (VAR3 <= 0)
        return VAR10;
    VAR9 = VAR2[0];
    while (read <= 8 && !(VAR9 & VAR6))
    {
        read++;
        VAR6 >>= 1;
    }
    if (read > 8)
        return VAR10;
    if ((VAR9 &= (VAR6 - 1)) == VAR6 - 1)
        VAR8++;
    if (VAR3 < read)
        return VAR10;
    while (VAR7 < read)
    {
        if (VAR2[VAR7] == 0xff)
            VAR8++;
        VAR9 = (VAR9 << 8) | VAR2[VAR7];
        VAR7++;
    }
    if (read == VAR8)
        *VAR5 = (VAR4)-1;
    else
        *VAR5 = VAR9;
    return read;
}