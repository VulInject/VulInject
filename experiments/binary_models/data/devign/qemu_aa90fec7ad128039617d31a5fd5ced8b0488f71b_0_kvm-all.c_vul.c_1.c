static int FUN1(VAR1 *VAR2, unsigned long *VAR3)
{
    unsigned int VAR4, VAR5;
    unsigned long VAR6, VAR7, VAR8, VAR9;
    unsigned int VAR10 = ((VAR2->VAR11 / VAR12) + VAR13 - 1) / VAR13;
    for (VAR4 = 0; VAR4 < VAR10; VAR4++)
    {
        if (VAR3[VAR4] != 0)
        {
            VAR9 = FUN2(VAR3[VAR4]);
            do
            {
                VAR5 = FUN3(VAR9) - 1;
                VAR9 &= ~(1ul << VAR5);
                VAR6 = VAR4 * VAR13 + VAR5;
                VAR8 = VAR6 * VAR12;
                VAR7 = VAR2->VAR14 + VAR8;
                FUN4(VAR2->VAR15, VAR7);
            } while (VAR9 != 0);
        }
    }
    return 0;
}