static int FUN1(VAR1 *VAR2, VAR3 *VAR4, VAR5 *VAR6)
{
    char *VAR7;
    char *VAR8 = VAR4->VAR9;
    VAR7 = FUN2(VAR2, VAR8);
    VAR6->VAR10 = FUN3(VAR7);
    FUN4(VAR7);
    if (!VAR6->VAR10)
    {
        return -1;
    }
    return 0;
}