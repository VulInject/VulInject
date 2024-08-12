FUN1(void)
{
    struct VAR1 *VAR2, *VAR3;
    FUN2("");
    if (VAR4 == 0)
        return;
VAR5:
    if (!FUN3())
        return;
    if (VAR6.VAR7 != &VAR6)
    {
        VAR2 = VAR6.VAR7;
    }
    else
    {
        if (VAR8 != &VAR9)
            VAR2 = VAR8;
        else
            VAR2 = VAR9.VAR7;
        VAR8 = VAR2->VAR7;
    }
    VAR3 = VAR2->VAR10;
    FUN4(VAR2);
    --VAR4;
    if (VAR2->VAR11 != VAR2)
    {
        FUN5(VAR2->VAR11, VAR3);
        FUN6(VAR2);
    }
    if (VAR2->VAR12)
    {
        if (--VAR2->VAR12->VAR13 == 0)
            VAR2->VAR12->VAR14 = 0;
    }
    FUN7(VAR2->VAR15, VAR2->VAR16);
    if (VAR4)
        goto VAR5;