void FUN1(VAR1 *VAR2)
{
    int VAR3, VAR4;
    target_siginfo_t VAR5;
    while (1)
    {
        VAR3 = FUN2(VAR2);
        switch (VAR3)
        {
        case 0x88:
        case 0x90:
        case 0x110:
        case 0x16d:
            VAR4 = FUN3(VAR2, VAR2->VAR6[1], VAR2->VAR7[0], VAR2->VAR7[1], VAR2->VAR7[2], VAR2->VAR7[3], VAR2->VAR7[4], VAR2->VAR7[5]);
            if ((unsigned int)VAR4 >= (unsigned int)(-515))
            {
                VAR2->VAR8 |= VAR9;
                VAR2->VAR10 |= VAR9;
                VAR4 = -VAR4;
            }
            else
            {
                VAR2->VAR8 &= ~VAR9;
                VAR2->VAR10 &= ~VAR9;
            }
            VAR2->VAR7[0] = VAR4;
            VAR2->VAR11 = VAR2->VAR12;
            VAR2->VAR12 = VAR2->VAR12 + 4;
            break;
        case 0x83:
        case 0x103:
            FUN4(VAR2);
            VAR2->VAR11 = VAR2->VAR12;
            VAR2->VAR12 = VAR2->VAR12 + 4;
            break;
        case VAR13:
            FUN5(VAR2);
            break;
        case VAR14:
            FUN6(VAR2);
            break;
        case VAR15:
        case VAR16:
        {
            VAR5.VAR17 = VAR18;
            VAR5.VAR19 = 0;
            VAR5.VAR20 = VAR21;
            VAR5.VAR22.VAR23.VAR24 = VAR2->VAR25[4];
            FUN7(VAR2, VAR5.VAR17, &VAR5);
        }
        break;
        case VAR26:
            FUN5(VAR2);
            break;
        case VAR27:
            FUN6(VAR2);
            break;
        case VAR15:
        case VAR16:
        {
            VAR5.VAR17 = VAR18;
            VAR5.VAR19 = 0;
            VAR5.VAR20 = VAR21;
            if (VAR3 == VAR16)
                VAR5.VAR22.VAR23.VAR24 = VAR2->VAR28[4];
            else
                VAR5.VAR22.VAR23.VAR24 = VAR2->VAR29->VAR30;
            FUN7(VAR2, VAR5.VAR17, &VAR5);
        }
        break;
        case 0x16e:
            FUN4(VAR2);
            FUN8(VAR2);
            break;
        case 0x16f:
            FUN4(VAR2);
            FUN9(VAR2);
            break;
        case VAR31:
            break;
        case VAR32:
        {
            int VAR33;
            VAR33 = FUN10(VAR2, VAR34);
            if (VAR33)
            {
                VAR5.VAR17 = VAR33;
                VAR5.VAR19 = 0;
                VAR5.VAR20 = VAR35;
                FUN7(VAR2, VAR5.VAR17, &VAR5);
            }
        }
        break;
        default:
            FUN11("", VAR3);
            FUN12(VAR2, VAR36, fprintf, 0);
            FUN13(1);
        }
        FUN14(VAR2);
    }
}