static void FUN1(VAR1 *VAR2)
{
    VAR3 *VAR4 = FUN2(VAR2);
    VAR5 *VAR6 = FUN3(VAR4);
    VAR7 *VAR8;
    while (VAR4->VAR9)
    {
        VAR8 = FUN4(&VAR4->VAR10);
        FUN5(VAR8);
    }
    if (VAR4->VAR11)
    {
        if (FUN6(VAR4))
        {
            FUN7(VAR4, FUN6(VAR4), VAR4);
        }
        if (VAR6->VAR12)
        {
            VAR6->FUN8(VAR4);
        }
    }
    if (VAR4->VAR13)
    {
        FUN9(VAR4->VAR13, VAR4);
    }
}