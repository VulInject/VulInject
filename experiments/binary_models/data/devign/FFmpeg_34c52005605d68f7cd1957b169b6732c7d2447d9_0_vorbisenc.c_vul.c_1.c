static int FUN1(VAR1 *VAR2, VAR3 *VAR4)
{
    VAR5 *VAR6;
    VAR7 *VAR8;
    VAR9 *VAR10;
    int VAR11, VAR12, VAR13;
    VAR2->VAR14 = VAR4->VAR14;
    VAR2->VAR15 = VAR4->VAR15;
    VAR2->VAR16[0] = VAR2->VAR16[1] = 11;
    VAR2->VAR17 = FUN2(VAR18);
    VAR2->VAR19 = FUN3(sizeof(VAR20) * VAR2->VAR17);
    if (!VAR2->VAR19)
        return FUN4(VAR21);
    for (VAR12 = 0; VAR12 < VAR2->VAR17; VAR12++)
    {
        VAR20 *VAR22 = &VAR2->VAR19[VAR12];
        int VAR23;
        VAR22->VAR24 = VAR18[VAR12].VAR25;
        VAR22->VAR26 = VAR18[VAR12].VAR27;
        VAR22->VAR28 = VAR18[VAR12].VAR28;
        VAR22->VAR29 = VAR18[VAR12].VAR29;
        VAR22->VAR30 = VAR18[VAR12].VAR30;
        VAR22->VAR31 = 0;
        VAR22->VAR32 = FUN5(VAR22->VAR26, sizeof(VAR33));
        VAR22->VAR34 = FUN5(VAR22->VAR26, sizeof(VAR35));
        if (!VAR22->VAR32 || !VAR22->VAR34)
            return FUN4(VAR21);
        memcpy(VAR22->VAR32, VAR18[VAR12].VAR36, VAR18[VAR12].VAR37);
        memset(VAR22->VAR32 + VAR18[VAR12].VAR37, 0, VAR22->VAR26 - VAR18[VAR12].VAR37);
        if (VAR22->VAR30)
        {
            VAR23 = FUN6(VAR22->VAR30, VAR22->VAR24, VAR22->VAR26);
            VAR22->VAR38 = FUN5(VAR23, sizeof(int));
            if (!VAR22->VAR38)
                return FUN4(VAR21);
            for (VAR11 = 0; VAR11 < VAR23; VAR11++)
                VAR22->VAR38[VAR11] = VAR18[VAR12].VAR39[VAR11];
        }
        else
        {
            VAR22->VAR38 = NULL;
        }
        if ((VAR13 = FUN7(VAR22)) < 0)
            return VAR13;
    }
    VAR2->VAR40 = 1;
    VAR2->VAR41 = FUN3(sizeof(VAR5) * VAR2->VAR40);
    if (!VAR2->VAR41)
        return FUN4(VAR21);
    VAR6 = &VAR2->VAR41[0];
    VAR6->VAR42 = VAR43;
    VAR6->VAR44 = FUN3(sizeof(int) * VAR6->VAR42);
    if (!VAR6->VAR44)
        return FUN4(VAR21);
    VAR6->VAR45 = 0;
    for (VAR11 = 0; VAR11 < VAR6->VAR42; VAR11++)
    {
        static const int VAR46[] = {0, 1, 2, 2, 3, 3, 4, 4};
        VAR6->VAR44[VAR11] = VAR46[VAR11];
        VAR6->VAR45 = FUN8(VAR6->VAR45, VAR6->VAR44[VAR11]);
    }
    VAR6->VAR45++;
    VAR6->VAR47 = FUN5(VAR6->VAR45, sizeof(VAR48));
    if (!VAR6->VAR47)
        return FUN4(VAR21);
    for (VAR11 = 0; VAR11 < VAR6->VAR45; VAR11++)
    {
        VAR48 *VAR49 = &VAR6->VAR47[VAR11];
        int VAR50, VAR51;
        VAR49->VAR25 = VAR52[VAR11].VAR25;
        VAR49->VAR53 = VAR52[VAR11].VAR53;
        VAR49->VAR54 = VAR52[VAR11].VAR54;
        VAR51 = (1 << VAR49->VAR53);
        VAR49->VAR51 = FUN5(VAR51, sizeof(int));
        if (!VAR49->VAR51)
            return FUN4(VAR21);
        for (VAR50 = 0; VAR50 < VAR51; VAR50++)
            VAR49->VAR51[VAR50] = VAR52[VAR11].VAR55[VAR50];
    }
    VAR6->VAR56 = 2;
    VAR6->VAR57 = VAR2->VAR16[0] - 1;
    VAR6->VAR58 = 2;
    for (VAR11 = 0; VAR11 < VAR6->VAR42; VAR11++)
        VAR6->VAR58 += VAR6->VAR47[VAR6->VAR44[VAR11]].VAR25;
    VAR6->VAR59 = FUN5(VAR6->VAR58, sizeof(VAR60));
    if (!VAR6->VAR59)
        return FUN4(VAR21);
    VAR6->VAR59[0].VAR61 = 0;
    VAR6->VAR59[1].VAR61 = 1 << VAR6->VAR57;
    for (VAR11 = 2; VAR11 < VAR6->VAR58; VAR11++)
    {
        static const int VAR46[] = {93, 23, 372, 6, 46, 186, 750, 14, 33, 65, 130, 260, 556, 3, 10, 18, 28, 39, 55, 79, 111, 158, 220, 312, 464, 650, 850};
        VAR6->VAR59[VAR11].VAR61 = VAR46[VAR11 - 2];
    }
    if (FUN9(VAR4, VAR6->VAR59, VAR6->VAR58))
        return VAR62;
    VAR2->VAR63 = 1;
    VAR2->VAR64 = FUN3(sizeof(VAR7) * VAR2->VAR63);
    if (!VAR2->VAR64)
        return FUN4(VAR21);
    VAR8 = &VAR2->VAR64[0];
    VAR8->VAR65 = 2;
    VAR8->VAR66 = 0;
    VAR8->VAR67 = 1600;
    VAR8->VAR68 = 32;
    VAR8->VAR69 = 10;
    VAR8->VAR70 = 15;
    VAR8->VAR51 = FUN3(sizeof(*VAR8->VAR51) * VAR8->VAR69);
    if (!VAR8->VAR51)
        return FUN4(VAR21);
    {
        static const int8_t VAR46[10][8] = {
            {
                -1,
                -1,
                -1,
                -1,
                -1,
                -1,
                -1,
                -1,
            },
            {
                -1,
                -1,
                16,
                -1,
                -1,
                -1,
                -1,
                -1,
            },
            {
                -1,
                -1,
                17,
                -1,
                -1,
                -1,
                -1,
                -1,
            },
            {
                -1,
                -1,
                18,
                -1,
                -1,
                -1,
                -1,
                -1,
            },
            {
                -1,
                -1,
                19,
                -1,
                -1,
                -1,
                -1,
                -1,
            },
            {
                -1,
                -1,
                20,
                -1,
                -1,
                -1,
                -1,
                -1,
            },
            {
                -1,
                -1,
                21,
                -1,
                -1,
                -1,
                -1,
                -1,
            },
            {
                22,
                23,
                -1,
                -1,
                -1,
                -1,
                -1,
                -1,
            },
            {
                24,
                25,
                -1,
                -1,
                -1,
                -1,
                -1,
                -1,
            },
            {
                26,
                27,
                28,
                -1,
                -1,
                -1,
                -1,
                -1,
            },
        };
        memcpy(VAR8->VAR51, VAR46, sizeof VAR46);
    }
    if ((VAR13 = FUN10(VAR8, VAR2)) < 0)
        return VAR13;
    VAR2->VAR71 = 1;
    VAR2->VAR72 = FUN3(sizeof(VAR9) * VAR2->VAR71);
    if (!VAR2->VAR72)
        return FUN4(VAR21);
    VAR10 = &VAR2->VAR72[0];
    VAR10->VAR73 = 1;
    VAR10->VAR74 = FUN3(sizeof(int) * VAR2->VAR14);
    if (!VAR10->VAR74)
        return FUN4(VAR21);
    for (VAR11 = 0; VAR11 < VAR2->VAR14; VAR11++)
        VAR10->VAR74[VAR11] = 0;
    VAR10->VAR75 = FUN3(sizeof(int) * VAR10->VAR73);
    VAR10->VAR76 = FUN3(sizeof(int) * VAR10->VAR73);
    if (!VAR10->VAR75 || !VAR10->VAR76)
        return FUN4(VAR21);
    for (VAR11 = 0; VAR11 < VAR10->VAR73; VAR11++)
    {
        VAR10->VAR75[VAR11] = 0;
        VAR10->VAR76[VAR11] = 0;
    }
    VAR10->VAR77 = VAR2->VAR14 == 2 ? 1 : 0;
    VAR10->VAR78 = FUN3(sizeof(int) * VAR10->VAR77);
    VAR10->VAR79 = FUN3(sizeof(int) * VAR10->VAR77);
    if (!VAR10->VAR78 || !VAR10->VAR79)
        return FUN4(VAR21);
    if (VAR10->VAR77)
    {
        VAR10->VAR78[0] = 0;
        VAR10->VAR79[0] = 1;
    }
    VAR2->VAR80 = 1;
    VAR2->VAR81 = FUN3(sizeof(VAR82) * VAR2->VAR80);
    if (!VAR2->VAR81)
        return FUN4(VAR21);
    VAR2->VAR81[0].VAR83 = 0;
    VAR2->VAR81[0].VAR84 = 0;
    VAR2->VAR85 = 0;
    VAR2->VAR86 = FUN5(sizeof(float) * VAR2->VAR14, (1 << VAR2->VAR16[1]) / 2);
    VAR2->VAR87 = FUN5(sizeof(float) * VAR2->VAR14, (1 << VAR2->VAR16[1]));
    VAR2->VAR75 = FUN5(sizeof(float) * VAR2->VAR14, (1 << VAR2->VAR16[1]) / 2);
    VAR2->VAR88 = FUN5(sizeof(float) * VAR2->VAR14, (1 << VAR2->VAR16[1]) / 2);
    if (!VAR2->VAR86 || !VAR2->VAR87 || !VAR2->VAR75 || !VAR2->VAR88)
        return FUN4(VAR21);
    if ((VAR13 = FUN11(VAR4, VAR2)) < 0)
        return VAR13;
    return 0;
}