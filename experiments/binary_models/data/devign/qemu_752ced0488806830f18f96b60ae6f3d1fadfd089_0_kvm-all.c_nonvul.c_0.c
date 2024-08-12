static int FUN1(VAR1 *VAR2, unsigned long *VAR3)
{
    unsigned int VAR4, VAR5;
    unsigned long VAR6, VAR7;
    hwaddr VAR8, VAR9;
    unsigned int VAR10 = ((VAR2->VAR11 / FUN2()) + VAR12 - 1) / VAR12;
    unsigned long VAR13 = FUN2() / VAR14;
    for (VAR4 = 0; VAR4 < VAR10; VAR4++)
    {
        if (VAR3[VAR4] != 0)
        {
            VAR7 = FUN3(VAR3[VAR4]);
            do
            {
                VAR5 = FUN4(VAR7) - 1;
                VAR7 &= ~(1ul << VAR5);
                VAR6 = (VAR4 * VAR12 + VAR5) * VAR13;
                VAR9 = VAR6 * VAR14;
                VAR8 = VAR2->VAR15 + VAR9;
                FUN5(VAR2->VAR16, VAR8, VAR14 * VAR13);
            } while (VAR7 != 0);
        }
    }
    return 0;
}