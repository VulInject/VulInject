void FUN1(VAR1 **VAR2)
{
    int VAR3;
    VAR1 *VAR4 = *VAR2;
    if (!VAR4)
        return;
    for (VAR3 = 0; VAR3 < VAR4->VAR5 * VAR4->VAR6; VAR3++)
    {
        VAR7 *VAR8 = VAR4->VAR8[VAR3];
        FUN2(&VAR8->VAR9);
        FUN2(&VAR4->VAR8[VAR3]);
    }
    FUN2(&VAR4->VAR8);
    FUN2(VAR2);
}