static void FUN1(VAR1 *VAR2)
{
    TCGv VAR3, VAR4;
    unsigned int VAR5;
    int VAR6 = FUN2(VAR2->VAR7);
    VAR5 = VAR2->VAR8 & ((1 << 9) - 1);
    switch (VAR5)
    {
    case 0x21:
        VAR3 = FUN3();
        FUN4("", VAR2->VAR9, VAR2->VAR10);
        FUN5(VAR3, VAR11[VAR2->VAR10], 1);
        if (VAR2->VAR9)
        {
            VAR4 = FUN3();
            FUN6(VAR2, VAR4);
            FUN7(VAR4, VAR4, 31);
            FUN8(VAR11[VAR2->VAR9], VAR11[VAR2->VAR10], 1);
            FUN9(VAR11[VAR2->VAR9], VAR11[VAR2->VAR9], VAR4);
            FUN10(VAR4);
        }
        FUN11(VAR2, VAR3);
        FUN10(VAR3);
        break;
    case 0x1:
    case 0x41:
        FUN4("", VAR2->VAR9, VAR2->VAR10);
        FUN11(VAR2, VAR11[VAR2->VAR10]);
        if (VAR2->VAR9)
        {
            if (VAR5 == 0x41)
                FUN8(VAR11[VAR2->VAR9], VAR11[VAR2->VAR10], 1);
            else
                FUN12(VAR11[VAR2->VAR9], VAR11[VAR2->VAR10], 1);
        }
        break;
    case 0x60:
        FUN4("", VAR2->VAR9, VAR2->VAR10);
        FUN13(VAR11[VAR2->VAR9], VAR11[VAR2->VAR10]);
        break;
    case 0x61:
        FUN4("", VAR2->VAR9, VAR2->VAR10);
        FUN14(VAR11[VAR2->VAR9], VAR11[VAR2->VAR10]);
        break;
    case 0x64:
    case 0x66:
    case 0x74:
    case 0x76:
        FUN4("", VAR2->VAR10);
        if ((VAR2->VAR12 & VAR13) && VAR6 == VAR14)
        {
            FUN15(VAR15[VAR16], VAR17);
            FUN16(VAR2, VAR18);
            return;
        }
        break;
    case 0x68:
        FUN4("", VAR2->VAR10);
        if ((VAR2->VAR12 & VAR13) && VAR6 == VAR14)
        {
            FUN15(VAR15[VAR16], VAR17);
            FUN16(VAR2, VAR18);
            return;
        }
        break;
    case 0xe0:
        if ((VAR2->VAR12 & VAR13) && (VAR2->VAR7->VAR19.VAR20[2] & VAR21) && !((VAR2->VAR7->VAR19.VAR20[2] & VAR22)))
        {
            FUN15(VAR15[VAR16], VAR23);
            FUN16(VAR2, VAR18);
        }
        if (VAR2->VAR7->VAR19.VAR20[2] & VAR22)
        {
            FUN17(VAR11[VAR2->VAR9], VAR11[VAR2->VAR10]);
        }
        break;
    case 0x1e0:
        FUN4("", VAR2->VAR9, VAR2->VAR10);
        FUN18(VAR11[VAR2->VAR9], VAR11[VAR2->VAR10]);
        break;
    case 0x1e2:
        FUN4("", VAR2->VAR9, VAR2->VAR10);
        FUN19(VAR11[VAR2->VAR9], VAR11[VAR2->VAR10], 16);
        break;
    default:
        FUN20(VAR2->VAR7, "", VAR2->VAR24, VAR5, VAR2->VAR9, VAR2->VAR10, VAR2->VAR25);
        break;
    }
}