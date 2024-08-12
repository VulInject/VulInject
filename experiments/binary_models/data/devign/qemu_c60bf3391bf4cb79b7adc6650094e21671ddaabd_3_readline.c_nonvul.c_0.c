void FUN1(VAR1 *VAR2, int VAR3)
{
    switch (VAR2->VAR4)
    {
    case VAR5:
        switch (VAR3)
        {
        case 1:
            FUN2(VAR2);
            break;
        case 4:
            FUN3(VAR2);
            break;
        case 5:
            FUN4(VAR2);
            break;
        case 9:
            FUN5(VAR2);
            break;
        case 10:
        case 13:
            VAR2->VAR6[VAR2->VAR7] = '';
            if (!VAR2->VAR8)
                FUN6(VAR2, VAR2->VAR6);
            VAR2->FUN7(VAR2->VAR9, "");
            VAR2->VAR10 = 0;
            VAR2->VAR7 = 0;
            VAR2->VAR11 = 0;
            VAR2->VAR12 = 0;
            VAR2->FUN8(VAR2->VAR9, VAR2->VAR6, VAR2->VAR13);
            break;
        case 23:
            FUN9(VAR2);
            break;
        case 27:
            VAR2->VAR4 = VAR14;
            break;
        case 127:
        case 8:
            FUN10(VAR2);
            break;
        case 155:
            VAR2->VAR4 = VAR15;
            break;
        default:
            if (VAR3 >= 32)
            {
                FUN11(VAR2, VAR3);
            }
            break;
        }
        break;
    case VAR14:
        if (VAR3 == '')
        {
            VAR2->VAR4 = VAR15;
            VAR2->VAR16 = 0;
        }
        else if (VAR3 == '')
        {
            VAR2->VAR4 = VAR17;
            VAR2->VAR16 = 0;
        }
        else
        {
            VAR2->VAR4 = VAR5;
        }
        break;
    case VAR15:
        switch (VAR3)
        {
        case '':
        case '':
            FUN12(VAR2);
            break;
        case '':
        case '':
            FUN13(VAR2);
            break;
        case '':
            FUN14(VAR2);
            break;
        case '':
            FUN15(VAR2);
            break;
        case '' ... '':
            VAR2->VAR16 = VAR2->VAR16 * 10 + (VAR3 - '');
            goto VAR18;
        case '':
            switch (VAR2->VAR16)
            {
            case 1:
                FUN2(VAR2);
                break;
            case 3:
                FUN3(VAR2);
                break;
            case 4:
                FUN4(VAR2);
                break;
            }
            break;
        default:
            break;
        }
        VAR2->VAR4 = VAR5;
    VAR18:
        break;
    case VAR17:
        switch (VAR3)
        {
        case '':
            FUN4(VAR2);
            break;
        case '':
            FUN2(VAR2);
            break;
        }
        VAR2->VAR4 = VAR5;
        break;
    }
    FUN16(VAR2);
}