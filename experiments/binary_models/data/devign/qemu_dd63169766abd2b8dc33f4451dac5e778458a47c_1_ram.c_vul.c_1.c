static void FUN1(void)
{
    VAR1 *VAR2;
    uint64_t VAR3 = VAR4;
    VAR5 *VAR6 = FUN2();
    int64_t VAR7;
    int64_t VAR8;
    VAR9++;
    if (!VAR10)
    {
        VAR10 = FUN3();
    }
    if (!VAR11)
    {
        VAR11 = FUN4(VAR12);
    }
    FUN5();
    FUN6(&VAR13);
    FUN7();
    FUN8(VAR2, &VAR14.VAR15, VAR16) { FUN9(VAR2->VAR17->VAR18, VAR2->VAR19); }
    FUN10();
    FUN11(VAR4 - VAR3);
    VAR20 += VAR4 - VAR3;
    VAR7 = FUN4(VAR12);
    if (VAR7 > VAR11 + 1000)
    {
        if (FUN12())
        {
            VAR8 = FUN3();
            if (VAR6->VAR21 && (VAR20 * VAR22 > (VAR8 - VAR10) / 2) && (VAR23++ > 4))
            {
                FUN13();
                VAR24 = true;
                VAR23 = 0;
            }
            VAR10 = VAR8;
        }
        else
        {
            VAR24 = false;
        }
        if (FUN14())
        {
            if (VAR25 != VAR26.VAR27)
            {
                VAR26.VAR28 = (double)(VAR26.VAR29 - VAR30) / (VAR26.VAR27 - VAR25);
            }
            VAR25 = VAR26.VAR27;
            VAR30 = VAR26.VAR29;
        }
        VAR6->VAR21 = VAR20 * 1000 / (VAR7 - VAR11);
        VAR6->VAR31 = VAR6->VAR21 * VAR22;
        VAR11 = VAR7;
        VAR20 = 0;
    }
    VAR6->VAR32 = VAR9;