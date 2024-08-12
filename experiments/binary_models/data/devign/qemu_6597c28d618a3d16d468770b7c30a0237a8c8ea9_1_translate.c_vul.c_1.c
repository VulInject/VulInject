static void FUN1(VAR1 *VAR2, uint32_t VAR3)
{
    uint32_t VAR4;
    uint32_t VAR5, VAR6, VAR7;
    VAR4 = FUN2(VAR3, 0, 8);
    VAR5 = FUN2(VAR3, 16, 5);
    VAR6 = FUN2(VAR3, 11, 5);
    VAR7 = FUN2(VAR3, 21, 5);
    switch (VAR4)
    {
    case 0x00:
        FUN3("", VAR7, VAR5, VAR6);
        FUN4(VAR8[VAR7], VAR9, VAR8[VAR5], VAR8[VAR6]);
        break;
    case 0x01:
        FUN3("", VAR7, VAR5, VAR6);
        FUN5(VAR8[VAR7], VAR9, VAR8[VAR5], VAR8[VAR6]);
        break;
    case 0x02:
        FUN3("", VAR7, VAR5, VAR6);
        if (VAR5 != 0 && VAR6 != 0)
        {
            FUN6(VAR8[VAR7], VAR9, VAR8[VAR5], VAR8[VAR6]);
        }
        else
        {
            FUN7(VAR10, VAR10, VAR11);
            FUN8(VAR8[VAR7], 0x0);
        }
        break;
    case 0x03:
        FUN3("", VAR7, VAR5, VAR6);
        FUN9(VAR8[VAR7], VAR9, VAR8[VAR5], VAR8[VAR6]);
        break;
    case 0x04:
        FUN3("", VAR7, VAR5);
        FUN10(VAR8[VAR7], VAR9, VAR8[VAR5]);
        break;
    case 0x05:
        FUN3("", VAR7, VAR5);
        FUN11(VAR8[VAR7], VAR9, VAR8[VAR5]);
        break;
    case 0x06:
        FUN3("", VAR7, VAR5, VAR6);
        FUN12(VAR8[VAR7], VAR9, VAR8[VAR5], VAR8[VAR6]);
        break;
    case 0x07:
        FUN3("", VAR7, VAR5, VAR6);
        FUN13(VAR8[VAR7], VAR9, VAR8[VAR7], VAR8[VAR5], VAR8[VAR6]);
        break;
    case 0x08:
        FUN3("", VAR5, VAR6);
        FUN14(VAR12, VAR9, VAR8[VAR5], VAR8[VAR6]);
        break;
    case 0x09:
        FUN3("", VAR5, VAR6);
        FUN15(VAR12, VAR9, VAR8[VAR5], VAR8[VAR6]);
        break;
    case 0x0a:
        FUN3("", VAR5, VAR6);
        FUN16(VAR12, VAR9, VAR8[VAR5], VAR8[VAR6]);
        break;
    case 0x0b:
        FUN3("", VAR5, VAR6);
        FUN17(VAR12, VAR9, VAR8[VAR5], VAR8[VAR6]);
        break;
    case 0x0c:
        FUN3("", VAR5, VAR6);
        FUN18(VAR12, VAR9, VAR8[VAR5], VAR8[VAR6]);
        break;
    case 0x0d:
        FUN3("", VAR5, VAR6);
        FUN19(VAR12, VAR9, VAR8[VAR5], VAR8[VAR6]);
        break;
    default:
        FUN20(VAR2);
        break;
    }
}