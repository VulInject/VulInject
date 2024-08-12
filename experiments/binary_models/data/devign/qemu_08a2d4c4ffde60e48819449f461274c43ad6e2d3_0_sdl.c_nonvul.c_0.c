static void FUN1(int VAR1, int VAR2, int VAR3)
{
    if (VAR3)
    {
        if (!VAR4)
            FUN2();
        if (VAR5 || FUN3() || VAR6)
        {
            FUN4(VAR7);
            if (!FUN3() && !VAR6)
                FUN5(VAR1, VAR2);
        }
    }
    else if (VAR5)
        FUN6();
    VAR4 = VAR3;
    VAR8 = VAR1, VAR9 = VAR2;
}