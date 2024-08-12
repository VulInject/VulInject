static int FUN1(VAR1 *VAR2)
{
    VAR3 *const VAR4 = (VAR3 *)VAR2->VAR5;
    FUN2(&VAR4->VAR6);
    if (VAR4->VAR7.VAR8[0])
        VAR2->FUN3(VAR2, &VAR4->VAR7);
    FUN4(&(VAR4->VAR9));
    FUN2(&VAR4->VAR10);
    FUN2(&VAR4->VAR11);
    return 0;
}