static int FUN1(VAR1 *VAR2, int VAR3)
{
    VAR4 *VAR5 = VAR2->VAR6;
    int VAR7, VAR8, VAR9, VAR10;
    switch (VAR3)
    {
    case '':
        VAR5->VAR11 = FUN2(VAR5->VAR11 - (VAR5->VAR12 > 0 ? VAR5->VAR13[0] * VAR5->VAR14 : VAR5->VAR14), 0);
        break;
    case '':
        VAR5->VAR11 = FUN3(VAR5->VAR11 + (VAR5->VAR12 > 0 ? VAR5->VAR13[0] * VAR5->VAR14 : VAR5->VAR14), VAR2->VAR10 - VAR5->VAR14);
        break;
    case '':
        VAR5->VAR15 = FUN3(VAR5->VAR15 + (VAR5->VAR12 > 0 ? VAR5->VAR13[0] * VAR16 : VAR16), VAR2->VAR9 - VAR16);
        break;
    case '':
        VAR5->VAR15 = FUN2(VAR5->VAR15 - (VAR5->VAR12 > 0 ? VAR5->VAR13[0] * VAR16 : VAR16), 0);
        break;
    case '':
    case '':
        VAR5->VAR11 = VAR5->VAR12 > 0 ? FUN4((VAR5->VAR13[0] - 1) * VAR5->VAR14, 0, VAR2->VAR10 - VAR5->VAR14) : 0;
        VAR5->VAR15 = VAR5->VAR12 > 1 ? FUN4((VAR5->VAR13[1] - 1) * VAR16, 0, VAR2->VAR9 - VAR16) : 0;
        break;
    case '':
    case '':
        if (VAR5->VAR12 < 2)
            VAR5->VAR13[0] = VAR17;
        switch (VAR5->VAR13[0])
        {
        case 0:
        case 1:
        case 4:
        case 5:
        case 13:
        case 19:
            VAR5->VAR18 = VAR19;
            VAR5->VAR14 = 8;
            VAR9 = 40 << 3;
            VAR10 = 25 << 3;
            break;
        case 2:
        case 3:
            VAR5->VAR18 = VAR20;
            VAR5->VAR14 = 16;
            VAR9 = 80 << 3;
            VAR10 = 25 << 4;
            break;
        case 6:
        case 14:
            VAR5->VAR18 = VAR19;
            VAR5->VAR14 = 8;
            VAR9 = 80 << 3;
            VAR10 = 25 << 3;
            break;
        case 7:
            break;
        case 15:
        case 16:
            VAR5->VAR18 = VAR19;
            VAR5->VAR14 = 8;
            VAR9 = 80 << 3;
            VAR10 = 43 << 3;
            break;
        case 17:
        case 18:
            VAR5->VAR18 = VAR19;
            VAR5->VAR14 = 8;
            VAR9 = 80 << 3;
            VAR10 = 60 << 4;
            break;
        default:
            FUN5(VAR2, "");
        }
        if (VAR9 != VAR2->VAR9 || VAR10 != VAR2->VAR10)
        {
            FUN6(VAR5->VAR21);
            VAR7 = FUN7(VAR2, VAR9, VAR10);
            if (VAR7 < 0)
                return VAR7;
            VAR7 = FUN8(VAR2, VAR5->VAR21, VAR22);
            if (VAR7 < 0)
            {
                FUN9(VAR2, VAR23, "");
                return VAR7;
            }
            VAR5->VAR21->VAR24 = VAR25;
            VAR5->VAR21->VAR26 = 1;
            memcpy(VAR5->VAR21->VAR27[1], VAR28, 16 * 4);
            FUN10(VAR2);
        }
        else if (VAR3 == '')
        {
            FUN10(VAR2);
        }
        break;
    case '':
        switch (VAR5->VAR13[0])
        {
        case 0:
            FUN11(VAR2, VAR5->VAR15, VAR2->VAR9 - VAR5->VAR15);
            if (VAR5->VAR11 < VAR2->VAR10 - VAR5->VAR14)
                memset(VAR5->VAR21->VAR27[0] + (VAR5->VAR11 + VAR5->VAR14) * VAR5->VAR21->VAR29[0], VAR30, (VAR2->VAR10 - VAR5->VAR11 - VAR5->VAR14) * VAR5->VAR21->VAR29[0]);
            break;
        case 1:
            FUN11(VAR2, 0, VAR5->VAR15);
            if (VAR5->VAR11 > 0)
                memset(VAR5->VAR21->VAR27[0], VAR30, VAR5->VAR11 * VAR5->VAR21->VAR29[0]);
            break;
        case 2:
            FUN10(VAR2);
        }
        break;
    case '':
        switch (VAR5->VAR13[0])
        {
        case 0:
            FUN11(VAR2, VAR5->VAR15, VAR2->VAR9 - VAR5->VAR15);
            break;
        case 1:
            FUN11(VAR2, 0, VAR5->VAR15);
            break;
        case 2:
            FUN11(VAR2, 0, VAR2->VAR9);
        }
        break;
    case '':
        if (VAR5->VAR12 == 0)
        {
            VAR5->VAR12 = 1;
            VAR5->VAR13[0] = 0;
        }
        for (VAR8 = 0; VAR8 < FUN3(VAR5->VAR12, VAR31); VAR8++)
        {
            int VAR32 = VAR5->VAR13[VAR8];
            if (VAR32 == 0)
            {
                VAR5->VAR33 = 0;
                VAR5->VAR34 = VAR35;
                VAR5->VAR36 = VAR30;
            }
            else if (VAR32 == 1 || VAR32 == 2 || VAR32 == 4 || VAR32 == 5 || VAR32 == 7 || VAR32 == 8)
            {
                VAR5->VAR33 |= 1 << (VAR32 - 1);
            }
            else if (VAR32 >= 30 && VAR32 <= 38)
            {
                VAR5->VAR34 = VAR37[VAR32 - 30];
            }
            else if (VAR32 == 39)
            {
                VAR5->VAR34 = VAR37[VAR35];
            }
            else if (VAR32 >= 40 && VAR32 <= 47)
            {
                VAR5->VAR36 = VAR37[VAR32 - 40];
            }
            else if (VAR32 == 49)
            {
                VAR5->VAR34 = VAR37[VAR30];
            }
            else
            {
                FUN5(VAR2, "");
            }
        }
        break;
    case '':
    case '':
        break;
    case '':
        VAR5->VAR38 = VAR5->VAR15;
        VAR5->VAR39 = VAR5->VAR11;
        break;
    case '':
        VAR5->VAR15 = FUN4(VAR5->VAR38, 0, VAR2->VAR9 - VAR16);
        VAR5->VAR11 = FUN4(VAR5->VAR39, 0, VAR2->VAR10 - VAR5->VAR14);
        break;
    default:
        FUN5(VAR2, "");
        break;
    }
    return 0;
}