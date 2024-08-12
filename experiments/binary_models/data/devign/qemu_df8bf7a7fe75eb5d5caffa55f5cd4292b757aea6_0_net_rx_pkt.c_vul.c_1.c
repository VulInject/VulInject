void FUN1(struct VAR1 *VAR2, const struct VAR3 *VAR4, int VAR5, size_t VAR6, bool VAR7, uint16_t VAR8)
{
    uint16_t VAR9 = 0;
    uint16_t VAR10 = VAR6;
    assert(VAR2);
    VAR2->VAR11 = false;
    if (VAR7)
    {
        VAR2->VAR11 = FUN2(VAR4, VAR5, VAR6, VAR8, VAR2->VAR12, &VAR10, &VAR9);
    }
    VAR2->VAR9 = VAR9;
    FUN3(VAR2, VAR4, VAR5, VAR10);
}