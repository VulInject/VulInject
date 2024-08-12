static int FUN1(VAR1 *VAR2, VAR3 *VAR4, const VAR5 *VAR6, int *VAR7)
{
    VAR8 *VAR9 = VAR2->VAR10;
    int VAR11, VAR12, VAR13, VAR14;
    VAR9->VAR15 = VAR9->VAR16;
    VAR9->VAR17 = 1 << VAR9->VAR15;
    FUN2(VAR2, VAR6);
    if (VAR9->VAR18)
    {
        float VAR19, VAR20;
        int VAR11;
        for (VAR11 = 0; VAR11 < VAR9->VAR17; VAR11++)
        {
            VAR19 = VAR9->VAR21[0][VAR11] * 0.5;
            VAR20 = VAR9->VAR21[1][VAR11] * 0.5;
            VAR9->VAR21[0][VAR11] = VAR19 + VAR20;
            VAR9->VAR21[1][VAR11] = VAR19 - VAR20;
            if ((VAR13 = FUN3(VAR2, VAR4, 2 * VAR22)) < 0)
                return VAR13;
            VAR12 = 128;
            for (VAR11 = 64; VAR11; VAR11 >>= 1)
            {
                VAR14 = FUN4(VAR9, VAR9->VAR21, VAR4->VAR23, VAR4->VAR24, VAR12 - VAR11);
                if (VAR14 <= 0)
                    VAR12 -= VAR11;
                while (VAR12 <= 128 && VAR14 > 0)
                    VAR14 = FUN4(VAR9, VAR9->VAR21, VAR4->VAR23, VAR4->VAR24, VAR12++);
                FUN5((FUN6(&VAR9->VAR25) & 7) == 0);
                VAR11 = VAR2->VAR26 - (FUN6(&VAR9->VAR25) + 7) / 8;
                FUN5(VAR11 >= 0);
                while (VAR11--)
                    FUN7(&VAR9->VAR25, 8, '');
                FUN8(&VAR9->VAR25);
                FUN5(FUN9(&VAR9->VAR25) - VAR9->VAR25.VAR27 == VAR2->VAR26);
                if (VAR6->VAR28 != VAR29)
                    VAR4->VAR28 = VAR6->VAR28 - FUN10(VAR2, VAR2->VAR30);
                VAR4->VAR24 = VAR2->VAR26;
                *VAR7 = 1;
                return 0;