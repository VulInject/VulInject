static void FUN1(struct VAR1 *VAR1)
{
    struct VAR2 *VAR3 = VAR1->VAR3;
    FUN2(VAR1, VAR4);
    FUN3(&VAR3->VAR5, VAR1, VAR4);
    VAR3->VAR6--;
    VAR3->VAR7++;
}