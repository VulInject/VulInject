void FUN1(VAR1 *VAR2, uint32_t VAR3, uint32_t VAR4, int VAR5)
{
    int VAR6, VAR7 = FUN2(VAR2);
    uint32_t VAR8 = FUN3(VAR2);
    for (VAR6 = 0; VAR6 < VAR5 && VAR3 + VAR6 < VAR8; VAR4 >>= 8, ++VAR6)
    {
        uint8_t VAR9 = VAR2->VAR9[VAR3 + VAR6];
        uint8_t VAR10 = VAR2->VAR10[VAR3 + VAR6];
        assert(!(VAR9 & VAR10));
        VAR2->VAR11[VAR3 + VAR6] = (VAR2->VAR11[VAR3 + VAR6] & ~VAR9) | (VAR4 & VAR9);
        VAR2->VAR11[VAR3 + VAR6] &= ~(VAR4 & VAR10);
    }
    if (FUN4(VAR3, VAR5, VAR12, 24) || FUN4(VAR3, VAR5, VAR13, 4) || FUN4(VAR3, VAR5, VAR14, 4) || FUN5(VAR3, VAR5, VAR15))
        FUN6(VAR2);
    if (FUN5(VAR3, VAR5, VAR15))
        FUN7(VAR2, VAR7);
}