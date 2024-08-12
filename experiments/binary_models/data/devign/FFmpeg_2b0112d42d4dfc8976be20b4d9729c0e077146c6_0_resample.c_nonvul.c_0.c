static int FUN1(VAR1 *VAR2, VAR3 *VAR4, int VAR5, VAR3 *VAR6, int VAR7, int *VAR8)
{
    int VAR9;
    int av_unused VAR10 = FUN2();
    int VAR11 = VAR2->VAR12 == VAR13 && VAR14 && (VAR10 & (VAR15 | VAR16)) == VAR15;
    int64_t VAR17 = (VAR18 / 2 / VAR2->VAR19) / VAR2->VAR20;
    if (VAR2->VAR21)
        VAR5 = FUN3(VAR5, VAR2->VAR21);
    VAR7 = FUN3(VAR7, VAR17);
    *VAR8 = 0;
    if (VAR2->VAR22 == 1 && VAR2->VAR19 == 1)
    {
        int64_t VAR23 = (1LL << 32) * VAR2->VAR24 / VAR2->VAR20 + (1LL << 32) * VAR2->VAR25;
        int64_t VAR26 = (1LL << 32) * VAR2->VAR27 / VAR2->VAR20;
        int VAR28 = (VAR7 * (VAR29)VAR2->VAR20 - VAR2->VAR24 + VAR2->VAR27 - 1) / VAR2->VAR27;
        VAR5 = FUN4(FUN3(VAR5, VAR28), 0);
        if (VAR5 > 0)
        {
            for (VAR9 = 0; VAR9 < VAR4->VAR30; VAR9++)
            {
                VAR2->VAR31.FUN5(VAR4->VAR32[VAR9], VAR6->VAR32[VAR9], VAR5, VAR23, VAR26);
                if (VAR9 + 1 == VAR4->VAR30)
                {
                    VAR2->VAR25 += VAR5 * VAR2->VAR33;
                    VAR2->VAR25 += (VAR2->VAR24 + VAR5 * (VAR29)VAR2->VAR34) / VAR2->VAR20;
                    FUN6(VAR2->VAR25 >= 0);
                    *VAR8 = VAR2->VAR25;
                    VAR2->VAR24 = (VAR2->VAR24 + VAR5 * (VAR29)VAR2->VAR34) % VAR2->VAR20;
                    VAR2->VAR25 = 0;
                }
            }
        }
    }
    else
    {
        int64_t VAR35 = (1LL + VAR7 - VAR2->VAR22) * VAR2->VAR19;
        int64_t VAR36 = (VAR35 - VAR2->VAR25) * VAR2->VAR20 - VAR2->VAR24;
        int VAR37 = (VAR36 + VAR2->VAR27 - 1) / VAR2->VAR27;
        int (*VAR38)(struct VAR1 * VAR2, void *VAR4, const void *VAR6, int VAR39, int VAR40);
        VAR5 = FUN4(FUN3(VAR5, VAR37), 0);
        if (VAR5 > 0)
        {
            VAR38 = (VAR2->VAR41 && (VAR2->VAR24 || VAR2->VAR34)) ? VAR2->VAR31.VAR42 : VAR2->VAR31.VAR43;
            for (VAR9 = 0; VAR9 < VAR4->VAR30; VAR9++)
                *VAR8 = FUN7(VAR2, VAR4->VAR32[VAR9], VAR6->VAR32[VAR9], VAR5, VAR9 + 1 == VAR4->VAR30);
        }
    }
    if (VAR11)
        FUN8();
    if (VAR2->VAR21)
    {
        VAR2->VAR21 -= VAR5;
        if (!VAR2->VAR21)
        {
            VAR2->VAR27 = VAR2->VAR44;
            VAR2->VAR33 = VAR2->VAR27 / VAR2->VAR20;
            VAR2->VAR34 = VAR2->VAR27 % VAR2->VAR20;
        }
    }
    return VAR5;
}