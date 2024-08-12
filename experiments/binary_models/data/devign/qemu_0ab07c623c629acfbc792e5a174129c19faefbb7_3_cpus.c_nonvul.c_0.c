static int FUN1(void)
{
    VAR1 *VAR2 = VAR3;
    while (VAR2)
    {
        if (!VAR2->VAR4)
        {
            return 0;
        }
        VAR2 = (VAR1 *)VAR2->VAR5;
    }
    return 1;
}