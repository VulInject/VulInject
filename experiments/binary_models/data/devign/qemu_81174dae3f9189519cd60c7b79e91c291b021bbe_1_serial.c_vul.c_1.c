static int FUN1(VAR1 *VAR2, void *VAR3, int VAR4)
{
    VAR5 *VAR6 = VAR3;
    if (VAR4 > 2)
        return -VAR7;
    if (VAR4 >= 2)
        FUN2(VAR2, &VAR6->VAR8);
    else
        VAR6->VAR8 = FUN3(VAR2);
    FUN4(VAR2, &VAR6->VAR9);
    FUN4(VAR2, &VAR6->VAR10);
    FUN4(VAR2, &VAR6->VAR11);
    FUN4(VAR2, &VAR6->VAR12);
    FUN4(VAR2, &VAR6->VAR13);
    FUN4(VAR2, &VAR6->VAR14);
    FUN4(VAR2, &VAR6->VAR15);
    FUN4(VAR2, &VAR6->VAR16);
    return 0;
}