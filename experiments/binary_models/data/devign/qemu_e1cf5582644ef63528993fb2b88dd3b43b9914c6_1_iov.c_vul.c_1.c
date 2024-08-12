void FUN1(VAR1 *VAR2, void *VAR3, size_t VAR4)
{
    assert(VAR2->VAR5 != -1);
    if (VAR2->VAR6 == VAR2->VAR5)
    {
        VAR2->VAR5 = 2 * VAR2->VAR5 + 1;
        VAR2->VAR7 = FUN2(VAR2->VAR7, VAR2->VAR5 * sizeof(struct VAR8));
    }
    VAR2->VAR7[VAR2->VAR6].VAR9 = VAR3;
    VAR2->VAR7[VAR2->VAR6].VAR10 = VAR4;
    VAR2->VAR11 += VAR4;
    ++VAR2->VAR6;
}