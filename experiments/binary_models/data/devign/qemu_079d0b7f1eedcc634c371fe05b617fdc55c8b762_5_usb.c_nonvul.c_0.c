struct VAR1 *FUN1(VAR2 *VAR3, int VAR4, int VAR5)
{
    struct VAR1 *VAR6;
    if (VAR3 == NULL)
    {
        return NULL;
    }
    VAR6 = (VAR4 == VAR7) ? VAR3->VAR8 : VAR3->VAR9;
    if (VAR5 == 0)
    {
        return &VAR3->VAR10;
    }
    assert(VAR4 == VAR7 || VAR4 == VAR11);
    assert(VAR5 > 0 && VAR5 <= VAR12);
    return VAR6 + VAR5 - 1;
}