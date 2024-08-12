void FUN1(VAR1 *VAR2, uint32_t VAR3)
{
    assert(!(VAR3 & (VAR3 - 1)));
    assert(VAR3 >= VAR4);
    assert(VAR3 <= VAR5);
    VAR2->VAR3 = VAR3;
    FUN2(&VAR2->VAR6, FUN3(VAR2), &VAR7, VAR2, "", VAR2->VAR3);
}