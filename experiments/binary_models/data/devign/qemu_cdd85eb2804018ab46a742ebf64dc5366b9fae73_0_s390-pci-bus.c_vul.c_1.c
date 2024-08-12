static void FUN1(void *VAR1, hwaddr VAR2, uint64_t VAR3, unsigned int VAR4)
{
    VAR5 *VAR6;
    uint32_t VAR7;
    uint32_t VAR8 = VAR3 >> VAR9;
    uint32_t VAR10 = VAR3 & VAR11;
    uint64_t VAR12;
    uint32_t VAR13;
    uint32_t VAR14 = 0;
    FUN2("" VAR15 "", VAR3, VAR8, VAR10);
    VAR6 = FUN3(VAR8);
    if (!VAR6)
    {
        VAR14 |= (VAR10 << VAR16);
        FUN4(VAR17, 0, VAR8, VAR2, VAR14);
        return;
    }
    if (VAR6->VAR18 != VAR19)
    {
        return;
    }
    VAR12 = VAR6->VAR20.VAR21.VAR22;
    VAR13 = VAR6->VAR20.VAR21.VAR23;
    FUN5(VAR6->VAR20.VAR21.VAR24 + (VAR12 + VAR10) / 8, 0x80 >> ((VAR12 + VAR10) % 8));
    if (!FUN5(VAR6->VAR20.VAR21.VAR25 + VAR13 / 8, 0x80 >> (VAR13 % 8)))
    {
        VAR7 = (VAR6->VAR26 << 27) | VAR27;
        FUN6(0, 0, 0, VAR7);
    }
}