static int FUN1(VAR1 *VAR2, void *VAR3)
{
    VAR2->VAR4 = FUN2(VAR2->VAR4, (VAR2->VAR5 + 1) * sizeof(*VAR2->VAR4));
    if (!VAR2->VAR4)
        return -1;
    VAR2->VAR4[VAR2->VAR5] = VAR3;
    VAR2->VAR5++;
    return 0;