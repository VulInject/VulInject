static void FUN1(VAR1 *VAR2)
{
    struct VAR3 *VAR4 = FUN2(VAR2->VAR5.VAR6);
    VAR7 *VAR8 = &VAR2->VAR9;
    InputButton VAR10;
    if (VAR8->VAR11 > 0)
    {
        VAR10 = VAR12;
    }
    else if (VAR8->VAR11 < 0)
    {
        VAR10 = VAR13;
    }
    else
    {
        return;
    }
    FUN3(VAR4->VAR14.VAR15, VAR10, true);
    FUN4();
    FUN3(VAR4->VAR14.VAR15, VAR10, false);
    FUN4();
}