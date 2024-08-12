VAR1 FUN1(uint64_t VAR2, uint64_t VAR3)
{
    uint64_t VAR4 = VAR2;
    VAR2 = (VAR5)(VAR2 - VAR3);
    if (FUN2(((~VAR4) ^ VAR2 ^ (-1UL)) & ((~VAR4) ^ VAR3) & (1UL << 31)))
    {
        FUN3(VAR6, VAR7);
    }
    return VAR2;
}