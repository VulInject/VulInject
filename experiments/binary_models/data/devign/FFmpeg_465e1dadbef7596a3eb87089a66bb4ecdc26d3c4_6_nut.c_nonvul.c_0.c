static VAR1 FUN1(VAR2 *VAR3)
{
    uint64_t VAR4 = 0;
    for (;;)
    {
        int VAR5 = FUN2(VAR3);
        if (VAR5 & 0x80)
            VAR4 = (VAR4 << 7) + VAR5 - 0x80;
        else
            return (VAR4 << 7) + VAR5;
    }
    return -1;
}