static bool FUN1(VAR1 *VAR2, const VAR3 *VAR4, int VAR5, VAR3 *VAR6, int *VAR7)
{
    uint32_t VAR8;
    if (VAR5 != 4)
    {
        return false;
    }
    VAR8 = (((VAR9)VAR4[1]) << 24) + (((VAR9)VAR4[2]) << 16) + (((VAR9)VAR4[3]) << 8) + VAR4[4];
    VAR2->VAR10 = VAR8 - (FUN2(VAR11) / VAR12);
    return true;
}