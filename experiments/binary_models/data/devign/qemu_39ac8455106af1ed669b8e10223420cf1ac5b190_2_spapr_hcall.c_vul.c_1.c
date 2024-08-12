void FUN1(target_ulong VAR1, spapr_hcall_fn VAR2)
{
    spapr_hcall_fn VAR3;
    assert(VAR1 <= VAR4);
    assert((VAR1 & 0x3) == 0);
    VAR3 = VAR5[VAR1 / 4];
    assert(!VAR3 || (VAR2 == VAR3));
    VAR5[VAR1 / 4] = VAR2;
}