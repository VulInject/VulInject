static void FUN1(VAR1 *VAR2)
{
    if (VAR2->VAR3[1].VAR4 != VAR5)
    {
        if (VAR2->VAR3[0].VAR4 == VAR5)
        {
            VAR2->VAR3[1] = VAR2->VAR3[0];
            VAR2->VAR6->VAR7 = VAR2->VAR3[1].VAR7;
            VAR2->VAR6->VAR8 = VAR2->VAR3[1].VAR8;
        }
        else
        {
            VAR2->VAR6->VAR7 = 0;
            VAR2->VAR6->VAR8 = 0;
        }
    }
}