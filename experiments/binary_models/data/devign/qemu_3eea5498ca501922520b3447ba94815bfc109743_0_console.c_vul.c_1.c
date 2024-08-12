static void FUN1(VAR1 *VAR2, int VAR3)
{
    VAR4 *VAR5;
    int VAR6, VAR7;
    int VAR8, VAR9;
    switch (VAR2->VAR10)
    {
    case VAR11:
        switch (VAR3)
        {
        case '':
            VAR2->VAR8 = 0;
            break;
        case '':
            FUN2(VAR2);
            break;
        case '':
            if (VAR2->VAR8 > 0)
                VAR2->VAR8--;
            break;
        case '':
            if (VAR2->VAR8 + (8 - (VAR2->VAR8 % 8)) > VAR2->VAR12)
            {
                VAR2->VAR8 = 0;
                FUN2(VAR2);
            }
            else
            {
                VAR2->VAR8 = VAR2->VAR8 + (8 - (VAR2->VAR8 % 8));
            }
            break;
        case '':
            break;
        case 14:
            break;
        case 15:
            break;
        case 27:
            VAR2->VAR10 = VAR13;
            break;
        default:
            if (VAR2->VAR8 >= VAR2->VAR12)
            {
                VAR2->VAR8 = 0;
                FUN2(VAR2);
            }
            VAR6 = (VAR2->VAR14 + VAR2->VAR9) % VAR2->VAR15;
            VAR5 = &VAR2->VAR16[VAR6 * VAR2->VAR12 + VAR2->VAR8];
            VAR5->VAR3 = VAR3;
            VAR5->VAR17 = VAR2->VAR17;
            FUN3(VAR2, VAR2->VAR8, VAR2->VAR9);
            VAR2->VAR8++;
            break;
        }
        break;
    case VAR13:
        if (VAR3 == '')
        {
            for (VAR7 = 0; VAR7 < VAR18; VAR7++)
                VAR2->VAR19[VAR7] = 0;
            VAR2->VAR20 = 0;
            VAR2->VAR10 = VAR21;
        }
        else
        {
            VAR2->VAR10 = VAR11;
        }
        break;
    case VAR21:
        if (VAR3 >= '' && VAR3 <= '')
        {
            if (VAR2->VAR20 < VAR18)
            {
                VAR2->VAR19[VAR2->VAR20] = VAR2->VAR19[VAR2->VAR20] * 10 + VAR3 - '';
            }
        }
        else
        {
            VAR2->VAR20++;
            if (VAR3 == '')
                break;
            fprintf(VAR22, "", VAR2->VAR19[0], VAR2->VAR19[1], VAR3, VAR2->VAR20);
            VAR2->VAR10 = VAR11;
            switch (VAR3)
            {
            case '':
                if (VAR2->VAR19[0] == 0)
                {
                    VAR2->VAR19[0] = 1;
                }
                VAR2->VAR9 -= VAR2->VAR19[0];
                if (VAR2->VAR9 < 0)
                {
                    VAR2->VAR9 = 0;
                }
                break;
            case '':
                if (VAR2->VAR19[0] == 0)
                {
                    VAR2->VAR19[0] = 1;
                }
                VAR2->VAR9 += VAR2->VAR19[0];
                if (VAR2->VAR9 >= VAR2->VAR23)
                {
                    VAR2->VAR9 = VAR2->VAR23 - 1;
                }
                break;
            case '':
                if (VAR2->VAR19[0] == 0)
                {
                    VAR2->VAR19[0] = 1;
                }
                VAR2->VAR8 += VAR2->VAR19[0];
                if (VAR2->VAR8 >= VAR2->VAR12)
                {
                    VAR2->VAR8 = VAR2->VAR12 - 1;
                }
                break;
            case '':
                if (VAR2->VAR19[0] == 0)
                {
                    VAR2->VAR19[0] = 1;
                }
                VAR2->VAR8 -= VAR2->VAR19[0];
                if (VAR2->VAR8 < 0)
                {
                    VAR2->VAR8 = 0;
                }
                break;
            case '':
                VAR2->VAR8 = VAR2->VAR19[0] - 1;
                if (VAR2->VAR8 < 0)
                {
                    VAR2->VAR8 = 0;
                }
                break;
            case '':
            case '':
                VAR2->VAR8 = VAR2->VAR19[1] - 1;
                if (VAR2->VAR8 < 0)
                {
                    VAR2->VAR8 = 0;
                }
                VAR2->VAR9 = VAR2->VAR19[0] - 1;
                if (VAR2->VAR9 < 0)
                {
                    VAR2->VAR9 = 0;
                }
                break;
            case '':
                switch (VAR2->VAR19[0])
                {
                case 0:
                    for (VAR9 = VAR2->VAR9; VAR9 < VAR2->VAR23; VAR9++)
                    {
                        for (VAR8 = 0; VAR8 < VAR2->VAR12; VAR8++)
                        {
                            if (VAR9 == VAR2->VAR9 && VAR8 < VAR2->VAR8)
                            {
                                continue;
                            }
                            FUN4(VAR2, VAR8, VAR9);
                        }
                    }
                    break;
                case 1:
                    for (VAR9 = 0; VAR9 <= VAR2->VAR9; VAR9++)
                    {
                        for (VAR8 = 0; VAR8 < VAR2->VAR12; VAR8++)
                        {
                            if (VAR9 == VAR2->VAR9 && VAR8 > VAR2->VAR8)
                            {
                                break;
                            }
                            FUN4(VAR2, VAR8, VAR9);
                        }
                    }
                    break;
                case 2:
                    for (VAR9 = 0; VAR9 <= VAR2->VAR23; VAR9++)
                    {
                        for (VAR8 = 0; VAR8 < VAR2->VAR12; VAR8++)
                        {
                            FUN4(VAR2, VAR8, VAR9);
                        }
                    }
                    break;
                }
                break;
            case '':
                switch (VAR2->VAR19[0])
                {
                case 0:
                    for (VAR8 = VAR2->VAR8; VAR8 < VAR2->VAR12; VAR8++)
                    {
                        FUN4(VAR2, VAR8, VAR2->VAR9);
                    }
                    break;
                case 1:
                    for (VAR8 = 0; VAR8 <= VAR2->VAR8; VAR8++)
                    {
                        FUN4(VAR2, VAR8, VAR2->VAR9);
                    }
                    break;
                case 2:
                    for (VAR8 = 0; VAR8 < VAR2->VAR12; VAR8++)
                    {
                        FUN4(VAR2, VAR8, VAR2->VAR9);
                    }
                    break;
                }
                break;
            case '':
                FUN5(VAR2);
                break;
            case '':
                break;
            case '':
                VAR2->VAR24 = VAR2->VAR8;
                VAR2->VAR25 = VAR2->VAR9;
                break;
            case '':
                VAR2->VAR8 = VAR2->VAR24;
                VAR2->VAR9 = VAR2->VAR25;
                break;
            default:
                fprintf(VAR22, "", VAR3);
                break;
            }
            break;
        }
    }
}