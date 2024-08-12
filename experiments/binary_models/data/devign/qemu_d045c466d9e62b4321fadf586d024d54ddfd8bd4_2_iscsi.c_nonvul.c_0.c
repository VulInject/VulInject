FUN1(void *VAR1)
{
    VAR2 *VAR3 = VAR1;
    struct VAR4 *VAR5 = VAR3->VAR5;
    FUN2(&VAR3->mutex);
    FUN3(VAR5, VAR6);
    FUN4(VAR3);
    FUN5(&VAR3->mutex);
}