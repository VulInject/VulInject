bool FUN1(struct VAR1 *VAR2, hwaddr VAR3, size_t VAR4)
{
    hwaddr VAR5 = 0;
    struct VAR6 *VAR7;
    assert(VAR2);
    assert(VAR2->VAR8 > VAR2->VAR9);
    if (!VAR4)
    {
        return true;
    }
    VAR7 = &VAR2->VAR10[VAR2->VAR9];
    VAR5 = VAR4;
    VAR7->VAR11 = FUN2(VAR3, &VAR5, false);
    if ((VAR7->VAR11 != NULL) && (VAR4 == VAR5))
    {
        VAR7->VAR12 = VAR5;
        VAR2->VAR9++;
        return true;
    }
    else
    {
        return false;
    }
}