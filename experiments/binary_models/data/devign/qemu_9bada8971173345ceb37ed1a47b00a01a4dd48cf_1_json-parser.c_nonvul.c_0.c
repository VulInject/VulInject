static void FUN1(VAR1 *VAR2)
{
    if (VAR2)
    {
        while (!FUN2(VAR2->VAR3))
        {
            FUN3(VAR2);
        }
        FUN4(VAR2->VAR4);
        FUN5(VAR2->VAR3);
        FUN4(VAR2);
    }
}