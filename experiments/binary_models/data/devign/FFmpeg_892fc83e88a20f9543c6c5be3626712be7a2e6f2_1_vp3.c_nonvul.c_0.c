static int FUN1(VAR1 *VAR2)
{
    VAR3 *VAR4 = VAR2->VAR5;
    FUN2(VAR4->VAR6);
    FUN2(VAR4->VAR7);
    FUN2(VAR4->VAR8);
    FUN2(VAR4->VAR9);
    FUN2(VAR4->VAR10);
    FUN2(VAR4->VAR11);
    if (VAR4->VAR12.VAR13[0])
        VAR2->FUN3(VAR2, &VAR4->VAR12);
    if (VAR4->VAR14.VAR13[0])
        VAR2->FUN3(VAR2, &VAR4->VAR14);
    return 0;
}