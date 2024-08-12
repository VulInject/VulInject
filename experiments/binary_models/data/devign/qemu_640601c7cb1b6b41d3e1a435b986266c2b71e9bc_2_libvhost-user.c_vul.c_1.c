FUN1(VAR1 *VAR2, VAR3 *VAR4)
{
    if (FUN2(VAR2->VAR5))
    {
        return;
    }
    if (!FUN3(VAR2, VAR4))
    {
        FUN4("");
        return;
    }
    if (FUN5(VAR4->VAR6, 1) < 0)
    {
        FUN6(VAR2, "", strerror(VAR7));
    }
}