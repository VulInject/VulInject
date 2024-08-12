VAR1 *FUN1(int VAR2)
{
    VAR1 *VAR3;
    if (VAR2 <= 0 || VAR2 > VAR4 / sizeof(double))
        return NULL;
    VAR3 = FUN2(sizeof(VAR1));
    if (!VAR3)
        return NULL;
    VAR3->VAR2 = VAR2;
    VAR3->VAR5 = FUN2(sizeof(double) * VAR2);
    if (!VAR3->VAR5)
        FUN3(&VAR3);
    return VAR3;
}