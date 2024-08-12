static void FUN1(void *VAR1, VAR2 *VAR3, int VAR4)
{
    VAR5 *VAR6 = VAR1;
    int VAR7, VAR8;
    int VAR9;
    int VAR10 = FUN2(NULL, VAR6->VAR11.VAR12, 1, VAR6->VAR11.VAR13, 1);
    double VAR14;
    VAR15 = FUN3();
    while (VAR4 > 0)
    {
        if (VAR6->VAR16 >= VAR6->VAR17)
        {
            VAR7 = FUN4(VAR6, &VAR14);
            if (VAR7 < 0)
            {
                VAR6->VAR18 = VAR6->VAR19;
                VAR6->VAR17 = sizeof(VAR6->VAR19) / VAR10 * VAR10;
            }
            else
            {
                if (VAR6->VAR20 != VAR21)
                    FUN5(VAR6, (VAR22 *)VAR6->VAR18, VAR7);
                VAR6->VAR17 = VAR7;
            }
            VAR6->VAR16 = 0;
        }
        VAR8 = VAR6->VAR17 - VAR6->VAR16;
        if (VAR8 > VAR4)
            VAR8 = VAR4;
        memcpy(VAR3, (VAR23 *)VAR6->VAR18 + VAR6->VAR16, VAR8);
        VAR4 -= VAR8;
        VAR3 += VAR8;
        VAR6->VAR16 += VAR8;
    }
    VAR9 = VAR6->VAR11.VAR24 * VAR6->VAR11.VAR12 * FUN6(VAR6->VAR11.VAR13);
    VAR6->VAR25 = VAR6->VAR17 - VAR6->VAR16;
    VAR6->VAR26 = VAR6->VAR27 - (double)(2 * VAR6->VAR28 + VAR6->VAR25) / VAR9;
    VAR6->VAR29 = VAR6->VAR26 - VAR15 / 1000000.0;
    if (VAR6->VAR30.VAR31 == VAR6->VAR32)
        FUN7(VAR6, VAR6->VAR26);
}