static int FUN1(VAR1 *VAR2, void *VAR3, int VAR4, int VAR5)
{
    int VAR6;
    VAR7 *VAR8 = VAR2->VAR9;
    VAR10 *VAR11 = ((VAR10 *)VAR3) + VAR8->VAR12 * VAR4;
    for (VAR6 = 0; VAR6 < VAR8->VAR12; VAR6++)
        FUN2(VAR2, &VAR11[VAR6]);
    return 0;
}