static void FUN1(VAR1 *VAR2, struct VAR3 *VAR4)
{
    struct VAR3 *new;
    int VAR5, VAR6;
    if (VAR2->VAR7->VAR8 == VAR2->VAR9)
    {
        VAR5 = VAR2->VAR9 * 2;
        if (VAR5 < 64)
        {
            VAR5 = 64;
        }
        VAR6 = sizeof(struct VAR10);
        VAR6 += VAR5 * sizeof(*new);
        VAR2->VAR7 = FUN2(VAR2->VAR7, VAR6);
        VAR2->VAR9 = VAR5;
    }
    VAR5 = VAR2->VAR7->VAR8++;
    new = &VAR2->VAR7->VAR11[VAR5];
    memset(new, 0, sizeof(*new));
    new->VAR12 = VAR4->VAR12;
    new->VAR13 = VAR4->VAR13;
    new->VAR14 = VAR4->VAR14;
    new->VAR15 = VAR4->VAR15;
    FUN3(VAR2, VAR4->VAR12);
}