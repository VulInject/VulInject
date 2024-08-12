static int FUN1(VAR1 *VAR2, int VAR3, int VAR4)
{
    int VAR5 = VAR2->VAR6->VAR5;
    int VAR7, VAR8;
    if (VAR3 < 0 || VAR4 < 0)
        return 2;
    VAR7 = VAR3 >> VAR5;
    VAR8 = VAR4 >> VAR5;
    if (VAR7 >= VAR2->VAR6->VAR9 || VAR8 >= VAR2->VAR6->VAR10)
        return 2;
    return VAR2->VAR11[VAR8 * VAR2->VAR6->VAR9 + VAR7];
}