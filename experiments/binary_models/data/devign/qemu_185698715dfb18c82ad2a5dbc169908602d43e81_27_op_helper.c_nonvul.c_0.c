static int FUN1(int VAR1, float64 VAR2, float64 b VAR3)
{
    if (FUN2(VAR2) || FUN2(VAR4) || (VAR1 && (FUN3(VAR2) || FUN3(VAR4))))
    {
        FUN4(VAR5, VAR6);
        return 1;
    }
    else if (FUN3(VAR2) || FUN3(VAR4))
    {
        return 1;
    }
    else
    {
        return 0;
    }
}