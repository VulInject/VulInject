static VAR1 FUN1(VAR2 *VAR3, const VAR4 *VAR5, size_t VAR6)
{
    struct VAR7 *VAR8 = FUN2(VAR3);
    unsigned int VAR9 = VAR8->VAR10 * (0x800 / 4);
    if (!(VAR5[0] & 0x80) && memcmp(&VAR8->VAR11.VAR12.VAR13[0], VAR5, 6))
        return VAR6;
    if (VAR8->VAR14[VAR9 + VAR15] & VAR16)
    {
        FUN3(FUN4("", VAR8->VAR14[VAR15]));
        FUN3(FUN4("", VAR17, VAR6, VAR9));
        memcpy(&VAR8->VAR14[VAR9 + VAR18], VAR5, VAR6);
        VAR8->VAR14[VAR9 + VAR15] |= VAR16;
        if (VAR8->VAR14[VAR15] & VAR19)
        {
            FUN5(VAR8);
            VAR8->VAR10 ^= VAR8->VAR20;
            return VAR6;