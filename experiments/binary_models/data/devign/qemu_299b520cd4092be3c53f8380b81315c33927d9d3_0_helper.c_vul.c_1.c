static inline int FUN1(VAR1 *VAR2, uint64_t VAR3, uint64_t VAR4, VAR5 *VAR6, int VAR7)
{
    uint64_t VAR8;
    switch ((VAR2->VAR9 >> 61) & 3)
    {
    default:
    case 0x0:
        VAR8 = 0xffffffffffffe000ULL;
        break;
    case 0x1:
        VAR8 = 0xffffffffffff0000ULL;
        break;
    case 0x2:
        VAR8 = 0xfffffffffff80000ULL;
        break;
    case 0x3:
        VAR8 = 0xffffffffffc00000ULL;
        break;
    }
    if (FUN2(VAR2->VAR9) && ((VAR7 && FUN3(0, VAR2->VAR10, 0x1fff)) || FUN4(VAR2->VAR9) || FUN3(VAR4, VAR2->VAR10, 0x1fff)) && FUN3(VAR3, VAR2->VAR10, VAR8))
    {
        *VAR6 = ((VAR2->VAR9 & VAR8) | (VAR3 & ~VAR8)) & 0x1ffffffe000ULL;
        return 1;
    }
    return 0;
}