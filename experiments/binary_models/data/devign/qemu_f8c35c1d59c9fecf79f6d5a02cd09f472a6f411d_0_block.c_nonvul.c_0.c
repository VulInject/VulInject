void FUN1(VAR1 *VAR2)
{
    if (!VAR2->VAR3)
    {
        VAR2->VAR3 = VAR4;
        VAR2->VAR5 = VAR6;
        if (!VAR2->VAR7)
        {
            VAR2->VAR7 = VAR8;
            VAR2->VAR9 = VAR10;
        }
    }
    if (!VAR2->VAR11)
        VAR2->VAR11 = VAR12;
    FUN2(&VAR13, VAR2, VAR14);
}