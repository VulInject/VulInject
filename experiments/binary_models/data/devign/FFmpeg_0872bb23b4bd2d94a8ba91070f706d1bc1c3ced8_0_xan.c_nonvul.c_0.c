static int FUN1(VAR1 *VAR2, void *VAR3, int *VAR4, VAR5 *VAR6)
{
    const VAR7 *VAR8 = VAR6->VAR3;
    int VAR9, VAR10 = VAR6->VAR11;
    VAR12 *VAR13 = VAR2->VAR14;
    if (VAR2->VAR15->VAR16 == VAR17)
    {
        const VAR7 *VAR18 = VAR8 + VAR10;
        int VAR19 = 0;
        while (VAR18 - VAR8 > 8 && VAR19 != VAR20)
        {
            unsigned *VAR21;
            uint32_t VAR22;
            int VAR11;
            int VAR23;
            VAR19 = FUN2(&VAR8);
            VAR11 = FUN3(&VAR8);
            VAR11 = FUN4(VAR11, VAR18 - VAR8);
            switch (VAR19)
            {
            case VAR24:
                if (VAR11 < VAR25)
                    return VAR26;
                if (VAR13->VAR27 >= VAR28)
                    return VAR26;
                VAR21 = FUN5(VAR13->VAR29, (VAR13->VAR27 + 1) * VAR30);
                if (!VAR21)
                    return FUN6(VAR31);
                VAR13->VAR29 = VAR21;
                VAR21 += VAR13->VAR27 * VAR32;
                for (VAR23 = 0; VAR23 < VAR33; VAR23++)
                {
                    int VAR34 = FUN7(*VAR8++);
                    int VAR35 = FUN7(*VAR8++);
                    int VAR36 = FUN7(*VAR8++);
                    int VAR34 = VAR37[*VAR8++];
                    int VAR35 = VAR37[*VAR8++];
                    int VAR36 = VAR37[*VAR8++];
                    *VAR21++ = (VAR34 << 16) | (VAR35 << 8) | VAR36;
                }
                VAR13->VAR27++;
                break;
            case VAR38:
                if (VAR11 < 4)
                    return VAR26;
                VAR22 = FUN2(&VAR8);
                if (VAR22 < VAR13->VAR27)
                {
                    VAR13->VAR39 = VAR22;
                }
                else
                    FUN8(VAR2, VAR40, "");
                break;
            case VAR20:
                break;
            default:
                VAR8 += VAR11;
                break;
            }
        }
        VAR10 = VAR18 - VAR8;
    }
    if ((VAR9 = VAR2->FUN9(VAR2, &VAR13->VAR41)))
    {
        FUN8(VAR13->VAR2, VAR40, "");
        return VAR9;
    }
    VAR13->VAR41.VAR42 = 3;
    if (!VAR13->VAR43)
        VAR13->VAR43 = VAR13->VAR41.VAR44[0] * VAR13->VAR2->VAR45;
    memcpy(VAR13->VAR41.VAR3[1], VAR13->VAR29 + VAR13->VAR39 * VAR32, VAR30);
    VAR13->VAR8 = VAR8;
    VAR13->VAR11 = VAR10;
    if (FUN10(VAR13) < 0)
        return VAR26;
    if (VAR13->VAR46.VAR3[0])
        VAR2->FUN11(VAR2, &VAR13->VAR46);
    *VAR4 = sizeof(VAR47);
    *(VAR47 *)VAR3 = VAR13->VAR41;
    FUN12(VAR47, VAR13->VAR41, VAR13->VAR46);
    return VAR10;
}