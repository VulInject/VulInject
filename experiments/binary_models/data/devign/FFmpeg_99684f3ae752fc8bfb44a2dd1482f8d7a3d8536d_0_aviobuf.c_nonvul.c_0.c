int FUN1(VAR1 *VAR2)
{
    VAR3 *VAR4;
    VAR5 *VAR6;
    if (!VAR2)
        return 0;
    FUN2(VAR2);
    VAR4 = VAR2->VAR7;
    VAR6 = VAR4->VAR6;
    FUN3(VAR4);
    FUN4(&VAR4->VAR8);
    FUN4(&VAR2->VAR7);
    FUN4(&VAR2->VAR9);
    FUN5(&VAR2);
    return FUN6(VAR6);
}