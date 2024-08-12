static VAR1 FUN1(VAR2 *VAR3, TCGv VAR4, int VAR5)
{
    TCGv VAR6;
    int VAR7;
    switch (VAR5)
    {
    case 255:
        FUN2(VAR8);
        break;
    case 254:
        FUN3(VAR8, VAR4);
        break;
    case 253:
        VAR6 = FUN4(1);
        FUN5(VAR6, VAR8, -FUN6(VAR9, VAR10) + FUN6(VAR11, VAR12));
        return FUN7(VAR3, VAR13, 0);
    case 252:
        FUN8(VAR4);
        return VAR14;
    case 251:
        FUN9(VAR8, VAR4);
        break;
    case 7:
        FUN10(VAR4, VAR8, FUN6(VAR15, VAR16));
        FUN11(VAR8);
        return VAR14;
    case 32 ... 39:
        VAR5 = VAR5 == 39 ? 25 : VAR5 - 32 + 8;
        FUN12(VAR17[VAR5], VAR4);
        break;
    case 0:
        FUN13(VAR4, VAR18);
        break;
    case 1:
        FUN13(VAR4, VAR19);
        break;
    default:
        VAR7 = FUN14(VAR5);
        if (VAR7 != 0)
        {
            if (VAR7 & VAR20)
            {
                FUN5(VAR4, VAR8, VAR7 & ~VAR20);
            }
            else
            {
                FUN10(VAR4, VAR8, VAR7);
            }
        }
        break;
    }
    return VAR21;
}