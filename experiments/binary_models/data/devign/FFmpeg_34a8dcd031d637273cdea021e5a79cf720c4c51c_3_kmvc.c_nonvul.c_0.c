static int FUN1(VAR1 *VAR2)
{
    VAR3 *const VAR4 = (VAR3 *)VAR2->VAR5;
    FUN2(&VAR4->VAR6);
    FUN2(&VAR4->VAR7);
    if (VAR4->VAR8.VAR9[0])
        VAR2->FUN3(VAR2, &VAR4->VAR8);
    return 0;
}