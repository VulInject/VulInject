static void FUN1(VAR1 *VAR2, void *VAR3)
{
    VAR4 *VAR5 = FUN2(VAR2, VAR4, VAR6);
    VAR7 *VAR8 = VAR3;
    if (FUN3(VAR8))
    {
        if (!VAR5->VAR9)
        {
            return;
        }
        FUN4(VAR5);
        VAR5->VAR10 = true;
    }
    else if (FUN5(VAR8) || FUN6(VAR8))
    {
        if (VAR5->VAR9)
        {
            return;
        }
        FUN7();
        VAR5->VAR10 = false;
    }
}