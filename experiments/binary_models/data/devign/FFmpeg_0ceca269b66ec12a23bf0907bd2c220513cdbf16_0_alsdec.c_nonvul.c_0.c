static int FUN1(VAR1 *VAR2, VAR3 *VAR4)
{
    VAR5 *VAR6 = &VAR2->VAR6;
    *VAR4->VAR7 = 0;
    if (FUN2(VAR6))
    {
        if (FUN3(VAR2, VAR4))
            return -1;
    }
    else
    {
        if (FUN4(VAR2, VAR4) < 0)
            return -1;
    }
    return 0;
}