static int FUN1(VAR1 *VAR2, void *VAR3, int *VAR4, VAR5 *VAR6)
{
    VAR7 *VAR8 = VAR3;
    VAR9 *VAR10 = VAR2->VAR11;
    int VAR12;
    uint16_t VAR13;
    if (VAR6->VAR14 < 8)
    {
        if ((VAR12 = FUN2(VAR2, VAR8, 0)) < 0)
            return VAR12;
        VAR13 = FUN3(VAR6->VAR3 + 4);
        if (VAR13 == VAR15)
        {
            FUN4(VAR2, VAR6->VAR3, VAR6->VAR14);
            VAR8->VAR16 = 1;
        }
        else if (VAR13 == VAR17)
        {
            FUN5(VAR2, VAR6->VAR3 + 12, VAR6->VAR14 - 12);
            memcpy(VAR10->VAR18, VAR10->VAR19, VAR10->VAR20 * VAR10->VAR21);
            if (VAR10->VAR22 == 0x4a)
                memcpy(VAR10->VAR23, VAR10->VAR19, VAR10->VAR20 * VAR10->VAR21);
            else
                FUN6(VAR2);
            FUN7(VAR2, VAR8);
            VAR8->VAR24 = VAR25;
            VAR8->VAR26 = 1;
            memcpy(VAR8->VAR3[1], VAR10->VAR27, 256 * 4);
            *VAR4 = 1;
        }
        else if (VAR13 == VAR28)
        {
            if (VAR10->VAR22 == 0x4a)
            {
                FUN8(VAR2, VAR6->VAR3 + 8, VAR6->VAR14 - 8);
                memcpy(VAR10->VAR23, VAR10->VAR19, VAR10->VAR20 * VAR10->VAR21);
            }
            else
            {
                FUN9(VAR2, VAR6->VAR3 + 8, VAR6->VAR14 - 8);
                FUN6(VAR2);
                FUN7(VAR2, VAR8);
                VAR8->VAR24 = VAR29;
                VAR8->VAR26 = 0;
                memcpy(VAR8->VAR3[1], VAR10->VAR27, 256 * 4);
                *VAR4 = 1;
                FUN10(VAR10);
            }
            else
            {
                FUN11(VAR2, VAR30, "", VAR13);
                return VAR6->VAR14;