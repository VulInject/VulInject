void FUN1(VAR1 *VAR2, VAR3 *VAR4)
{
    int VAR5 = VAR4->VAR5;
    int VAR6 = VAR4->VAR6;
    FUN2(VAR4 != &VAR2->VAR7[0]);
    VAR2->VAR7[VAR5].VAR6 = VAR6;
    VAR2->VAR7[VAR6].VAR5 = VAR5;
    memset(VAR4, 0, sizeof(*VAR4));
    FUN3(&VAR2->VAR8.VAR9, VAR2->VAR8.VAR9 + 1);
}