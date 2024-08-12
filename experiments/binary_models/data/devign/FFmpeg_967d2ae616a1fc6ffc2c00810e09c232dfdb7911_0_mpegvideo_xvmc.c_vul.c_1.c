void FUN1(VAR1 *VAR2)
{
    struct VAR3 *VAR4 = (struct VAR3 *)VAR2->VAR5.VAR6[2];
    assert(VAR4);
    if (!VAR4 || VAR4->VAR7 != VAR8)
    {
        assert(0);
        return;
    }
    VAR2->VAR9 = (VAR10 *)(VAR4->VAR11 + VAR4->VAR12 * 64);
}