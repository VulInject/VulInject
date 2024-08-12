FUN1(struct VAR1 *VAR2)
{
    FUN2("");
    FUN3("", (long)VAR2);
    if (VAR2)
    {
        if (VAR2->VAR3 & VAR4)
            FUN4(VAR2);
        if (VAR2->VAR3 & VAR5)
            free(VAR2->VAR6);
        if (VAR2->VAR3 & VAR7)
        {
            free(VAR2);
            VAR2->VAR8->VAR9--;
        }
        else if ((VAR2->VAR3 & VAR10) == 0)
        {
            FUN5(VAR2, &VAR2->VAR8->VAR11);
            VAR2->VAR3 = VAR10;
        }
    }
}