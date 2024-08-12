static void FUN1(VAR1 *VAR2)
{
    VAR1 *VAR3 = VAR2->VAR4;
    VAR1 *VAR5;
    FUN2();
    FUN3(VAR2);
    FUN4(VAR5, &VAR3->VAR6, VAR7)
    {
        if (VAR2->VAR8 >= VAR5->VAR8)
        {
            FUN5(VAR5, VAR2, VAR7);
            goto VAR9;
        }
    }
    FUN6(&VAR3->VAR6, VAR2, VAR7);
VAR9:
    VAR10 |= VAR3->VAR11 && VAR2->VAR11;
    FUN7();
}