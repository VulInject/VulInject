static void FUN1(VAR1 *VAR2, int VAR3)
{
    int VAR4;
    if (!FUN2(VAR2) && VAR2->VAR5 == VAR6)
    {
        return;
    }
    for (VAR4 = 0; VAR4 < VAR3; VAR4++)
    {
        VAR2->VAR7++;
        if (VAR2->VAR7 == 0x00002000)
        {
            FUN3(VAR2, VAR8);
        }
        if (VAR2->VAR7 == 0x00004000)
        {
            FUN3(VAR2, VAR8);
            VAR2->VAR7 = 0;
            if (VAR2->VAR9 >= 0x00004000)
            {
                VAR2->VAR9 -= 0x00004000;
            }
            else
            {
                VAR2->VAR9 = 0;
            }
        }
    }
}