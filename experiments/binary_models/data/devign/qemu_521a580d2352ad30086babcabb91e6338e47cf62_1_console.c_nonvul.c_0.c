void FUN1(VAR1 *VAR2)
{
    static const char VAR3[] = "";
    static VAR4 *VAR5;
    VAR6 *VAR7;
    FUN2(VAR2, VAR2->VAR8->VAR9);
    VAR2->VAR10 = FUN3();
    FUN4(&VAR2->VAR10->VAR11, VAR2, VAR12);
    FUN5(VAR2->VAR10);
    if (VAR2->VAR7)
    {
        VAR2->VAR7->VAR13++;
        VAR7 = VAR2->VAR7;
    }
    else
    {
        VAR7 = VAR14;
    }
    if (VAR2->VAR8->VAR15)
    {
        if (VAR7)
        {
            VAR2->VAR8->FUN6(VAR2, VAR7->VAR16);
        }
        else
        {
            if (!VAR5)
            {
                VAR5 = FUN7(640, 480, VAR3);
            }
            VAR2->VAR8->FUN6(VAR2, VAR5);
        }
    }
}