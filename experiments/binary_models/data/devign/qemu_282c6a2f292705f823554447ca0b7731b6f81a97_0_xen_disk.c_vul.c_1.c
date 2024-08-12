static void FUN1(struct VAR1 *VAR1, bool VAR2)
{
    struct VAR3 *VAR4 = VAR1->VAR4;
    FUN2(VAR1, VAR5);
    memset(VAR1, 0, sizeof(*VAR1));
    VAR1->VAR4 = VAR4;
    FUN3(&VAR4->VAR6, VAR1, VAR5);
    if (VAR2)
    {
        VAR4->VAR7--;
    }
    else
    {
        VAR4->VAR8--;
    }
}