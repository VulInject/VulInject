int FUN1(VAR1 *VAR2)
{
    VAR1 *VAR3 = VAR2->VAR3;
    if (VAR3 && VAR3->VAR4 && !VAR3->VAR5)
        return 1;
    return (VAR2->VAR4 && !VAR2->VAR5);
}