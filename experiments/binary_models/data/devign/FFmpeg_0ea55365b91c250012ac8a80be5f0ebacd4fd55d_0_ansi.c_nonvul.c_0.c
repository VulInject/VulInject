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
        VAR9 = VAR2->VAR9;
        VAR10 = VAR2->VAR10;
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
            if (VAR5->VAR21.VAR22[0])
                VAR2->FUN6(VAR2, &VAR5->VAR21);
            FUN7(VAR2, VAR9, VAR10);
            VAR7 = VAR2->FUN8(VAR2, &VAR5->VAR21);
            if (VAR7 < 0)
            {
                FUN9(VAR2, VAR23, "");
                return VAR7;
            }
            VAR5->VAR21.VAR24 = VAR25;
            VAR5->VAR21.VAR26 = 1;
            FUN10((VAR27 *)VAR5->VAR21.VAR22[1]);
            FUN11(VAR2);
        }
        else if (VAR3 == '')
        {
            FUN11(VAR2);
        }
        break;
    case '':
        switch (VAR5->VAR13[0])
        {
        case 0:
            FUN12(VAR2, VAR5->VAR15, VAR2->VAR9 - VAR5->VAR15);
            if (VAR5->VAR11 < VAR2->VAR10 - VAR5->VAR14)
                memset(VAR5->VAR21.VAR22[0] + (VAR5->VAR11 + VAR5->VAR14) * VAR5->VAR21.VAR28[0], VAR29, (VAR2->VAR10 - VAR5->VAR11 - VAR5->VAR14) * VAR5->VAR21.VAR28[0]);
            break;
        case 1:
            FUN12(VAR2, 0, VAR5->VAR15);
            if (VAR5->VAR11 > 0)
                memset(VAR5->VAR21.VAR22[0], VAR29, VAR5->VAR11 * VAR5->VAR21.VAR28[0]);
            break;
        case 2:
            FUN11(VAR2);
        }
        break;
    case '':
        switch (VAR5->VAR13[0])
        {
        case 0:
            FUN12(VAR2, VAR5->VAR15, VAR2->VAR9 - VAR5->VAR15);
            break;
        case 1:
            FUN12(VAR2, 0, VAR5->VAR15);
            break;
        case 2:
            FUN12(VAR2, 0, VAR2->VAR9);
        }
        break;
    case '':
        if (VAR5->VAR12 == 0)
        {
            VAR5->VAR12 = 1;
            VAR5->VAR13[0] = 0;
        }
        for (VAR8 = 0; VAR8 < FUN3(VAR5->VAR12, VAR30); VAR8++)
        {
            int VAR31 = VAR5->VAR13[VAR8];
            if (VAR31 == 0)
            {
                VAR5->VAR32 = 0;
                VAR5->VAR33 = VAR34;
                VAR5->VAR35 = VAR29;
            }
            else if (VAR31 == 1 || VAR31 == 2 || VAR31 == 4 || VAR31 == 5 || VAR31 == 7 || VAR31 == 8)
            {
                VAR5->VAR32 |= 1 << (VAR31 - 1);
            }
            else if (VAR31 >= 30 && VAR31 <= 37)
            {
                VAR5->VAR33 = VAR36[VAR31 - 30];
            }
            else if (VAR31 == 38 && VAR8 + 2 < FUN3(VAR5->VAR12, VAR30) && VAR5->VAR13[VAR8 + 1] == 5 && VAR5->VAR13[VAR8 + 2] < 256)
            {
                int VAR37 = VAR5->VAR13[VAR8 + 2];
                VAR5->VAR33 = VAR37 < 16 ? VAR36[VAR37] : VAR37;
                VAR8 += 2;
            }
            else if (VAR31 == 39)
            {
                VAR5->VAR33 = VAR36[VAR34];
            }
            else if (VAR31 >= 40 && VAR31 <= 47)
            {
                VAR5->VAR35 = VAR36[VAR31 - 40];
            }
            else if (VAR31 == 48 && VAR8 + 2 < FUN3(VAR5->VAR12, VAR30) && VAR5->VAR13[VAR8 + 1] == 5 && VAR5->VAR13[VAR8 + 2] < 256)
            {
                int VAR37 = VAR5->VAR13[VAR8 + 2];
                VAR5->VAR35 = VAR37 < 16 ? VAR36[VAR37] : VAR37;
                VAR8 += 2;
            }
            else if (VAR31 == 49)
            {
                VAR5->VAR33 = VAR36[VAR29];
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