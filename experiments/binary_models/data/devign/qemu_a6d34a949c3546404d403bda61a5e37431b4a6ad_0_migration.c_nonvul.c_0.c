static int FUN1(VAR1 *VAR2)
{
    int VAR3 = 0;
    FUN2(VAR2->VAR4, NULL, NULL, NULL, NULL);
    if (VAR2->VAR5)
    {
        FUN3("");
        VAR3 = FUN4(VAR2->VAR5);
        VAR2->VAR5 = NULL;
    }
    else
    {
        if (VAR2->VAR6)
        {
            FUN5(VAR2->VAR6);
        }
    }
    if (VAR2->VAR4 != -1)
    {
        close(VAR2->VAR4);
        VAR2->VAR4 = -1;
    }
    return VAR3;
}