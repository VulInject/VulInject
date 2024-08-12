static int FUN1(VAR1 *VAR2, VAR3 *VAR4)
{
    VAR5 *VAR6 = VAR2->VAR7;
    VAR8 *VAR9;
    int64_t VAR10;
    VAR11 *VAR12;
    int64_t VAR13, VAR14;
    int VAR15, VAR16;
    int VAR17 = VAR4->VAR17;
    VAR12 = VAR2->VAR18[VAR4->VAR19]->VAR12;
    VAR9 = &VAR6->VAR18[VAR4->VAR19];
    if (VAR12->VAR20 == VAR21)
        VAR17 &= ~VAR22;
    VAR14 = (VAR4->VAR14 != VAR23) ? VAR4->VAR14 : VAR4->VAR24;
    assert(VAR14 != VAR23);
    VAR10 = VAR14 * 10000;
    VAR6->VAR10 = FUN2(VAR6->VAR10, VAR10 + VAR4->VAR10 * 10000);
    VAR13 = VAR6->VAR25;
    FUN3(VAR2, VAR9, VAR2->VAR18[VAR4->VAR19], VAR4->VAR24, VAR4->VAR26, VAR4->VAR27, VAR17);
    if ((!VAR6->VAR28) && (VAR17 & VAR22))
    {
        VAR15 = (int)(VAR10 / FUN4(10000000));
        if (VAR15 != (int)(VAR6->VAR29 / FUN4(10000000)))
        {
            for (VAR16 = VAR6->VAR30; VAR16 < VAR15; VAR16++)
            {
                if (VAR16 >= VAR6->VAR31)
                {
                    VAR6->VAR31 += VAR32;
                    VAR6->VAR33 = (VAR34 *)FUN5(VAR6->VAR33, sizeof(VAR34) * VAR6->VAR31);
                }
                VAR6->VAR33[VAR16].VAR35 = (VAR36)VAR13;
                VAR6->VAR33[VAR16].VAR37 = (VAR38)(VAR6->VAR25 - VAR13);
                VAR6->VAR39 = FUN2(VAR6->VAR39, (VAR38)(VAR6->VAR25 - VAR13));
            }
            VAR6->VAR30 = VAR15;
            VAR6->VAR29 = VAR10;
        }
    }
    return 0;
}