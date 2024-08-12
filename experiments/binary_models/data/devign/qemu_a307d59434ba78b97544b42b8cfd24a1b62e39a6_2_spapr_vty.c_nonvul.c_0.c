static void FUN1(void *VAR1, const VAR2 *VAR3, int VAR4)
{
    VAR5 *VAR6 = (VAR5 *)VAR1;
    int VAR7;
    if ((VAR6->VAR8 == VAR6->VAR9) && VAR4)
    {
        FUN2(FUN3(&VAR6->VAR10));
    }
    for (VAR7 = 0; VAR7 < VAR4; VAR7++)
    {
        assert((VAR6->VAR8 - VAR6->VAR9) < VAR11);
        VAR6->VAR3[VAR6->VAR8++ % VAR11] = VAR3[VAR7];
    }
}