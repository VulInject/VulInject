VAR1 *FUN1(uint64_t VAR2, int VAR3)
{
    VAR1 *VAR4 = FUN2(sizeof(struct VAR1));
    unsigned VAR5;
    assert(VAR3 >= 0 && VAR3 < 64);
    VAR2 = (VAR2 + (1ULL << VAR3) - 1) >> VAR3;
    assert(VAR2 <= ((VAR6)1 << VAR7));
    VAR4->VAR2 = VAR2;
    VAR4->VAR3 = VAR3;
    for (VAR5 = VAR8; VAR5-- > 0;)
    {
        VAR2 = FUN3((VAR2 + VAR9 - 1) >> VAR10, 1);
        VAR4->VAR11[VAR5] = FUN2(VAR2 * sizeof(unsigned long));
    }
    assert(VAR2 == 1);
    VAR4->VAR11[0][0] |= 1UL << (VAR9 - 1);
    return VAR4;
}