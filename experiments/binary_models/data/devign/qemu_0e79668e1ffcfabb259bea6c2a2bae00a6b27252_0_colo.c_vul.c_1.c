void FUN1(void *VAR1)
{
    VAR2 *VAR3 = VAR1;
    FUN2(&VAR3->VAR4, VAR5, NULL);
    FUN3(&VAR3->VAR4);
    FUN2(&VAR3->VAR6, VAR5, NULL);
    FUN3(&VAR3->VAR6);
    FUN4(VAR2, VAR3);
}