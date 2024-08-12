static void FUN1(void)
{
    FUN2(1, FUN3(struct VAR1, VAR2), VAR3.VAR4);
    FUN2(1, FUN3(struct VAR1, VAR5), VAR3.VAR6);
    FUN2(1, FUN3(struct VAR1, VAR7), VAR3.VAR8);
    FUN2(1, FUN3(struct VAR1, VAR9), VAR3.VAR10);
    FUN2(1, FUN3(struct VAR1, VAR11), VAR3.VAR12);
    FUN2(1, FUN3(struct VAR1, VAR13), VAR3.VAR14);
    if (VAR15)
    {
        FUN4(1, FUN3(struct VAR1, VAR16), &VAR17, 16);
    }
}