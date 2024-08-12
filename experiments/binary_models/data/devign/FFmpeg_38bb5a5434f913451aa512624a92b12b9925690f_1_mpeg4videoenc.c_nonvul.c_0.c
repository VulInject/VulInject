void FUN1(VAR1 *VAR2)
{
    if (VAR2->VAR3 == VAR4)
    {
        FUN2(VAR2);
    }
    else
    {
        VAR2->VAR5 = VAR2->VAR6;
        VAR2->VAR6 = FUN3(VAR2->VAR7, VAR2->VAR8->VAR6.VAR9);
    }
}