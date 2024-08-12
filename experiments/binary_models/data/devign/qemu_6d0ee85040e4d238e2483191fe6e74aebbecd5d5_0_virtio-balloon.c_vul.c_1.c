static int FUN1(VAR1 *VAR2, void *VAR3, int VAR4)
{
    VAR5 *VAR6 = VAR3;
    if (VAR4 != 1)
        return -VAR7;
    FUN2(&VAR6->VAR8, VAR2);
    VAR6->VAR9 = FUN3(VAR2);
    VAR6->VAR10 = FUN3(VAR2);
    FUN4(VAR2, (VAR11 *)&VAR6->VAR12, sizeof(VAR13));
    FUN4(VAR2, (VAR11 *)&VAR6->VAR14, sizeof(VAR15));
    FUN4(VAR2, (VAR11 *)&VAR6->VAR16, sizeof(VAR17));
    FUN4(VAR2, (VAR11 *)&VAR6->VAR18, sizeof(void));
    return 0;
}