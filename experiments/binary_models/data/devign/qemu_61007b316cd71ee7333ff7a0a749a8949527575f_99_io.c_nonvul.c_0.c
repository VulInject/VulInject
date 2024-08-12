void FUN1(VAR1 *VAR2)
{
    VAR3 *VAR4 = VAR2->VAR4;
    if (VAR4 && VAR4->VAR5)
    {
        VAR4->FUN1(VAR2);
    }
    else if (VAR2->VAR6)
    {
        FUN1(VAR2->VAR6);
    }
}