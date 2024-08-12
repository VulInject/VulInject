void FUN1(target_ulong VAR1, spapr_hcall_fn VAR2)
{
    VAR3 *VAR4;
    if (VAR1 <= VAR5)
    {
        assert((VAR1 & 0x3) == 0);
        VAR4 = &VAR6[VAR1 / 4];
    }
    else
    {
        assert((VAR1 >= VAR7) && (VAR1 <= VAR8));
        VAR4 = &VAR9[VAR1 - VAR7];
    }
    assert(!(*VAR4));
    *VAR4 = VAR2;
}