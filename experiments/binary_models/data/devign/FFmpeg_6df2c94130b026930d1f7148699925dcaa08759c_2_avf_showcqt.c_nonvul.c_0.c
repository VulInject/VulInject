static void FUN1(VAR1 *VAR2, VAR1 *VAR3, const VAR4 *VAR5, int VAR6)
{
    int VAR7 = VAR2->VAR8, VAR9, VAR10, VAR11, VAR12 = VAR3->VAR13, VAR14 = VAR3->VAR15;
    int VAR16 = (VAR7 == VAR17) ? VAR6 / 2 : VAR6;
    float VAR18, VAR19 = 1.0f / 255.0f;
    VAR20 *VAR21 = VAR2->VAR22[0], *VAR23 = VAR2->VAR22[1], *VAR24 = VAR2->VAR22[2];
    VAR20 *VAR25 = VAR3->VAR22[0], *VAR26 = VAR3->VAR22[1], *VAR27 = VAR3->VAR22[2], *VAR28 = VAR3->VAR22[3];
    int VAR29 = VAR2->VAR30[0], VAR31 = VAR2->VAR30[1], VAR32 = VAR2->VAR30[2];
    int VAR33 = VAR3->VAR30[0], VAR34 = VAR3->VAR30[1], VAR35 = VAR3->VAR30[2], VAR36 = VAR3->VAR30[3];
    VAR20 *VAR37, *VAR38, *VAR39, *VAR40, *VAR41, *VAR42, *VAR43;
    for (VAR10 = 0; VAR10 < VAR14; VAR10 += 2)
    {
        VAR11 = (VAR7 == VAR17) ? VAR10 / 2 : VAR10;
        VAR37 = VAR21 + (VAR6 + VAR10) * VAR29;
        VAR38 = VAR23 + (VAR16 + VAR11) * VAR31;
        VAR39 = VAR24 + (VAR16 + VAR11) * VAR32;
        VAR40 = VAR25 + VAR10 * VAR33;
        VAR41 = VAR26 + VAR11 * VAR34;
        VAR42 = VAR27 + VAR11 * VAR35;
        VAR43 = VAR28 + VAR10 * VAR36;
        for (VAR9 = 0; VAR9 < VAR12; VAR9 += 2)
        {
            VAR18 = VAR19 * (*VAR43++);
            *VAR37++ = VAR18 * (*VAR40++) + (1.0f - VAR18) * (VAR5[VAR9].VAR44.VAR10 + 16.0f) + 0.5f;
            *VAR38++ = VAR18 * (*VAR41++) + (1.0f - VAR18) * (VAR5[VAR9].VAR44.VAR45 + 128.0f) + 0.5f;
            *VAR39++ = VAR18 * (*VAR42++) + (1.0f - VAR18) * (VAR5[VAR9].VAR44.VAR46 + 128.0f) + 0.5f;
            VAR18 = VAR19 * (*VAR43++);
            *VAR37++ = VAR18 * (*VAR40++) + (1.0f - VAR18) * (VAR5[VAR9 + 1].VAR44.VAR10 + 16.0f) + 0.5f;
            if (VAR7 == VAR47)
            {
                *VAR38++ = VAR18 * (*VAR41++) + (1.0f - VAR18) * (VAR5[VAR9 + 1].VAR44.VAR45 + 128.0f) + 0.5f;
                *VAR39++ = VAR18 * (*VAR42++) + (1.0f - VAR18) * (VAR5[VAR9 + 1].VAR44.VAR46 + 128.0f) + 0.5f;
            }
        }
        VAR37 = VAR21 + (VAR6 + VAR10 + 1) * VAR29;
        VAR38 = VAR23 + (VAR6 + VAR10 + 1) * VAR31;
        VAR39 = VAR24 + (VAR6 + VAR10 + 1) * VAR32;
        VAR40 = VAR25 + (VAR10 + 1) * VAR33;
        VAR41 = VAR26 + (VAR10 + 1) * VAR34;
        VAR42 = VAR27 + (VAR10 + 1) * VAR35;
        VAR43 = VAR28 + (VAR10 + 1) * VAR36;
        for (VAR9 = 0; VAR9 < VAR2->VAR13; VAR9 += 2)
        {
            VAR18 = VAR19 * (*VAR43++);
            *VAR37++ = VAR18 * (*VAR40++) + (1.0f - VAR18) * (VAR5[VAR9].VAR44.VAR10 + 16.0f) + 0.5f;
            if (VAR7 != VAR17)
            {
                *VAR38++ = VAR18 * (*VAR41++) + (1.0f - VAR18) * (VAR5[VAR9].VAR44.VAR45 + 128.0f) + 0.5f;
                *VAR39++ = VAR18 * (*VAR42++) + (1.0f - VAR18) * (VAR5[VAR9].VAR44.VAR46 + 128.0f) + 0.5f;
            }
            VAR18 = VAR19 * (*VAR43++);
            *VAR37++ = VAR18 * (*VAR40++) + (1.0f - VAR18) * (VAR5[VAR9 + 1].VAR44.VAR10 + 16.0f) + 0.5f;
            if (VAR7 == VAR47)
            {
                *VAR38++ = VAR18 * (*VAR41++) + (1.0f - VAR18) * (VAR5[VAR9 + 1].VAR44.VAR45 + 128.0f) + 0.5f;
                *VAR39++ = VAR18 * (*VAR42++) + (1.0f - VAR18) * (VAR5[VAR9 + 1].VAR44.VAR46 + 128.0f) + 0.5f;
            }
        }
    }
}