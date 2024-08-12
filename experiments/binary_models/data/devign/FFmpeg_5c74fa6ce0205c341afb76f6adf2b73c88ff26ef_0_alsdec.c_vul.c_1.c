static int FUN1(VAR1 *VAR2, VAR3 *VAR4, VAR5 **VAR6, int *VAR7, unsigned int VAR8, int VAR9)
{
    VAR5 *VAR10 = VAR6[VAR9];
    unsigned int VAR11 = 0;
    unsigned int VAR12 = VAR2->VAR13->VAR12;
    if (VAR7[VAR9])
        return 0;
    VAR7[VAR9] = 1;
    while (VAR11 < VAR12 && !VAR10[VAR11].VAR14)
    {
        FUN1(VAR2, VAR4, VAR6, VAR7, VAR8, VAR10[VAR11].VAR15);
        VAR11++;
    }
    if (VAR11 == VAR12)
    {
        FUN2(VAR2->VAR13, VAR16, "");
        return VAR17;
    }
    VAR4->VAR18 = VAR2->VAR18 + VAR9;
    VAR4->VAR19 = VAR2->VAR19 + VAR9;
    VAR4->VAR20 = VAR2->VAR20 + VAR9;
    VAR4->VAR21 = VAR2->VAR21 + VAR9;
    VAR4->VAR22 = VAR2->VAR22 + VAR9;
    VAR4->VAR23 = VAR2->VAR23 + VAR9;
    VAR4->VAR24 = VAR2->VAR24[VAR9];
    VAR4->VAR25 = VAR2->VAR25[VAR9];
    VAR4->VAR26 = VAR2->VAR26[VAR9];
    VAR4->VAR27 = VAR2->VAR27[VAR9] + VAR8;
    VAR11 = 0;
    while (!VAR10[VAR11].VAR14)
    {
        unsigned int VAR28;
        unsigned int VAR29 = 1;
        unsigned int VAR30 = VAR4->VAR31 - 1;
        int64_t VAR32;
        VAR33 *VAR34 = VAR2->VAR27[VAR10[VAR11].VAR15] + VAR8;
        if (VAR10[VAR11].VAR35)
        {
            int VAR36 = VAR10[VAR11].VAR37;
            if (VAR10[VAR11].VAR38)
            {
                VAR36 = -VAR36;
                VAR29 -= VAR36;
            }
            else
            {
                VAR30 -= VAR36;
            }
            for (VAR28 = VAR29; VAR28 < VAR30; VAR28++)
            {
                VAR32 = (1 << 6) + FUN3(VAR10[VAR11].VAR39[0], VAR34[VAR28 - 1]) + FUN3(VAR10[VAR11].VAR39[1], VAR34[VAR28]) + FUN3(VAR10[VAR11].VAR39[2], VAR34[VAR28 + 1]) + FUN3(VAR10[VAR11].VAR39[3], VAR34[VAR28 - 1 + VAR36]) + FUN3(VAR10[VAR11].VAR39[4], VAR34[VAR28 + VAR36]) + FUN3(VAR10[VAR11].VAR39[5], VAR34[VAR28 + 1 + VAR36]);
                VAR4->VAR27[VAR28] += VAR32 >> 7;
            }
        }
        else
        {
            for (VAR28 = VAR29; VAR28 < VAR30; VAR28++)
            {
                VAR32 = (1 << 6) + FUN3(VAR10[VAR11].VAR39[0], VAR34[VAR28 - 1]) + FUN3(VAR10[VAR11].VAR39[1], VAR34[VAR28]) + FUN3(VAR10[VAR11].VAR39[2], VAR34[VAR28 + 1]);
                VAR4->VAR27[VAR28] += VAR32 >> 7;
            }
        }
        VAR11++;
    }
    return 0;
}