static void FUN1(VAR1 *VAR2)
{
    if (VAR2->VAR3)
    {
        if (VAR2->VAR4)
        {
            FUN2(VAR2->VAR3, VAR2->VAR4);
        }
        FUN3(VAR2->VAR5, FUN4(VAR2->VAR3), false, NULL, NULL, NULL, NULL);
        FUN5(VAR2->VAR3);
    }
    memset(VAR2, 0, sizeof(VAR1));
}