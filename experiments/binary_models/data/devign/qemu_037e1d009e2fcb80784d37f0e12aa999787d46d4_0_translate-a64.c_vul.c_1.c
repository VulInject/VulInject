static void FUN1(VAR1 *VAR2, uint32_t VAR3)
{
    unsigned int VAR4, VAR5;
    uint64_t VAR6;
    int64_t VAR7;
    VAR4 = FUN2(VAR3, 31, 1);
    VAR7 = ((VAR8)FUN3(VAR3, 5, 19) << 2) | FUN2(VAR3, 29, 2);
    VAR5 = FUN2(VAR3, 0, 5);
    VAR6 = VAR2->VAR9 - 4;
    if (VAR4)
    {
        VAR6 &= ~0xfff;
        VAR7 <<= 12;
    }
    FUN4(FUN5(VAR2, VAR5), VAR6 + VAR7);
}