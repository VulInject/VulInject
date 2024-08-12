static void FUN1(struct VAR1 *VAR2, ssize_t VAR3, void *VAR4)
{
    VAR5 *VAR6 = (VAR5 *)VAR4;
    VAR7 *VAR8 = VAR6->VAR9.VAR8;
    VAR10 *VAR11 = VAR8->VAR12;
    int VAR13;
    VAR6->VAR3 = VAR3;
    VAR13 = FUN2(VAR11->VAR14[VAR15], &VAR6, sizeof(VAR6));
    if (VAR13 != sizeof(VAR6))
    {
        FUN3("");
        FUN4();
        VAR6->VAR9.FUN5(VAR6->VAR9.VAR12, -VAR16);
        FUN6(VAR6);
        close(VAR11->VAR14[VAR17]);
        close(VAR11->VAR14[VAR15]);
        FUN7(VAR11->VAR14[VAR17], NULL, NULL, NULL);
        VAR8->VAR18 = NULL;
        FUN8();
    }
}