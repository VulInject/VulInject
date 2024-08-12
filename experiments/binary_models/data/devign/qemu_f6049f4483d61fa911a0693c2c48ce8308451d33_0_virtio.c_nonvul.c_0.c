void FUN1(VAR1 *VAR2, int VAR3, int VAR4)
{
    if (!!VAR4 != !!VAR2->VAR5[VAR3].VAR6.VAR4 || VAR4 > VAR7 || VAR4 < 0)
    {
        return;
    }
    VAR2->VAR5[VAR3].VAR6.VAR4 = VAR4;
    FUN2(&VAR2->VAR5[VAR3]);
}