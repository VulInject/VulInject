FUN1(VAR1 *VAR2, uint64_t VAR3, uint64_t VAR4, VAR5 *VAR6, int VAR7)
{
    int VAR8;
    assert(FUN2(VAR3, VAR2->VAR9.VAR10));
    assert(FUN2(VAR4, VAR2->VAR9.VAR10));
    if (VAR2->VAR9.VAR11)
    {
        assert(VAR4 <= VAR2->VAR9.VAR11);
    }
    VAR8 = FUN3(VAR2, VAR3, VAR4);
    if (VAR8)
    {
        return VAR8;
    }
    return FUN4(VAR2->VAR12, VAR3, VAR4, VAR6, VAR7);
}