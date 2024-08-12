static void FUN1(VAR1 *VAR2)
{
    for (;;)
    {
        VAR2->VAR3 <<= 8;
        VAR2->VAR4 <<= 8;
        if (VAR2->VAR5 < VAR2->VAR6)
        {
            VAR2->VAR4 |= *VAR2->VAR5++;
        }
        else if (!VAR2->VAR4)
        {
            VAR2->VAR7 = 1;
            return;
        }
        if (VAR2->VAR3 >= VAR8)
            return;
    }
}