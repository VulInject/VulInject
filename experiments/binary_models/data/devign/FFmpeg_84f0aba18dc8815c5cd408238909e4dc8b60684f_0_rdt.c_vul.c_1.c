FUN1(VAR1 *VAR2, int VAR3, void *VAR4, VAR5 *VAR6)
{
    VAR7 *VAR8 = FUN2(sizeof(VAR7));
    if (!VAR8)
        return NULL;
    VAR8->VAR2 = VAR2;
    VAR8->VAR9 = &VAR2->VAR9[VAR3];
    do
    {
        VAR8->VAR10++;
    } while (VAR3 + VAR8->VAR10 < VAR2->VAR11 && VAR8->VAR9[VAR8->VAR10]->VAR4 == VAR8->VAR9[0]->VAR4);
    VAR8->VAR12 = -1;
    VAR8->VAR13 = -1;
    VAR8->VAR14 = -1;
    VAR8->VAR15 = VAR6->VAR15;
    VAR8->VAR16 = VAR4;
    return VAR8;
}