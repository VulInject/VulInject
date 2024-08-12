static void FUN1(struct VAR1 *VAR2, VAR3 *VAR4, uint64_t VAR5, uint64_t VAR6, uint64_t VAR7, uint64_t VAR8)
{
    uint64_t VAR9 = FUN2(VAR5, VAR7);
    uint64_t VAR10 = FUN3(VAR6, VAR8);
    VAR11 *VAR12 = VAR2->VAR13 + VAR9 / VAR14;
    VAR11 *VAR15 = VAR2->VAR13 + VAR10 / VAR14 + 1;
    uint64_t VAR16 = (VAR9 / VAR14) * VAR14;
    if (VAR10 < VAR9)
    {
        return;
    }
    assert(VAR10 / VAR14 < VAR2->VAR17);
    assert(VAR9 / VAR14 < VAR2->VAR17);
    for (; VAR12 < VAR15; ++VAR12)
    {
        vhost_log_chunk_t VAR13;
        int VAR18;
        if (!*VAR12)
        {
            VAR16 += VAR14;
            continue;
        }
        VAR13 = FUN4(VAR12, 0);
        while ((VAR18 = sizeof(VAR13) > sizeof(int) ? FUN5(VAR13) : FUN6(VAR13)))
        {
            ram_addr_t VAR19;
            VAR18 -= 1;
            VAR19 = VAR4->VAR20 + VAR18 * VAR21;
            FUN7(VAR4->VAR22, VAR19, VAR21);
            VAR13 &= ~(0x1ull << VAR18);
        }
        VAR16 += VAR14;
    }
}