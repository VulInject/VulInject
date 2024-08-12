static int FUN1(VAR1 *VAR2, VAR3 *VAR4, int VAR5)
{
    if (FUN2(VAR4))
    {
        if (!VAR5)
        {
            if (!FUN3(VAR4))
            {
                FUN4(VAR6, FUN5(VAR4));
                return -1;
            }
            if (FUN6(VAR4))
            {
                FUN4(VAR7, FUN5(VAR4));
                return -1;
            }
        }
        FUN7(VAR4);
    }
    return 0;
}