void FUN1(VAR1 *VAR2, int VAR3)
{
    if (VAR2->VAR4 != VAR3)
    {
        VAR2->VAR4 = VAR3;
        if (FUN2())
        {
            FUN3(VAR2, 0);
        }
        else
        {
            VAR5 *VAR6 = VAR2->VAR7;
            FUN4(VAR6);
        }
    }
}