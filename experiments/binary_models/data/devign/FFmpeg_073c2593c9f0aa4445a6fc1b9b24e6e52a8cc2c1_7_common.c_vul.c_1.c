int FUN1(VAR1 *VAR2, int VAR3, int VAR4, const void *VAR5, int VAR6, int VAR7, const void *VAR8, int VAR9, int VAR10)
{
    VAR2->VAR5 = VAR3;
    VAR2->VAR11 = NULL;
    VAR2->VAR12 = 0;
    VAR2->VAR13 = 0;
    FUN2("", VAR4);
    if (FUN3(VAR2, VAR3, VAR4, VAR5, VAR6, VAR7, VAR8, VAR9, VAR10, 0, 0) < 0)
    {
        FUN4(VAR2->VAR11);
        return -1;
    }
    return 0;
}