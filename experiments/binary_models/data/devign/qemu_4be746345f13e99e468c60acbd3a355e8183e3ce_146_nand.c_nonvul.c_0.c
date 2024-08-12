static void FUN1(VAR1 *VAR2, VAR3 **VAR4)
{
    int VAR5;
    VAR6 *VAR7 = FUN2(VAR2);
    VAR7->VAR8 = VAR9[VAR7->VAR10].VAR11 >> 3;
    VAR7->VAR12 = VAR9[VAR7->VAR10].VAR12 << 20;
    if (VAR9[VAR7->VAR10].VAR13 & VAR14)
    {
        VAR7->VAR15 = 11;
        VAR7->VAR16 = 6;
    }
    else
    {
        VAR7->VAR15 = VAR9[VAR7->VAR10].VAR15;
        VAR7->VAR16 = VAR9[VAR7->VAR10].VAR16;
    }
    switch (1 << VAR7->VAR15)
    {
    case 256:
        FUN3(VAR7);
        break;
    case 512:
        FUN4(VAR7);
        break;
    case 2048:
        FUN5(VAR7);
        break;
    default:
        FUN6(VAR4, "", 1 << VAR7->VAR15);
        return;
    }
    VAR5 = 1 << VAR7->VAR17;
    VAR7->VAR18 = 1;
    if (VAR7->VAR19)
    {
        if (FUN7(VAR7->VAR19))
        {
            FUN6(VAR4, "");
            return;
        }
        if (FUN8(VAR7->VAR19) >= (VAR7->VAR20 << VAR7->VAR15) + (VAR7->VAR20 << VAR7->VAR17))
        {
            VAR5 = 0;
            VAR7->VAR18 = 0;
        }
    }
    else
    {
        VAR5 += 1 << VAR7->VAR15;
    }
    if (VAR5)
    {
        VAR7->VAR21 = (VAR22 *)memset(FUN9(VAR7->VAR20 * VAR5), 0xff, VAR7->VAR20 * VAR5);
    }
    VAR7->VAR23 = VAR7->VAR24;
}