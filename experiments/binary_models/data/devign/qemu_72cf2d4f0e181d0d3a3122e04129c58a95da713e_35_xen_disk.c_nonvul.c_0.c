static void FUN1(struct VAR1 *VAR1)
{
    struct VAR2 *VAR3 = VAR1->VAR3;
    FUN2(VAR1, VAR4);
    memset(VAR1, 0, sizeof(*VAR1));
    VAR1->VAR3 = VAR3;
    FUN3(&VAR3->VAR5, VAR1, VAR4);
    VAR3->VAR6--;
}