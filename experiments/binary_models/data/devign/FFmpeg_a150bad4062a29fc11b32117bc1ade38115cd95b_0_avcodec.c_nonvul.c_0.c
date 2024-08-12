VAR1 *FUN1(const VAR2 *VAR3, int VAR4)
{
    VAR1 *VAR5 = FUN2(VAR3->VAR6, VAR3->VAR7, VAR4, VAR3->VAR8, VAR3->VAR9, VAR3->VAR10);
    if (!VAR5)
        return NULL;
    if (FUN3(VAR5, VAR3) < 0)
    {
        VAR5->VAR11->VAR6[0] = NULL;
        FUN4(&VAR5);
    }
    return VAR5;
}