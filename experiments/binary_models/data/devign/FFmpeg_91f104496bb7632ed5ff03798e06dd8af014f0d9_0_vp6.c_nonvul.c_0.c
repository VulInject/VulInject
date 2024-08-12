static int FUN1(VAR1 *VAR2, const VAR3 *VAR4, int VAR5, int *VAR6)
{
    VAR7 *VAR8 = &VAR2->VAR8;
    int VAR9 = 0;
    int VAR10 = 0;
    int VAR11 = 0;
    int VAR12;
    int VAR13, VAR14;
    int VAR15 = 1;
    int VAR16 = VAR4[0] & 1;
    VAR2->VAR17[VAR18]->VAR19 = !(VAR4[0] & 0x80);
    FUN2(VAR2, (VAR4[0] >> 1) & 0x3F);
    if (VAR2->VAR17[VAR18]->VAR19)
    {
        VAR12 = VAR4[1] >> 3;
        if (VAR12 > 8)
            return 0;
        VAR2->VAR20 = VAR4[1] & 0x06;
        if (VAR4[1] & 1)
        {
            FUN3(VAR2->VAR21, VAR22, "");
            return 0;
        }
        if (VAR16 || !VAR2->VAR20)
        {
            VAR10 = FUN4(VAR4 + 2) - 2;
            VAR4 += 2;
            VAR5 -= 2;
        }
        VAR13 = VAR4[2];
        VAR14 = VAR4[3];
        if (!VAR2->VAR23 || 16 * VAR14 != VAR2->VAR21->VAR24 || 16 * VAR13 != VAR2->VAR21->VAR25)
        {
            FUN5(VAR2->VAR21, 16 * VAR14, 16 * VAR13);
            if (VAR2->VAR21->VAR26 == 1)
            {
                VAR2->VAR21->VAR27 -= VAR2->VAR21->VAR28[0] >> 4;
                VAR2->VAR21->VAR29 -= VAR2->VAR21->VAR28[0] & 0x0F;
            }
            VAR15 = 2;
        }
        FUN6(VAR8, VAR4 + 6, VAR5 - 6);
        FUN7(VAR8, 2);
        VAR9 = VAR2->VAR20;
        if (VAR12 < 8)
            VAR11 = 5;
        VAR2->VAR12 = VAR12;
    }
    else
    {
        if (!VAR2->VAR12)
            return 0;
        if (VAR16 || !VAR2->VAR20)
        {
            VAR10 = FUN4(VAR4 + 1) - 2;
            VAR4 += 2;
            VAR5 -= 2;
        }
        FUN6(VAR8, VAR4 + 1, VAR5 - 1);
        *VAR6 = FUN8(VAR8);
        if (VAR2->VAR20)
        {
            VAR2->VAR30 = FUN8(VAR8);
            if (VAR2->VAR30)
                FUN8(VAR8);
            if (VAR2->VAR12 > 7)
                VAR9 = FUN8(VAR8);
        }
    }
    if (VAR9)
    {
        if (FUN8(VAR8))
        {
            VAR2->VAR31 = 2;
            VAR2->VAR32 = FUN7(VAR8, 5) << VAR11;
            VAR2->VAR33 = 2 << FUN7(VAR8, 3);
        }
        else if (FUN8(VAR8))
        {
            VAR2->VAR31 = 1;
        }
        else
        {
            VAR2->VAR31 = 0;
        }
        if (VAR2->VAR12 > 7)
            VAR2->VAR34 = FUN7(VAR8, 4);
        else
            VAR2->VAR34 = 16;
    }
    VAR2->VAR35 = FUN8(VAR8);
    VAR2->VAR36 = VAR37;
    if (VAR10)
    {
        VAR4 += VAR10;
        VAR5 -= VAR10;
        if (VAR5 < 0)
        {
            if (VAR2->VAR17[VAR18]->VAR19)
                FUN5(VAR2->VAR21, 0, 0);
            return 0;
        }
        if (VAR2->VAR35)
        {
            VAR2->VAR36 = VAR38;
            FUN9(&VAR2->VAR39, VAR4, VAR5 << 3);
        }
        else
        {
            FUN6(&VAR2->VAR40, VAR4, VAR5);
            VAR2->VAR41 = &VAR2->VAR40;
        }
    }
    else
    {
        VAR2->VAR41 = &VAR2->VAR8;
    }
    return VAR15;
}