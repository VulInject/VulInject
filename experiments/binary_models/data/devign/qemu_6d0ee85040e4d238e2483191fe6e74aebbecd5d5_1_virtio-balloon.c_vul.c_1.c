static void FUN1(VAR1 *VAR2, void *VAR3)
{
    VAR4 *VAR5 = VAR3;
    FUN2(&VAR5->VAR6, VAR2);
    FUN3(VAR2, VAR5->VAR7);
    FUN3(VAR2, VAR5->VAR8);
    FUN4(VAR2, (VAR9 *)&VAR5->VAR10, sizeof(VAR11));
    FUN4(VAR2, (VAR9 *)&VAR5->VAR12, sizeof(VAR13));
    FUN4(VAR2, (VAR9 *)&VAR5->VAR14, sizeof(VAR15));
    FUN4(VAR2, (VAR9 *)&VAR5->VAR16, sizeof(void));
}