static int FUN1(VAR1 *VAR2, unsigned char *VAR3, int VAR4, const VAR5 *VAR6)
{
    VAR7 *VAR8 = VAR2->VAR9;
    VAR10 *VAR11;
    int VAR12, VAR13, VAR14;
    VAR8->VAR15 = VAR8->VAR16;
    VAR8->VAR17 = VAR8->VAR15 + sizeof(VAR8->VAR16);
    for (VAR12 = 0; VAR12 < VAR6->VAR18; VAR12++)
    {
        if (VAR6->VAR19[VAR12]->VAR20 != VAR21)
        {
            FUN2(VAR2, VAR22, "");
            return FUN3(VAR23);
        }
        VAR11 = FUN4(VAR8->VAR24, VAR6->VAR19[VAR12]->VAR25, 0, &VAR14);
        for (; VAR11 && VAR14--; VAR11++)
        {
            if (VAR2->VAR26->VAR27 == VAR28)
            {
                int VAR29, VAR30, VAR31, VAR32 = 10 * VAR11->VAR33;
                int VAR34, VAR35, VAR36, VAR37 = 10 * VAR11->VAR17;
                VAR29 = VAR32 / 3600000;
                VAR32 -= 3600000 * VAR29;
                VAR30 = VAR32 / 60000;
                VAR32 -= 60000 * VAR30;
                VAR31 = VAR32 / 1000;
                VAR32 -= 1000 * VAR31;
                VAR34 = VAR37 / 3600000;
                VAR37 -= 3600000 * VAR34;
                VAR35 = VAR37 / 60000;
                VAR37 -= 60000 * VAR35;
                VAR36 = VAR37 / 1000;
                VAR37 -= 1000 * VAR36;
                FUN5(VAR8, "", ++VAR8->VAR38, VAR29, VAR30, VAR31, VAR32, VAR34, VAR35, VAR36, VAR37);
            }
            VAR8->VAR39 = 0;
            VAR8->VAR40 = VAR8->VAR15 - 2;
            FUN6(VAR8, VAR11->VAR41);
            FUN7(&VAR42, VAR8, VAR11->VAR43);
        }
    }
    if (VAR8->VAR15 == VAR8->VAR16)
        return 0;
    VAR13 = FUN8(VAR3, VAR8->VAR16, VAR4);
    if (VAR13 > VAR4 - 1)
    {
        FUN2(VAR2, VAR22, "");
        return -1;
    }
    return VAR13;
}