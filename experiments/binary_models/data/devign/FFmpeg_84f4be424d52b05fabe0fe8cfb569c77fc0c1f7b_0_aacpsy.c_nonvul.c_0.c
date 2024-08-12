static void FUN1(VAR1 *VAR2, int VAR3, const float *VAR4, const VAR5 *VAR6)
{
    VAR7 *VAR8 = (VAR7 *)VAR2->VAR9;
    VAR10 *VAR11 = &VAR8->VAR12[VAR3];
    int VAR13, VAR14, VAR15;
    float VAR16, VAR17, VAR18, VAR19 = VAR20, VAR21[128] = {0};
    float VAR22 = 0.0f, VAR23 = 0.0f, VAR24 = 0.0f;
    float VAR25 = VAR8->VAR26 > 32000 ? 0.0f : FUN2(50.0f, 100.0f - VAR8->VAR26 * 100.0f / 32000.0f);
    const int VAR27 = VAR2->VAR27[VAR6->VAR28 == 8];
    const VAR29 *VAR30 = VAR2->VAR31[VAR6->VAR28 == 8];
    VAR32 *VAR33 = VAR8->VAR34[VAR6->VAR28 == 8];
    const float VAR35 = VAR6->VAR28 == 8 ? VAR36 : VAR37;
    FUN3(VAR6, VAR27, VAR11, VAR30, VAR4);
    for (VAR14 = 0; VAR14 < VAR6->VAR28 * 16; VAR14 += 16)
    {
        VAR38 *VAR31 = &VAR11->VAR39[VAR14];
        VAR21[0] = VAR31[0].VAR40;
        for (VAR15 = 1; VAR15 < VAR27; VAR15++)
        {
            VAR31[VAR15].VAR41 = FUN2(VAR31[VAR15].VAR41, VAR31[VAR15 - 1].VAR41 * VAR33[VAR15].VAR42[0]);
            VAR21[VAR14 + VAR15] = FUN2(VAR31[VAR15].VAR40, VAR21[VAR14 + VAR15 - 1] * VAR33[VAR15].VAR42[1]);
        }
        for (VAR15 = VAR27 - 2; VAR15 >= 0; VAR15--)
        {
            VAR31[VAR15].VAR41 = FUN2(VAR31[VAR15].VAR41, VAR31[VAR15 + 1].VAR41 * VAR33[VAR15].VAR43[0]);
            VAR21[VAR14 + VAR15] = FUN2(VAR21[VAR14 + VAR15], VAR21[VAR14 + VAR15 + 1] * VAR33[VAR15].VAR43[1]);
        }
        for (VAR15 = 0; VAR15 < VAR27; VAR15++)
        {
            VAR38 *VAR39 = &VAR31[VAR15];
            VAR39->VAR44 = VAR39->VAR41 = FUN2(VAR39->VAR41, VAR33[VAR15].VAR45);
            if (!(VAR6->VAR46[0] == VAR47 || (VAR6->VAR46[1] == VAR48 && !VAR14)))
                VAR39->VAR41 = FUN2(VAR49 * VAR39->VAR41, FUN4(VAR39->VAR41, VAR50 * VAR11->VAR51[VAR14 + VAR15].VAR44));
            VAR25 += FUN5(VAR39);
            VAR22 += VAR39->VAR52;
            VAR23 += VAR39->VAR23;
            if (VAR21[VAR14 + VAR15] * VAR35 > VAR39->VAR40 || VAR33[VAR15].VAR53 > 1.0f)
                VAR39->VAR54 = VAR55;
            else
                VAR39->VAR54 = VAR56;
        }
    }
    VAR2->VAR12[VAR3].VAR57 = VAR25;
    VAR16 = FUN6(VAR8, VAR25, VAR2->VAR58.VAR59, VAR2->VAR58.VAR60, VAR6->VAR28 == 8);
    VAR17 = FUN7(VAR16);
    if (VAR2->VAR58.VAR59 > 0)
        VAR17 *= FUN8(VAR8->VAR25.VAR61 / FUN7(VAR2->VAR58.VAR59), 0.85f, 1.15f);
    VAR8->VAR25.VAR61 = FUN7(VAR16);
    if (VAR17 < VAR25)
    {
        for (VAR14 = 0; VAR14 < VAR6->VAR28 * 16; VAR14 += 16)
        {
            VAR19 = FUN9(VAR22, VAR17, VAR25, VAR23);
            VAR25 = 0.0f;
            VAR22 = 0.0f;
            VAR23 = 0.0f;
            for (VAR15 = 0; VAR15 < VAR27; VAR15++)
            {
                VAR38 *VAR39 = &VAR11->VAR39[VAR14 + VAR15];
                VAR39->VAR41 = FUN10(VAR39, VAR33[VAR15].VAR53, VAR19);
                VAR25 += FUN5(VAR39);
                VAR22 += VAR39->VAR52;
                VAR23 += VAR39->VAR23;
            }
        }
        for (VAR13 = 0; VAR13 < 2; VAR13++)
        {
            float VAR62 = 0.0f, VAR63;
            VAR23 = VAR22 = 0.0f;
            for (VAR14 = 0; VAR14 < VAR6->VAR28 * 16; VAR14 += 16)
            {
                for (VAR15 = 0; VAR15 < VAR27; VAR15++)
                {
                    VAR38 *VAR39 = &VAR11->VAR39[VAR14 + VAR15];
                    if (VAR39->VAR54 != VAR64)
                    {
                        VAR62 += VAR39->VAR25;
                        VAR22 += VAR39->VAR52;
                        VAR23 += VAR39->VAR23;
                    }
                }
            }
            VAR63 = FUN2(VAR17 - (VAR25 - VAR62), 0.0f);
            if (VAR23 > 0.0f)
                VAR19 = FUN9(VAR22, VAR63, VAR62, VAR23);
            VAR25 = 0.0f;
            for (VAR14 = 0; VAR14 < VAR6->VAR28 * 16; VAR14 += 16)
            {
                for (VAR15 = 0; VAR15 < VAR27; VAR15++)
                {
                    VAR38 *VAR39 = &VAR11->VAR39[VAR14 + VAR15];
                    if (VAR23 > 0.0f)
                        VAR39->VAR41 = FUN10(VAR39, VAR33[VAR15].VAR53, VAR19);
                    VAR25 += FUN5(VAR39);
                    VAR39->VAR24 = VAR39->VAR23 / VAR39->VAR41;
                    VAR24 += VAR39->VAR24;
                }
            }
            VAR18 = VAR17 - VAR25;
            if (FUN11(VAR18) > 0.05f * VAR17)
                break;
        }
        if (VAR25 < 1.15f * VAR17)
        {
            VAR24 = 1.0f / VAR24;
            for (VAR14 = 0; VAR14 < VAR6->VAR28 * 16; VAR14 += 16)
            {
                for (VAR15 = 0; VAR15 < VAR27; VAR15++)
                {
                    VAR38 *VAR39 = &VAR11->VAR39[VAR14 + VAR15];
                    if (VAR39->VAR23 > 0.5f)
                    {
                        float VAR65 = VAR39->VAR24 * VAR24 * VAR18;
                        float VAR41 = VAR39->VAR41;
                        VAR41 *= FUN12(VAR65 / VAR39->VAR23);
                        if (VAR41 > VAR33[VAR15].VAR53 * VAR39->VAR40 && VAR39->VAR54 == VAR56)
                            VAR41 = FUN2(VAR39->VAR41, VAR33[VAR15].VAR53 * VAR39->VAR40);
                        VAR39->VAR41 = VAR41;
                    }
                }
            }
        }
        else
        {
            VAR15 = VAR27;
            while (VAR25 > VAR17 && VAR15--)
            {
                for (VAR14 = 0; VAR14 < VAR6->VAR28 * 16; VAR14 += 16)
                {
                    VAR38 *VAR39 = &VAR11->VAR39[VAR14 + VAR15];
                    if (VAR39->VAR54 != VAR55 && VAR33[VAR15].VAR53 < VAR66)
                    {
                        VAR33[VAR15].VAR53 = VAR66;
                        VAR39->VAR41 = VAR39->VAR40 * VAR66;
                        VAR25 += VAR39->VAR23 * 1.5f - VAR39->VAR25;
                    }
                }
            }
        }
    }
    for (VAR14 = 0; VAR14 < VAR6->VAR28 * 16; VAR14 += 16)
    {
        for (VAR15 = 0; VAR15 < VAR27; VAR15++)
        {
            VAR38 *VAR39 = &VAR11->VAR39[VAR14 + VAR15];
            VAR67 *VAR68 = &VAR2->VAR12[VAR3].VAR69[VAR14 + VAR15];
            VAR68->VAR70 = VAR39->VAR41;
            VAR68->VAR40 = VAR39->VAR40;
        }
    }
    memcpy(VAR11->VAR51, VAR11->VAR39, sizeof(VAR11->VAR39));
}