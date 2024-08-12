void FUN1(VAR1 **VAR2)
{
    VAR1 *VAR3 = *VAR2;
    if (!VAR3)
        return;
    FUN2(VAR3);
    FUN3(&VAR3->VAR4);
    FUN3(&VAR3->VAR5);
    FUN3(VAR2);