static char *FUN1(VAR1 *VAR2, char *VAR3, int VAR4, int VAR5)
{
    VAR6 *VAR7;
    assert(VAR5 >= 0 && VAR5 < VAR2->VAR8);
    VAR7 = &VAR2->VAR9[VAR5];
    if (VAR5 < VAR2->VAR10)
    {
        FUN2(VAR3, VAR4, VAR7->VAR11);
    }
    else
    {
        if (VAR7->VAR12)
            snprintf(VAR3, VAR4, "", VAR5 - VAR2->VAR10);
        else
            snprintf(VAR3, VAR4, "", VAR5 - VAR2->VAR10);
    }
    return VAR3;
}