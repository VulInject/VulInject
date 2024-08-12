static void FUN1(VAR1 *VAR2, VAR3 *recv)
{
    uint32_t VAR4;
    if (FUN2(VAR2) != VAR5)
    {
        FUN3(VAR2, 1, "");
        FUN4(VAR2, recv->VAR6.VAR7, recv->VAR6.VAR8);
        return;
    }
    VAR4 = FUN5(recv->VAR6.VAR9);
    FUN3(VAR2, 1, "", VAR10, recv->VAR6.VAR8, VAR4);
    FUN6(VAR2, (VAR11 *)recv);
    if (VAR2->VAR12)
    {
        FUN7(VAR2->VAR12, recv->VAR13, VAR4);
    }
    else
    {
        FUN3(VAR2, VAR14, "");
    }
}