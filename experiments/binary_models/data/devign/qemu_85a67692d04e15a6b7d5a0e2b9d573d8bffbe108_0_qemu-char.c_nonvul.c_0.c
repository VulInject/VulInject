static void FUN1(VAR1 *VAR2, int VAR3)
{
    VAR4 *VAR5 = VAR2->VAR6;
    if (!VAR3)
    {
        if (VAR5->VAR7)
        {
            FUN2(VAR5->VAR7);
            VAR5->VAR7 = 0;
        }
        VAR5->VAR3 = 0;
        FUN3(VAR2, 1000);
    }
    else
    {
        if (VAR5->VAR8)
        {
            FUN2(VAR5->VAR8);
            VAR5->VAR8 = 0;
        }
        if (!VAR5->VAR3)
        {
            FUN4(VAR2);
            VAR5->VAR3 = 1;
            VAR5->VAR7 = FUN5(VAR5->VAR9, VAR10, VAR11, VAR2);
        }
    }
}