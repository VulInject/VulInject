void FUN1(struct VAR1 *VAR2)
{
    int VAR3;
    if (!VAR2)
    {
        return;
    }
    memset(&VAR2->VAR4, 0, sizeof(VAR2->VAR4));
    assert(VAR2->VAR5);
    VAR2->VAR6 = 0;
    VAR2->VAR7 = 0;
    assert(VAR2->VAR8);
    for (VAR3 = 0; VAR3 < VAR2->VAR9; VAR3++)
    {
        assert(VAR2->VAR8[VAR3].VAR10);
        FUN2(VAR2->VAR8[VAR3].VAR10, VAR2->VAR8[VAR3].VAR11, false, VAR2->VAR8[VAR3].VAR11);
    }
    VAR2->VAR9 = 0;
    VAR2->VAR12 = 0;
    VAR2->VAR13 = 0;
}