VAR1 *FUN1(const VAR2 *VAR3, int VAR4)
{
    VAR1 *VAR5 = FUN2((VAR6 **)VAR3->VAR7, VAR3->VAR8[0], VAR4, VAR3->VAR9, VAR3->VAR10, FUN3(VAR3));
    if (!VAR5)
        return NULL;
    if (FUN4(VAR5, VAR3) < 0)
    {
        VAR5->VAR11->VAR7[0] = NULL;
        FUN5(&VAR5);
    }
    return VAR5;
}