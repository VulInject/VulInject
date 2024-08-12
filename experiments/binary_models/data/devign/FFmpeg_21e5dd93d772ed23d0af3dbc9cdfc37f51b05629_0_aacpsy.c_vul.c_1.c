static void FUN1(VAR1 *VAR2, int VAR3, const float *VAR4, const VAR5 *VAR6)
{
    VAR7 *VAR8 = (VAR7 *)VAR2->VAR9;
    VAR10 *VAR11 = &VAR8->VAR12[VAR3];
    int VAR13 = 0;
    int VAR14, VAR15, VAR16;
    float VAR17, VAR18, VAR19, VAR20, VAR21[128] = {0};
    float VAR22 = 0.0f, VAR23 = 0.0f, VAR24 = 0.0f;
    float VAR25 = VAR8->VAR26 > 32000 ? 0.0f : FUN2(50.0f, 100.0f - VAR8->VAR26 * 100.0f / 32000.0f);
    const int VAR27 = VAR2->VAR27[VAR6->VAR28 == 8];
    const VAR29 *VAR30 = VAR2->VAR31[VAR6->VAR28 == 8];
    VAR32 *VAR33 = VAR8->VAR34[VAR6->VAR28 == 8];
    const float VAR35 = VAR6->VAR28 == 8 ? VAR36 : VAR37;
    for (VAR15 = 0; VAR15 < VAR6->VAR28 * 16; VAR15 += 16)
    {
        for (VAR16 = 0; VAR16 < VAR27; VAR16++)
        {
            VAR38 *VAR39 = &VAR11->VAR39[VAR15 + VAR16];
            float VAR40 = 0.0f;
            VAR39->VAR41 = 0.0f;
            for (VAR14 = 0; VAR14 < VAR30[VAR16]; VAR14++)
            {
                VAR39->VAR41 += VAR4[VAR13 + VAR14] * VAR4[VAR13 + VAR14];
                VAR40 += FUN3(FUN4(VAR4[VAR13 + VAR14]));
            }
            VAR39->VAR42 = VAR39->VAR41 * 0.001258925f;
            VAR39->VAR43 = VAR40 / FUN5(VAR39->VAR41 / VAR30[VAR16], 0.25f);
            VAR13 += VAR30[VAR16];
        }
    }
    for (VAR15 = 0; VAR15 < VAR6->VAR28 * 16; VAR15 += 16)
    {
        VAR38 *VAR31 = &VAR11->VAR39[VAR15];
        VAR21[0] = VAR31[0].VAR41;
        for (VAR16 = 1; VAR16 < VAR27; VAR16++)
        {
            VAR31[VAR16].VAR42 = FUN2(VAR31[VAR16].VAR42, VAR31[VAR16 - 1].VAR42 * VAR33[VAR16].VAR44[0]);
            VAR21[VAR15 + VAR16] = FUN2(VAR31[VAR16].VAR41, VAR21[VAR15 + VAR16 - 1] * VAR33[VAR16].VAR44[1]);
        }
        for (VAR16 = VAR27 - 2; VAR16 >= 0; VAR16--)
        {
            VAR31[VAR16].VAR42 = FUN2(VAR31[VAR16].VAR42, VAR31[VAR16 + 1].VAR42 * VAR33[VAR16].VAR45[0]);
            VAR21[VAR15 + VAR16] = FUN2(VAR21[VAR15 + VAR16], VAR21[VAR15 + VAR16 + 1] * VAR33[VAR16].VAR45[1]);
        }
        for (VAR16 = 0; VAR16 < VAR27; VAR16++)
        {
            VAR38 *VAR39 = &VAR31[VAR16];
            VAR39->VAR46 = VAR39->VAR42 = FUN2(VAR39->VAR42, VAR33[VAR16].VAR47);
            if (!(VAR6->VAR48[0] == VAR49 || (VAR6->VAR48[1] == VAR50 && !VAR15)))
                VAR39->VAR42 = FUN2(VAR51 * VAR39->VAR42, FUN6(VAR39->VAR42, VAR52 * VAR11->VAR53[VAR15 + VAR16].VAR46));
            VAR25 += FUN7(VAR39);
            VAR22 += VAR39->VAR54;
            VAR23 += VAR39->VAR23;
            if (VAR21[VAR15 + VAR16] * VAR35 > VAR39->VAR41 || VAR33[VAR16].VAR55 > 1.0f)
                VAR39->VAR56 = VAR57;
            else
                VAR39->VAR56 = VAR58;
        }
    }
    VAR2->VAR12[VAR3].VAR59 = VAR25;
    VAR17 = FUN8(VAR8, VAR25, VAR2->VAR60.VAR61, VAR2->VAR60.VAR62, VAR6->VAR28 == 8);
    VAR18 = FUN9(VAR17);
    if (VAR2->VAR60.VAR61 > 0)
        VAR18 *= FUN10(VAR8->VAR25.VAR63 / FUN9(VAR2->VAR60.VAR61), 0.85f, 1.15f);
    VAR8->VAR25.VAR63 = FUN9(VAR17);
    if (VAR18 < VAR25)
    {
        for (VAR15 = 0; VAR15 < VAR6->VAR28 * 16; VAR15 += 16)
        {
            VAR20 = FUN11(VAR22, VAR18, VAR25, VAR23);
            VAR25 = 0.0f;
            VAR22 = 0.0f;
            VAR23 = 0.0f;
            for (VAR16 = 0; VAR16 < VAR27; VAR16++)
            {
                VAR38 *VAR39 = &VAR11->VAR39[VAR15 + VAR16];
                VAR39->VAR42 = FUN12(VAR39, VAR33[VAR16].VAR55, VAR20);
                VAR25 += FUN7(VAR39);
                VAR22 += VAR39->VAR54;
                VAR23 += VAR39->VAR23;
            }
        }
        for (VAR14 = 0; VAR14 < 2; VAR14++)
        {
            float VAR64 = 0.0f, VAR65;
            VAR23 = VAR22 = 0.0f;
            for (VAR15 = 0; VAR15 < VAR6->VAR28 * 16; VAR15 += 16)
            {
                for (VAR16 = 0; VAR16 < VAR27; VAR16++)
                {
                    VAR38 *VAR39 = &VAR11->VAR39[VAR15 + VAR16];
                    if (VAR39->VAR56 != VAR66)
                    {
                        VAR64 += VAR39->VAR25;
                        VAR22 += VAR39->VAR54;
                        VAR23 += VAR39->VAR23;
                    }
                }
            }
            VAR65 = FUN2(VAR18 - (VAR25 - VAR64), 0.0f);
            if (VAR23 > 0.0f)
                VAR20 += FUN11(VAR22, VAR65, VAR64, VAR23);
            VAR25 = 0.0f;
            for (VAR15 = 0; VAR15 < VAR6->VAR28 * 16; VAR15 += 16)
            {
                for (VAR16 = 0; VAR16 < VAR27; VAR16++)
                {
                    VAR38 *VAR39 = &VAR11->VAR39[VAR15 + VAR16];
                    if (VAR23 > 0.0f)
                        VAR39->VAR42 = FUN12(VAR39, VAR33[VAR16].VAR55, VAR20);
                    VAR25 += FUN7(VAR39);
                    VAR39->VAR24 = VAR39->VAR23 / VAR39->VAR42;
                    VAR24 += VAR39->VAR24;
                }
            }
            VAR19 = VAR18 - VAR25;
            if (FUN4(VAR19) > 0.05f * VAR18)
                break;
        }
        if (VAR25 < 1.15f * VAR18)
        {
            VAR24 = 1.0f / VAR24;
            for (VAR15 = 0; VAR15 < VAR6->VAR28 * 16; VAR15 += 16)
            {
                for (VAR16 = 0; VAR16 < VAR27; VAR16++)
                {
                    VAR38 *VAR39 = &VAR11->VAR39[VAR15 + VAR16];
                    if (VAR39->VAR23 > 0.5f)
                    {
                        float VAR67 = VAR39->VAR24 * VAR24 * VAR19;
                        float VAR42 = VAR39->VAR42;
                        VAR42 *= FUN5(2.0f, VAR67 / VAR39->VAR23);
                        if (VAR42 > VAR33[VAR16].VAR55 * VAR39->VAR41 && VAR39->VAR56 == VAR58)
                            VAR42 = FUN2(VAR39->VAR42, VAR33[VAR16].VAR55 * VAR39->VAR41);
                        VAR39->VAR42 = VAR42;
                    }
                }
            }
        }
        else
        {
            VAR16 = VAR27;
            while (VAR25 > VAR18 && VAR16--)
            {
                for (VAR15 = 0; VAR15 < VAR6->VAR28 * 16; VAR15 += 16)
                {
                    VAR38 *VAR39 = &VAR11->VAR39[VAR15 + VAR16];
                    if (VAR39->VAR56 != VAR57 && VAR33[VAR16].VAR55 < VAR68)
                    {
                        VAR33[VAR16].VAR55 = VAR68;
                        VAR39->VAR42 = VAR39->VAR41 * VAR68;
                        VAR25 += VAR39->VAR23 * 1.5f - VAR39->VAR25;
                    }
                }
            }
        }
    }
    for (VAR15 = 0; VAR15 < VAR6->VAR28 * 16; VAR15 += 16)
    {
        for (VAR16 = 0; VAR16 < VAR27; VAR16++)
        {
            VAR38 *VAR39 = &VAR11->VAR39[VAR15 + VAR16];
            VAR69 *VAR70 = &VAR2->VAR12[VAR3].VAR71[VAR15 + VAR16];
            VAR70->VAR72 = VAR39->VAR42;
            VAR70->VAR41 = VAR39->VAR41;
        }
    }
    memcpy(VAR11->VAR53, VAR11->VAR39, sizeof(VAR11->VAR39));
}