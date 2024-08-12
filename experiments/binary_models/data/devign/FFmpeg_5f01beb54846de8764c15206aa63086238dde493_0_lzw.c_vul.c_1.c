void FUN1(VAR1 *VAR2)
{
    struct VAR1 *VAR3 = (struct VAR1 *)VAR2;
    while (!VAR3->VAR4)
        FUN2(VAR3);
}