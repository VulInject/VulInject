static void FUN1(VAR1 *VAR2, const VAR3 *VAR4, uint64_t VAR5)
{
    int VAR6 = FUN2(VAR5, 0, 3);
    if (FUN3(VAR2, VAR7) && (VAR5 & (1 << 31)))
    {
        VAR5 &= ~((7 << 19) | (3 << 14) | (0xf << 3));
    }
    else
    {
        VAR5 &= 7;
    }
    FUN4(VAR2, VAR4, VAR5);
    VAR2->VAR8.VAR9 = ~(((VAR10)0xffffffffu) >> VAR6);
    VAR2->VAR8.VAR11 = ~((VAR10)0x3fffu >> VAR6);
}