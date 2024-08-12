void FUN1(VAR1 *VAR2)
{
    static int VAR3 = 0;
    if (!VAR3)
    {
        VAR3 = 1;
        FUN2(&VAR4);
    }
    VAR2->VAR5 = -127;
    VAR2->VAR6 = 127;
    VAR2->VAR7 = VAR2->VAR8 = VAR9;
}