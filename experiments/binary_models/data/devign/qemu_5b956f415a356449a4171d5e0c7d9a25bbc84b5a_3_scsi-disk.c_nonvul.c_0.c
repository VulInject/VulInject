static void FUN1(VAR1 *VAR2, int VAR3)
{
    assert(VAR2->VAR4.VAR5 == NULL);
    if (FUN2(VAR2, VAR3, false))
    {
        goto VAR6;
    }
    VAR2->VAR7 += VAR2->VAR8;
    VAR2->VAR8 = 0;
    if (VAR2->VAR4.VAR9.VAR10 == VAR11)
    {
        FUN3(VAR2);
        return;
    }
    else
    {
        FUN4(&VAR2->VAR4, VAR12);
    }
VAR6:
    FUN5(&VAR2->VAR4);
}