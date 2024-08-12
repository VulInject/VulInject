static void FUN1(void)
{
    FUN2(1, 0x100, true);
    FUN3(1, VAR1, VAR2.VAR3);
    FUN3(1, VAR4, VAR2.VAR5);
    FUN3(1, VAR6, VAR2.VAR7);
    FUN3(1, VAR8, VAR2.VAR9);
    if (VAR10)
    {
        FUN4(&VAR11->VAR12, &VAR13);
    }
    else
    {
        memset(&VAR11->VAR12, 0, 16);
    }
    VAR11->VAR14 = 0x06;
    FUN3(1, VAR15, VAR2.VAR16);
    FUN3(1, VAR17, VAR2.VAR18);
    VAR19;
}