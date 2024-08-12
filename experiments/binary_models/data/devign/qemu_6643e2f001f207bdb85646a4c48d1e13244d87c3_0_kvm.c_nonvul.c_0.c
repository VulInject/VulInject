static void FUN1(void *VAR1)
{
    struct VAR2 *VAR3 = VAR1;
    int VAR4;
    if ((VAR3->VAR5->VAR6 & VAR7) && !(VAR3->VAR8->VAR9 & VAR10))
    {
        if (FUN2(VAR3->VAR5))
        {
            return;
        }
    }
    VAR4 = FUN3(VAR3->VAR5, VAR3->VAR8);
    if (VAR4 < 0)
    {
        FUN4("");
        if (VAR3->VAR11)
        {
            FUN5();
        }
    }
}