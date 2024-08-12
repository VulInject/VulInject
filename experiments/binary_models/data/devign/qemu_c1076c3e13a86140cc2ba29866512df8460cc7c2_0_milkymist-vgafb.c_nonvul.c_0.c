static void FUN1(void *VAR1)
{
    VAR2 *VAR3 = VAR1;
    VAR4 *VAR5;
    VAR6 *VAR7 = FUN2(VAR3->VAR8);
    int VAR9;
    int VAR10 = 0;
    int VAR11 = 0;
    drawfn VAR12;
    if (!FUN3(VAR3))
    {
        return;
    }
    VAR5 = FUN4(VAR3);
    int VAR13 = VAR3->VAR14[VAR15];
    switch (FUN5(VAR7))
    {
    case 0:
        return;
    case 8:
        VAR12 = VAR16;
        break;
    case 15:
        VAR12 = VAR17;
        VAR13 *= 2;
        break;
    case 16:
        VAR12 = VAR18;
        VAR13 *= 2;
        break;
    case 24:
        VAR12 = VAR19;
        VAR13 *= 3;
        break;
    case 32:
        VAR12 = VAR20;
        VAR13 *= 4;
        break;
    default:
        FUN6("");
        break;
    }
    VAR9 = VAR3->VAR14[VAR15] * 2;
    if (VAR3->VAR21)
    {
        FUN7(&VAR3->VAR22, FUN8(VAR5), VAR3->VAR14[VAR23] + VAR3->VAR24, VAR3->VAR14[VAR25], VAR9);
    }
    FUN9(VAR7, &VAR3->VAR22, VAR3->VAR14[VAR15], VAR3->VAR14[VAR25], VAR9, VAR13, 0, VAR3->VAR21, VAR12, NULL, &VAR10, &VAR11);
    if (VAR10 >= 0)
    {
        FUN10(VAR3->VAR8, 0, VAR10, VAR3->VAR14[VAR15], VAR11 - VAR10 + 1);
    }
    VAR3->VAR21 = 0;
}