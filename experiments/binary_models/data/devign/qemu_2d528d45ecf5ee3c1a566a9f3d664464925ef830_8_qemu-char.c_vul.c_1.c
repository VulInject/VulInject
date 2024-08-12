static int FUN1(VAR1 *VAR2, int *VAR3, int VAR4)
{
    VAR5 *VAR6 = VAR2->VAR7;
    FUN2(VAR6->VAR8);
    if (VAR4)
    {
        VAR6->VAR8 = FUN3(VAR4 * sizeof(int));
        memcpy(VAR6->VAR8, VAR3, VAR4 * sizeof(int));
    }
    VAR6->VAR9 = VAR4;
    return 0;
}