static void FUN1(void *VAR1)
{
    VAR2 *VAR3 = VAR1;
    if (VAR3->VAR4 == 0 || VAR3->VAR5 == 0)
        return;
    if (VAR3->VAR4 != FUN2(VAR3->VAR6) || VAR3->VAR5 != FUN3(VAR3->VAR6))
    {
        FUN4(VAR3->VAR6, VAR3->VAR4, VAR3->VAR5);
    }
    if (VAR3->VAR7 & VAR8)
    {
        FUN5(VAR3);
    }
    else if (VAR3->VAR9 == 8)
    {
        FUN6(VAR3);
    }
    else
    {
        FUN7("", VAR3->VAR9);
    }
    FUN8(VAR3->VAR10);