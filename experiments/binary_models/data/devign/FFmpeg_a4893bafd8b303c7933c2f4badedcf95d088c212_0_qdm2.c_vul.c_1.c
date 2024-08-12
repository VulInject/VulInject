static int FUN1(VAR1 *VAR2)
{
    VAR3 *VAR4 = VAR2->VAR5;
    VAR6 *VAR7;
    int VAR8;
    int VAR9, VAR10, VAR11;
    int VAR12;
    float VAR13;
    if (!VAR2->VAR7 || (VAR2->VAR8 < 48))
    {
        FUN2(VAR2, VAR14, "");
        return -1;
    }
    VAR7 = VAR2->VAR7;
    VAR8 = VAR2->VAR8;
    while (VAR8 > 7)
    {
        if (!memcmp(VAR7, "", 7))
            break;
        VAR7++;
        VAR8--;
    }
    if (VAR8 < 12)
    {
        FUN2(VAR2, VAR14, "", VAR8);
        return -1;
    }
    if (memcmp(VAR7, "", 7))
    {
        FUN2(VAR2, VAR14, "");
        return -1;
    }
    if (VAR7[7] == '')
    {
        FUN2(VAR2, VAR14, "");
        return -1;
    }
    VAR7 += 8;
    VAR8 -= 8;
    VAR11 = FUN3(VAR7);
    if (VAR11 > VAR8)
    {
        FUN2(VAR2, VAR14, "", VAR8, VAR11);
        return -1;
    }
    VAR7 += 4;
    FUN2(VAR2, VAR15, "", VAR11);
    if (FUN3(VAR7) != FUN4('', '', '', ''))
    {
        FUN2(VAR2, VAR14, "");
        return -1;
    }
    VAR7 += 8;
    VAR2->VAR16 = VAR4->VAR17 = VAR4->VAR16 = FUN3(VAR7);
    VAR7 += 4;
    VAR2->VAR18 = FUN3(VAR7);
    VAR7 += 4;
    VAR2->VAR19 = FUN3(VAR7);
    VAR7 += 4;
    VAR4->VAR20 = FUN3(VAR7);
    VAR7 += 4;
    VAR4->VAR21 = FUN3(VAR7);
    VAR7 += 4;
    VAR4->VAR22 = FUN3(VAR7);
    VAR7 += 4;
    VAR4->VAR23 = FUN5(VAR4->VAR21) + 1;
    VAR4->VAR24 = 2 * VAR4->VAR21;
    VAR4->VAR25 = FUN5(VAR4->VAR20) + 1;
    VAR4->VAR26 = VAR4->VAR20 / 16;
    if (VAR4->VAR23 == 8)
        VAR4->VAR27 = 1;
    else
        VAR4->VAR27 = 2;
    VAR4->VAR28 = 255 / (1 << (2 - VAR4->VAR27));
    switch ((VAR4->VAR27 * 2 + VAR4->VAR16 - 1))
    {
    case 0:
        VAR10 = 40;
        break;
    case 1:
        VAR10 = 48;
        break;
    case 2:
        VAR10 = 56;
        break;
    case 3:
        VAR10 = 72;
        break;
    case 4:
        VAR10 = 80;
        break;
    case 5:
        VAR10 = 100;
        break;
    default:
        VAR10 = VAR4->VAR27;
        break;
    }
    VAR9 = 0;
    if ((VAR10 * 1000) < VAR2->VAR19)
        VAR9 = 1;
    if ((VAR10 * 1440) < VAR2->VAR19)
        VAR9 = 2;
    if ((VAR10 * 1760) < VAR2->VAR19)
        VAR9 = 3;
    if ((VAR10 * 2240) < VAR2->VAR19)
        VAR9 = 4;
    VAR4->VAR29 = VAR9;
    if (VAR4->VAR27 == 0)
        VAR10 = 16000;
    else
        VAR10 = ((-(VAR4->VAR27 - 1)) & 8000) + 20000;
    if (VAR10 < 8000)
        VAR4->VAR30 = 0;
    else if (VAR10 <= 16000)
        VAR4->VAR30 = 1;
    else
        VAR4->VAR30 = 2;
    if (VAR4->VAR23 != 8 && VAR4->VAR23 != 9)
        FUN2(VAR2, VAR14, "", VAR4->VAR23);
    FUN6(&VAR4->VAR31, VAR4->VAR23 - 1, 1);
    for (VAR12 = 1; VAR12 < (1 << (VAR4->VAR23 - 2)); VAR12++)
    {
        VAR13 = 2 * VAR32 * (float)VAR12 / (float)(1 << (VAR4->VAR23 - 1));
        VAR4->VAR33[VAR12].VAR34 = FUN7(VAR13);
        VAR4->VAR33[VAR12].VAR35 = FUN8(VAR13);
    }
    FUN9(VAR4);
    return 0;
}