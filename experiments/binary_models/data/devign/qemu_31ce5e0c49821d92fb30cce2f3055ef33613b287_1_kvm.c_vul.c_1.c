static void FUN1(VAR1 *VAR2)
{
    VAR1 *VAR3;
    int VAR4, VAR5, VAR6 = VAR2->VAR7;
    VAR4 = (VAR6 >> 8) & 0xf;
    VAR5 = ((VAR6 >> 12) & 0xf0) + ((VAR6 >> 4) & 0xf);
    if ((VAR4 == 6 && VAR5 >= 14) || VAR4 > 6)
    {
        for (VAR3 = VAR8; VAR3 != NULL; VAR3 = VAR3->VAR9)
        {
            if (VAR3 == VAR2)
            {
                continue;
            }
            FUN2(VAR3, 1, VAR10 | VAR11, VAR12 | VAR13, 0, 0, 1);
        }
    }
}