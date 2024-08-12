static void FUN1(VAR1 *VAR2, int VAR3, target_ulong VAR4)
{
    uint32_t VAR5;
    uint32_t VAR6, VAR7, VAR8, VAR9;
    uint32_t VAR10 = ((1 << VAR11) | (1 << VAR12) | (1 << VAR13) | (1 << VAR14) | (1 << VAR15) | (3 << VAR16));
    VAR6 = (VAR4 >> VAR17) & 0xf;
    VAR7 = (VAR4 >> VAR18) & 0x1;
    VAR8 = VAR4 & 0xff;
    VAR9 = (VAR4 >> VAR19) & 0x3;
    VAR5 = VAR6 << VAR14;
    VAR5 |= VAR7 << VAR15;
    VAR5 |= VAR9 << VAR16;
    VAR2->VAR20 &= ~VAR10;
    VAR2->VAR20 |= VAR5;
    VAR2->VAR21 &= ~0xff;
    VAR2->VAR21 = VAR8;
    FUN2(VAR2);
}