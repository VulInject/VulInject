static int FUN1(VAR1 *VAR2, enum BandType VAR3[120], int VAR4[120], VAR5 *VAR6, VAR7 *VAR8)
{
    int VAR9, VAR10 = 0;
    const int VAR11 = (VAR8->VAR12[0] == VAR13) ? 3 : 5;
    for (VAR9 = 0; VAR9 < VAR8->VAR14; VAR9++)
    {
        int VAR15 = 0;
        while (VAR15 < VAR8->VAR16)
        {
            uint8_t VAR17 = VAR15;
            int VAR18;
            int VAR19 = FUN2(VAR6, 4);
            if (VAR19 == 12)
            {
                FUN3(VAR2->VAR20, VAR21, "");
                return -1;
            }
            do
            {
                VAR18 = FUN2(VAR6, VAR11);
                VAR17 += VAR18;
                if (FUN4(VAR6) < 0)
                {
                    FUN3(VAR2->VAR20, VAR21, VAR22);
                    return -1;
                }
                if (VAR17 > VAR8->VAR16)
                {
                    FUN3(VAR2->VAR20, VAR21, "", VAR17, VAR8->VAR16);
                    return -1;
                }
            } while (VAR18 == (1 << VAR11) - 1);
            for (; VAR15 < VAR17; VAR15++)
            {
                VAR3[VAR10] = VAR19;
                VAR4[VAR10++] = VAR17;
            }
        }
    }
    return 0;
}