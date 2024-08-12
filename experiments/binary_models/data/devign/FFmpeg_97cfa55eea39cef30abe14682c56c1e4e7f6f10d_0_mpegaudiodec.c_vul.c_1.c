static void FUN1(VAR1 *VAR2, VAR3 *VAR4)
{
    if (VAR4->VAR5 == 2)
    {
        if (VAR4->VAR6)
        {
            if (VAR2->VAR7 <= 2)
                VAR4->VAR8 = 8;
            else
                VAR4->VAR8 = 6;
            VAR4->VAR9 = 2 + (VAR2->VAR7 != 8);
        }
        else
        {
            VAR4->VAR8 = 0;
            VAR4->VAR9 = 0;
        }
    }
    else
    {
        VAR4->VAR9 = 13;
        VAR4->VAR8 = 22;
    }
}