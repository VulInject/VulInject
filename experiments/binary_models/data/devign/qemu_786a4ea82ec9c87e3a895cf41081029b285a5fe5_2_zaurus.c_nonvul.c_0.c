static inline void FUN1(VAR1 *VAR2)
{
    uint32_t VAR3, VAR4;
    int VAR5;
    VAR3 = VAR2->VAR6 & VAR2->VAR7;
    for (VAR4 = VAR2->VAR8 ^ VAR3; VAR4; VAR4 ^= 1 << VAR5)
    {
        VAR5 = FUN2(VAR4);
        FUN3(VAR2->VAR9[VAR5], (VAR3 >> VAR5) & 1);
    }
    VAR2->VAR8 = VAR3;
}