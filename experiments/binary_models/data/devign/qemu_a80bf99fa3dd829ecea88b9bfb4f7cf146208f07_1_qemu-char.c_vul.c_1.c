static int FUN1(void *VAR1)
{
    VAR2 *VAR3 = VAR1;
    VAR4 *VAR5 = VAR3->VAR1;
    if ((VAR5->VAR6 - VAR5->VAR7) < VAR8)
        return 1;
    if (VAR5->VAR9[VAR3->VAR10])
        return VAR5->VAR9[VAR3->VAR10](VAR5->VAR11[VAR3->VAR10]);
    return 0;
}