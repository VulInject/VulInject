static VAR1 *FUN1(void *VAR2, int VAR3)
{
    VAR4 *VAR5 = (VAR4 *)VAR2;
    VAR6 *VAR7 = VAR5->VAR8->VAR9;
    VAR10 *VAR11 = VAR5->VAR11;
    if (VAR7->VAR12 < VAR11->VAR13)
    {
        VAR7->VAR12++;
        return FUN2((VAR14 *)VAR7->VAR15[VAR7->VAR12 - 1], sizeof(*VAR11->VAR16), NULL, 0, 0);
    }
    return NULL;
}