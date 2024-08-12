static bool FUN1(VAR1 *VAR2, unsigned int VAR3, unsigned int VAR4, unsigned int VAR5)
{
    uint64_t VAR6;
    unsigned VAR7, VAR8, VAR9, VAR10;
    int VAR11;
    assert(VAR3 < 2 && VAR4 < 64 && VAR5 < 64);
    VAR11 = 31 - FUN2((VAR3 << 6) | (~VAR4 & 0x3f));
    if (VAR11 < 1)
    {
        return false;
    }
    VAR7 = 1 << VAR11;
    VAR8 = VAR7 - 1;
    VAR9 = VAR4 & VAR8;
    VAR10 = VAR5 & VAR8;
    if (VAR9 == VAR8)
    {
        return false;
    }
    VAR6 = FUN3(VAR9 + 1);
    VAR6 = (VAR6 >> VAR10) | (VAR6 << (VAR7 - VAR10));
    VAR6 = FUN4(VAR6, VAR7);
    *VAR2 = VAR6;
    return true;
}