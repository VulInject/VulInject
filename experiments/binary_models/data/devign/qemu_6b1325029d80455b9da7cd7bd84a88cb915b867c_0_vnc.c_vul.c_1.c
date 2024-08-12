static void FUN1(VAR1 *VAR2, int VAR3, int VAR4, int VAR5)
{
    switch (VAR4)
    {
    case 0x2a:
    case 0x36:
    case 0x1d:
    case 0x9d:
    case 0x38:
    case 0xb8:
        if (VAR3)
            VAR2->VAR6[VAR4] = 1;
        else
            VAR2->VAR6[VAR4] = 0;
        break;
    case 0x02 ... 0x0a:
        if (VAR3 && VAR2->VAR6[0x1d] && VAR2->VAR6[0x38])
        {
            FUN2(VAR2);
            FUN3(VAR4 - 0x02);
            return;
            break;
        case 0x3a:
        case 0x45:
            if (!VAR3)
                VAR2->VAR6[VAR4] ^= 1;
            break;
            if (FUN4(VAR2->VAR7->VAR8, VAR4))
            {
                if (VAR3)
                {
                    int VAR9 = VAR2->VAR6[0x45];
                    switch (VAR4)
                    {
                    case 0x2a:
                    case 0x36:
                    case 0x1d:
                    case 0x9d:
                    case 0x38:
                    case 0xb8:
                        break;
                    case 0xc8:
                        FUN5(VAR10);
                        break;
                    case 0xd0:
                        FUN5(VAR11);
                        break;
                    case 0xcb:
                        FUN5(VAR12);
                        break;
                    case 0xcd:
                        FUN5(VAR13);
                        break;
                    case 0xd3:
                        FUN5(VAR14);
                        break;
                    case 0xc7:
                        FUN5(VAR15);
                        break;
                    case 0xcf:
                        FUN5(VAR16);
                        break;
                    case 0xc9:
                        FUN5(VAR17);
                        break;
                    case 0xd1:
                        FUN5(VAR18);
                        break;
                    case 0x47:
                        FUN5(VAR9 ? '' : VAR15);
                        break;
                    case 0x48:
                        FUN5(VAR9 ? '' : VAR10);
                        break;
                    case 0x49:
                        FUN5(VAR9 ? '' : VAR17);
                        break;
                    case 0x4b:
                        FUN5(VAR9 ? '' : VAR12);
                        break;
                    case 0x4c:
                        FUN5('');
                        break;
                    case 0x4d:
                        FUN5(VAR9 ? '' : VAR13);
                        break;
                    case 0x4f:
                        FUN5(VAR9 ? '' : VAR16);
                        break;
                    case 0x50:
                        FUN5(VAR9 ? '' : VAR11);
                        break;
                    case 0x51:
                        FUN5(VAR9 ? '' : VAR18);
                        break;
                    case 0x52:
                        FUN5('');
                        break;
                    case 0x53:
                        FUN5(VAR9 ? '' : VAR14);
                        break;
                    case 0xb5:
                        FUN5('');
                        break;
                    case 0x37:
                        FUN5('');
                        break;
                    case 0x4a:
                        FUN5('');
                        break;
                    case 0x4e:
                        FUN5('');
                        break;
                    case 0x9c:
                        FUN5('');
                        break;
                    default:
                        FUN5(VAR5);
                        break