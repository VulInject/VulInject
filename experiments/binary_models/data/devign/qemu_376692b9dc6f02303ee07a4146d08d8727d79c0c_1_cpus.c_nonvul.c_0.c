void FUN1(VAR1 *VAR2, void (*VAR3)(void *VAR4), void *VAR4)
{
    struct qemu_work_item VAR5;
    if (FUN2(VAR2))
    {
        FUN3(VAR4);
        return;
    }
    VAR5.VAR3 = VAR3;
    VAR5.VAR4 = VAR4;
    VAR5.free = false;
    FUN4(&VAR2->VAR6);
    if (VAR2->VAR7 == NULL)
    {
        VAR2->VAR7 = &VAR5;
    }
    else
    {
        VAR2->VAR8->VAR9 = &VAR5;
    }
    VAR2->VAR8 = &VAR5;
    VAR5.VAR9 = NULL;
    VAR5.VAR10 = false;
    FUN5(&VAR2->VAR6);
    FUN6(VAR2);
    while (!FUN7(&VAR5.VAR10))
    {
        VAR1 *VAR11 = VAR12;
        FUN8(&VAR13, &VAR14);
        VAR12 = VAR11;
    }
}