static void FUN1(void *VAR1, target_phys_addr_t VAR2, uint32_t VAR3)
{
    VAR4 *VAR5 = VAR1;
    uint32_t VAR6;
    uint16_t VAR7;
    FUN2("" VAR8 "", VAR2, VAR3);
    assert((VAR2 & 0x3) == 0);
    VAR6 = FUN3(VAR5, VAR2);
    if (VAR6 == 0xffffffff)
    {
        return;
    }
    VAR5->VAR9->VAR10 = (VAR6) | (1u << 31);
    FUN4(VAR5->VAR9->VAR11, VAR5->VAR9->VAR10, VAR3, 4);
    VAR7 = FUN5(VAR5->VAR12.VAR13 + VAR14);
    VAR7 &= ~(VAR15 | VAR16);
    FUN6(VAR5->VAR12.VAR13 + VAR14, VAR7);
}