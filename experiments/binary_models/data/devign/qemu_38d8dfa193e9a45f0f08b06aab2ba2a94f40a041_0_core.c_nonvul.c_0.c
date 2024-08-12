void FUN1(VAR1 *VAR2)
{
    if (VAR2->VAR3 & VAR4)
    {
        if (VAR2->VAR5)
        {
            FUN2("");
            FUN3(VAR2->VAR5);
            VAR2->VAR5 = NULL;
        }
        VAR2->VAR3 &= ~VAR4;
        VAR2->VAR6 = -1;
        VAR2->VAR7 = NULL;
    }
}