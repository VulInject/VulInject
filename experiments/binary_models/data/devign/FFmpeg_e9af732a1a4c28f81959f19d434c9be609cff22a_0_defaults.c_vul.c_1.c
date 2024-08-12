VAR1 *FUN1(VAR2 *VAR3, int VAR4, int VAR5)
{
    VAR1 *VAR6 = NULL;
    int VAR7[8];
    VAR8 *VAR9[8];
    int VAR10 = FUN2(VAR3->VAR11);
    if (FUN3(VAR9, VAR7, VAR10, VAR5, VAR3->VAR12, 16) < 0)
        return NULL;
    VAR6 = FUN4(VAR9, VAR7, VAR4, VAR5, VAR3->VAR12, VAR3->VAR11, VAR3->VAR13);
    if (!VAR6)
    {
        FUN5(VAR9[0]);
        return NULL;
    }
    return VAR6;
}