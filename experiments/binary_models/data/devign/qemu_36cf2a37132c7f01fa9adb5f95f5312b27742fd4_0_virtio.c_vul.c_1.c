void FUN1(struct VAR1 *VAR2, VAR3 *VAR4, size_t VAR5, int VAR6)
{
    unsigned int VAR7;
    hwaddr VAR8;
    for (VAR7 = 0; VAR7 < VAR5; VAR7++)
    {
        VAR8 = VAR2[VAR7].VAR9;
        VAR2[VAR7].VAR10 = FUN2(VAR4[VAR7], &VAR8, VAR6);
        if (VAR2[VAR7].VAR10 == NULL || VAR8 != VAR2[VAR7].VAR9)
        {
            FUN3("")