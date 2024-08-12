static int FUN1(VAR1 *VAR2)
{
    VAR3 *VAR4 = VAR5;
    ram_addr_t VAR6 = VAR7;
    int VAR8 = -1;
    VAR9 *VAR10;
    ram_addr_t VAR11;
    if (!VAR4)
        VAR4 = FUN2(&VAR12.VAR13);
    do
    {
        VAR10 = VAR4->VAR10;
        if (FUN3(VAR10, VAR6, VAR14, VAR15))
        {
            VAR16 *VAR17;
            int VAR18 = (VAR4 == VAR5) ? VAR19 : 0;
            FUN4(VAR10, VAR6, VAR14, VAR15);
            VAR17 = FUN5(VAR10) + VAR6;
            if (FUN6(VAR17))
            {
                FUN7(VAR2, VAR4, VAR6, VAR18, VAR20);
                FUN8(VAR2, *VAR17);
                VAR8 = 1;
            }
            else if (FUN9())
            {
                VAR11 = VAR4->VAR6 + VAR6;
                VAR8 = FUN10(VAR2, VAR17, VAR11, VAR4, VAR6, VAR18);
                VAR17 = FUN11(VAR21.VAR22, VAR11);
            }
            if (VAR8 == -1)
            {
                FUN7(VAR2, VAR4, VAR6, VAR18, VAR23);
                FUN12(VAR2, VAR17, VAR14);
                VAR8 = VAR14;
            }
            if (VAR8 != 0)
            {
                break;
            }
        }
        VAR6 += VAR14;
        if (VAR6 >= VAR4->VAR24)
        {
            VAR6 = 0;
            VAR4 = FUN13(VAR4, VAR25);
            if (!VAR4)
                VAR4 = FUN2(&VAR12.VAR13);
        }
    } while (VAR4 != VAR5 || VAR6 != VAR7);
    VAR5 = VAR4;
    VAR7 = VAR6;
    return VAR8;
}