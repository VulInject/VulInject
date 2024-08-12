static VAR1 FUN1(VAR2 *VAR3, uint32_t VAR4, int VAR5)
{
    VAR6 *VAR7 = FUN2(VAR6, VAR3, VAR3);
    uint32_t VAR8 = 0, VAR9 = 0, VAR10 = 0, VAR11;
    memcpy(&VAR8, VAR7->VAR12 + VAR4, VAR5);
    VAR8 = FUN3(VAR8);
    if (VAR8)
    {
        VAR9 = FUN4(VAR3, VAR4, VAR5);
    }
    if (~VAR8 & (0xffffffffU >> (32 - VAR5 * 8)))
    {
        ssize_t VAR13;
        VAR13 = pread(VAR7->VAR14, &VAR10, VAR5, VAR7->VAR15 + VAR4);
        if (VAR13 != VAR5)
        {
            FUN5("", VAR16, VAR7->VAR17.VAR18, VAR7->VAR17.VAR19, VAR7->VAR17.VAR20, VAR7->VAR17.VAR21, VAR4, VAR5);
            return -VAR22;
        }
        VAR10 = FUN3(VAR10);
    }
    VAR11 = (VAR9 & VAR8) | (VAR10 & ~VAR8);
    FUN6("", VAR16, VAR7->VAR17.VAR18, VAR7->VAR17.VAR19, VAR7->VAR17.VAR20, VAR7->VAR17.VAR21, VAR4, VAR5, VAR11);
    return VAR11;
}