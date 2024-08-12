static void FUN1(void *VAR1)
{
    VAR2 *VAR3 = VAR1;
    if (!FUN2(VAR4))
    {
        FUN3(VAR3, VAR5);
        return;
    }
    if (FUN4(VAR3->VAR6) != VAR7)
    {
        FUN3(VAR3, VAR8);
        return;
    }
    if (VAR3->VAR9 & 0x3ff)
    {
        FUN3(VAR3, VAR10);
        return;
    }
    FUN5(FUN6(VAR3->VAR6));
    if (FUN7(VAR3->VAR6, VAR3->VAR9))
    {
        FUN3(VAR3, VAR10);
        return;
    }
    VAR3->VAR11 = VAR12;
}