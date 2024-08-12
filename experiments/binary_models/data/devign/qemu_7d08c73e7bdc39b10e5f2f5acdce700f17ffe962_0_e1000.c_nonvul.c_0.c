FUN1(VAR1 *VAR2)
{
    uint16_t VAR3;
    unsigned int VAR4 = VAR2->VAR5.VAR6, VAR7, VAR8;
    struct VAR9 *VAR10 = &VAR2->VAR5;
    if (VAR10->VAR11.VAR12 && VAR10->VAR13)
    {
        VAR7 = VAR10->VAR11.VAR14;
        FUN2(VAR15, "", VAR4, VAR10->VAR16, VAR7);
        if (VAR10->VAR11.VAR17)
        {
            FUN3(VAR10->VAR18 + VAR7 + 2, VAR10->VAR16 - VAR7);
            FUN3(VAR10->VAR18 + VAR7 + 4, FUN4(VAR10->VAR18 + VAR7 + 4) + VAR4);
        }
        else
        {
            FUN3(VAR10->VAR18 + VAR7 + 4, VAR10->VAR16 - VAR7);
        }
        VAR7 = VAR10->VAR11.VAR19;
        VAR3 = VAR10->VAR16 - VAR7;
        FUN2(VAR15, "", VAR10->VAR11.VAR20, VAR7, VAR3);
        if (VAR10->VAR11.VAR20)
        {
            VAR8 = VAR4 * VAR10->VAR11.VAR21;
            FUN5(VAR10->VAR18 + VAR7 + 4, FUN6(VAR10->VAR18 + VAR7 + 4) + VAR8);
            if (VAR10->VAR11.VAR22 - VAR8 > VAR10->VAR11.VAR21)
            {
                VAR10->VAR18[VAR7 + 13] &= ~9;
            }
            else if (VAR4)
            {
                FUN7(VAR2->VAR23, VAR24);
            }
        }
        else
            FUN3(VAR10->VAR18 + VAR7 + 4, VAR3);
        if (VAR10->VAR25 & VAR26)
        {
            unsigned int VAR27;
            void *VAR28 = VAR10->VAR18 + VAR10->VAR11.VAR29;
            VAR27 = FUN4(VAR28) + VAR3;
            VAR27 = (VAR27 >> 16) + (VAR27 & 0xffff);
            FUN3(VAR28, VAR27);
        }
        VAR10->VAR6++;
    }
    if (VAR10->VAR25 & VAR26)
    {
        FUN8(VAR10->VAR18, VAR10->VAR16, VAR10->VAR11.VAR29, VAR10->VAR11.VAR19, VAR10->VAR11.VAR30);
    }
    if (VAR10->VAR25 & VAR31)
    {
        FUN8(VAR10->VAR18, VAR10->VAR16, VAR10->VAR11.VAR32, VAR10->VAR11.VAR14, VAR10->VAR11.VAR33);
    }
    if (VAR10->VAR34)
    {
        memmove(VAR10->VAR35, VAR10->VAR18, 4);
        memmove(VAR10->VAR18, VAR10->VAR18 + 4, 8);
        memcpy(VAR10->VAR18 + 8, VAR10->VAR36, 4);
        FUN9(VAR2, VAR10->VAR35, VAR10->VAR16 + 4);
    }
    else
    {
        FUN9(VAR2, VAR10->VAR18, VAR10->VAR16);
    }
    FUN7(VAR2->VAR23, VAR37);
    FUN10(VAR2->VAR23, VAR38, VAR2->VAR5.VAR16);
    VAR2->VAR23[VAR39] = VAR2->VAR23[VAR37];
    VAR2->VAR23[VAR40] = VAR2->VAR23[VAR38];
    VAR2->VAR23[VAR41] = VAR2->VAR23[VAR42];
}