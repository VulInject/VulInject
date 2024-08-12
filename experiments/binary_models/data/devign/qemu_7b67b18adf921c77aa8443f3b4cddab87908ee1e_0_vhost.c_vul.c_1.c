static void FUN1(struct VAR1 *VAR2, uint64_t VAR3, uint64_t VAR4, uint64_t VAR5, uint64_t VAR6)
{
    uint64_t VAR7 = FUN2(VAR3, VAR5);
    uint64_t VAR8 = FUN3(VAR4, VAR6);
    VAR9 *VAR10 = VAR2->VAR11 + VAR7 / VAR12;
    VAR9 *VAR13 = VAR2->VAR11 + VAR8 / VAR12 + 1;
    uint64_t VAR14 = (VAR7 / VAR12) * VAR12;
    assert(VAR8 / VAR12 < VAR2->VAR15);
    assert(VAR7 / VAR12 < VAR2->VAR15);
    if (VAR8 < VAR7)
    {
        return;
    }
    for (; VAR10 < VAR13; ++VAR10)
    {
        vhost_log_chunk_t VAR11;
        int VAR16;
        if (!*VAR10)
        {
            VAR14 += VAR12;
            continue;
        }
        VAR11 = FUN4(VAR10, 0);
        while ((VAR16 = sizeof(VAR11) > sizeof(int) ? FUN5(VAR11) : FUN6(VAR11)))
        {
            VAR16 -= 1;
            FUN7(VAR14 + VAR16 * VAR17);
            VAR11 &= ~(0x1ull << VAR16);
        }
        VAR14 += VAR12;
    }
}