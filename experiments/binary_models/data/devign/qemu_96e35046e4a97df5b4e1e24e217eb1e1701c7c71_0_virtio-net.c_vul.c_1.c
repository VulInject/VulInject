static void FUN1(VAR1 *VAR2)
{
    VAR3 *VAR4;
    VAR5 *VAR6 = FUN2(VAR2);
    if (VAR2->VAR7)
    {
        if (VAR6->VAR8)
        {
            VAR4 = FUN3("", VAR6->VAR8, FUN4(FUN5(VAR6->VAR9)));
        }
        else
        {
            VAR4 = FUN3("", FUN4(FUN5(VAR6->VAR9)));
        }
        FUN6(VAR10, VAR4);
        FUN7(VAR4);
        VAR2->VAR7 = 0;
    }
}