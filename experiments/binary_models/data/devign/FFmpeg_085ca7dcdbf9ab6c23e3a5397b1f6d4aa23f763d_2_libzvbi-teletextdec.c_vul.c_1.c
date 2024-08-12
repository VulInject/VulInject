static int FUN1(VAR1 *VAR2)
{
    VAR3 *VAR4 = VAR2->VAR5;
    FUN2(VAR2, "", VAR4->VAR6);
    while (VAR4->VAR7)
        FUN3(&VAR4->VAR8[--VAR4->VAR7].VAR9);
    FUN4(&VAR4->VAR8);
    FUN5(VAR4->VAR10);
    FUN6(VAR4->VAR11);
    VAR4->VAR10 = NULL;
    VAR4->VAR11 = NULL;
    VAR4->VAR12 = VAR13;
    return 0;
}