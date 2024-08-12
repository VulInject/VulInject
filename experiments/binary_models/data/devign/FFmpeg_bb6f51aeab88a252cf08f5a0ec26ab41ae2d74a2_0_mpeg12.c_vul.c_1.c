static void FUN1(VAR1 *VAR2)
{
    unsigned int VAR3;
    unsigned int VAR4, VAR5;
    int VAR6;
    UINT64 VAR7;
    if ((VAR2->VAR8 % VAR2->VAR9) == 0)
    {
        FUN2(VAR2, VAR10);
        {
            int VAR11, VAR12, VAR13;
            VAR2->VAR14 = 0;
            VAR12 = 0x7fffffff;
            for (VAR11 = 1; VAR11 < 9; VAR11++)
            {
                VAR13 = FUN3(VAR2->VAR15 - VAR16[VAR11]);
                if (VAR13 < VAR12)
                {
                    VAR12 = VAR13;
                    VAR2->VAR14 = VAR11;
                }
            }
        }
        FUN4(&VAR2->VAR17, 12, VAR2->VAR18);
        FUN4(&VAR2->VAR17, 12, VAR2->VAR19);
        FUN4(&VAR2->VAR17, 4, 1);
        FUN4(&VAR2->VAR17, 4, VAR2->VAR14);
        VAR5 = VAR2->VAR20 / 400;
        if (VAR5 > 0x3ffff)
            VAR5 = 0x3ffff;
        FUN4(&VAR2->VAR17, 18, VAR5);
        FUN4(&VAR2->VAR17, 1, 1);
        VAR3 = (3 * VAR2->VAR21) / (2 * 8);
        FUN4(&VAR2->VAR17, 10, (VAR3 + 16383) / 16384);
        FUN4(&VAR2->VAR17, 1, 1);
        FUN4(&VAR2->VAR17, 1, 0);
        FUN4(&VAR2->VAR17, 1, 0);
        FUN2(VAR2, VAR22);
        FUN4(&VAR2->VAR17, 1, 0);
        VAR4 = VAR16[VAR2->VAR14];
        VAR7 = VAR2->VAR23 * VAR24;
        VAR2->VAR25 = VAR2->VAR23;
        FUN4(&VAR2->VAR17, 5, (VAR26)((VAR7 / (VAR4 * 3600)) % 24));
        FUN4(&VAR2->VAR17, 6, (VAR26)((VAR7 / (VAR4 * 60)) % 60));
        FUN4(&VAR2->VAR17, 1, 1);
        FUN4(&VAR2->VAR17, 6, (VAR26)((VAR7 / VAR4) % 60));
        FUN4(&VAR2->VAR17, 6, (VAR26)((VAR7 % VAR4) / VAR24));
        FUN4(&VAR2->VAR17, 1, 1);
        FUN4(&VAR2->VAR17, 1, 0);
    }
    if (VAR2->VAR15 < (24 * VAR24) && VAR2->VAR8 > 0)
    {
        VAR4 = VAR16[VAR2->VAR14];
        VAR6 = ((VAR2->VAR8 * VAR4) / VAR2->VAR15) - 1;
        while (VAR2->VAR23 < VAR6)
        {
            FUN5(VAR2, VAR2->VAR23 - VAR2->VAR25);
            VAR2->VAR23++;
        }
    }
    VAR2->VAR23++;
}