static void FUN1(VAR1 *VAR2, VAR3 *VAR4)
{
    VAR5 *VAR6 = VAR2->VAR7;
    int VAR8, VAR9;
    switch (VAR6->VAR10)
    {
    case VAR11:
        FUN2(VAR2, VAR12, "");
        for (VAR8 = 0; VAR8 < VAR4->VAR13[0] * VAR4->VAR14; VAR8 += 4)
        {
            VAR15 *VAR16 = VAR4->VAR17[0] + VAR8;
            int VAR18 = VAR16[0];
            int VAR19 = VAR16[1];
            int VAR20 = VAR16[2];
            int VAR21 = VAR16[3];
            VAR16[0] = VAR18 * VAR21 / 255;
            VAR16[1] = VAR19 * VAR21 / 255;
            VAR16[2] = VAR20 * VAR21 / 255;
            VAR16[3] = 255;
        }
        break;
    case VAR22:
        FUN2(VAR2, VAR12, "");
        VAR9 = VAR6->VAR23 == 8 ? 0 : 3;
        for (VAR8 = 0; VAR8 < VAR4->VAR13[0] * VAR4->VAR14; VAR8 += 4)
        {
            VAR15 *VAR16 = VAR4->VAR17[0] + VAR8;
            int VAR24 = VAR16[VAR9];
            int VAR25 = VAR16[1];
            int VAR26 = 127;
            int VAR27 = (255 * 255 - VAR24 * VAR24 - VAR25 * VAR25) / 2;
            if (VAR27 > 0)
                VAR26 = FUN3(FUN4(VAR27));
            VAR16[0] = VAR24;
            VAR16[1] = VAR25;
            VAR16[2] = VAR26;
            VAR16[3] = 255;
        }
        break;
    case VAR28:
        FUN2(VAR2, VAR12, "");
        for (VAR8 = 0; VAR8 < VAR4->VAR13[0] * VAR4->VAR14; VAR8 += 4)
        {
            VAR15 *VAR16 = VAR4->VAR17[0] + VAR8;
            int VAR21 = VAR16[0];
            int VAR29 = VAR16[1] - 128;
            int VAR30 = VAR16[2] - 128;
            int VAR25 = VAR16[3];
            VAR16[0] = FUN5(VAR25 + VAR30 - VAR29);
            VAR16[1] = FUN5(VAR25 + VAR29);
            VAR16[2] = FUN5(VAR25 - VAR30 - VAR29);
            VAR16[3] = VAR21;
        }
        break;
    case VAR31:
        FUN2(VAR2, VAR12, "");
        FUN6(VAR4, 0, 1);
        break;
    case VAR32:
        FUN2(VAR2, VAR12, "");
        FUN6(VAR4, 1, 3);
        FUN6(VAR4, 2, 3);
        break;
    case VAR33:
        FUN2(VAR2, VAR12, "");
        FUN6(VAR4, 2, 3);
        break;
    case VAR34:
        FUN2(VAR2, VAR12, "");
        FUN6(VAR4, 1, 3);
        break;
    case VAR35:
        FUN2(VAR2, VAR12, "");
        FUN6(VAR4, 0, 3);
        break;
    case VAR36:
        FUN2(VAR2, VAR12, "");
        FUN6(VAR4, 2, 3);
        FUN6(VAR4, 0, 3);
        break;
    case VAR37:
        FUN2(VAR2, VAR12, "");
        FUN6(VAR4, 1, 3);
        FUN6(VAR4, 0, 3);
        FUN6(VAR4, 0, 1);
        break;
    case VAR38:
        FUN2(VAR2, VAR12, "");
        FUN6(VAR4, 1, 3);
        FUN6(VAR4, 0, 3);
        break;
    }
}