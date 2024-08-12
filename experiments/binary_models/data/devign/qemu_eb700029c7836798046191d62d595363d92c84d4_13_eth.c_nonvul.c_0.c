FUN1(const void *VAR1, size_t VAR2, void *VAR3, size_t VAR4, size_t VAR5, size_t VAR6, bool VAR7)
{
    const struct iovec VAR8 = {.VAR9 = (void *)VAR1, .VAR10 = VAR2};
    if (FUN2(&VAR8, 1, VAR2) == VAR11)
    {
        uint16_t VAR12;
        struct VAR13 *VAR14 = (struct VAR13 *)VAR3;
        uint16_t VAR15 = VAR6 / VAR16;
        uint16_t VAR17;
        assert(VAR6 % VAR16 == 0);
        assert((VAR15 & ~VAR18) == 0);
        VAR12 = FUN3(VAR14->VAR19) & ~(VAR18 | VAR20);
        VAR17 = VAR15 | VAR12 | (VAR7 ? VAR20 : 0);
        VAR14->VAR19 = FUN4(VAR17);
        VAR14->VAR21 = FUN4(VAR5 + VAR4);
    }
}