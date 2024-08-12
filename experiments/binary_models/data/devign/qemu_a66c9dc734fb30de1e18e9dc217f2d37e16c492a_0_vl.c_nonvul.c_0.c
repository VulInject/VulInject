static void FUN1(int VAR1, int VAR2, BlockInterfaceType VAR3, int VAR4, const char *VAR5)
{
    VAR6 *VAR7;
    VAR8 *VAR9;
    if (!VAR1 || FUN2(VAR3, VAR4))
    {
        return;
    }
    VAR7 = FUN3(VAR3, VAR4, NULL, VAR5);
    if (VAR2)
    {
        FUN4(VAR7, NULL);
    }
    VAR9 = FUN5(VAR7, VAR3);
    if (!VAR9)
    {
        FUN6(1);
    }
    VAR9->VAR10 = true;
}