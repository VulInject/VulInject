static int FUN1(VAR1 *VAR2, const VAR3 *VAR4, uint64_t VAR5)
{
    if (FUN2(VAR2, VAR6))
    {
        VAR5 &= ~((7 << 19) | (3 << 14) | (0xf << 3));
    }
    else
    {
        VAR5 &= 7;
    }
    VAR2->VAR7.VAR8 = VAR5;
    VAR2->VAR7.VAR9 = ~(((VAR10)0xffffffffu) >> VAR5);
    VAR2->VAR7.VAR11 = ~((VAR10)0x3fffu >> VAR5);
    return 0;
}