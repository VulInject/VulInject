static VAR1 FUN1(void *VAR2, target_phys_addr_t VAR3)
{
    VAR4 *VAR5 = VAR2;
    uint32_t VAR6;
    uint16_t VAR7;
    FUN2("" VAR8 "", VAR3);
    assert((VAR3 & 0x1) == 0);
    VAR6 = FUN3(VAR5, VAR3);
    if (VAR6 == 0xffffffff)
    {
        return 0xffff;
    }
    VAR5->VAR9->VAR10 = (VAR6) | (1u << 31);
    VAR7 = FUN4(VAR5->VAR11.VAR12 + VAR13);
    VAR7 &= ~(VAR14 | VAR15);
    FUN5(VAR5->VAR11.VAR12 + VAR13, VAR7);
    return FUN6(VAR5->VAR9->VAR16, VAR5->VAR9->VAR10, 2);
}