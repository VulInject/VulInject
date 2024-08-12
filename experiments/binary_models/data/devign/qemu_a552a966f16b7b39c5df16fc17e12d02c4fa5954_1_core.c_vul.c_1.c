void FUN1(VAR1 *VAR2, int VAR3, VAR4 *VAR5, uint64_t VAR6, bool VAR7, bool VAR8)
{
    assert(!FUN2(VAR2));
    assert(VAR2->VAR9.VAR9 != NULL);
    VAR2->VAR6 = VAR6;
    VAR2->VAR3 = VAR3;
    VAR2->VAR5 = VAR5;
    VAR2->VAR10 = 0;
    VAR2->VAR11 = 0;
    VAR2->VAR7 = VAR7;
    VAR2->VAR8 = VAR8;
    FUN3(&VAR2->VAR9);
    FUN4(VAR2, VAR12);