static void FUN1(void *VAR1)
{
    VAR2 *VAR3 = (VAR2 *)VAR1;
    int VAR4;
    if (!VAR3->VAR5)
    {
        return;
    }
    FUN2(&VAR3->mutex);
    FUN3(VAR3->VAR5, VAR6, 0, &VAR4);
    FUN4(VAR3);
    FUN5(&VAR3->mutex);
    FUN6();
}