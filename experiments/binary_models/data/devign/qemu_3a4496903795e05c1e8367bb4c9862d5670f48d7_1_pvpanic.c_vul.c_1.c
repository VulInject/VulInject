static void FUN1(int VAR1)
{
    static bool VAR2;
    if (VAR1 & ~VAR3 && !VAR2)
    {
        FUN2(VAR4, "", VAR1);
        VAR2 = true;
    }
    if (VAR1 & VAR3)
    {
        FUN3("");
        FUN4(VAR5);
        return;
    }
}