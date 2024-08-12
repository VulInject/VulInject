static void FUN1(VAR1 *VAR2, int VAR3, VAR4 *VAR5)
{
    int VAR6 = VAR2->VAR6[VAR3];
    int VAR7 = VAR2->VAR7[VAR3];
    VAR8 *VAR9 = VAR2->VAR10[VAR3];
    VAR11 *VAR12 = VAR2->VAR13[VAR3];
    VAR14 *VAR15 = VAR2->VAR16[VAR3];
    int VAR17 = (VAR3 == VAR18) || VAR2->VAR19[VAR3];
    VAR20 *VAR21 = &VAR2->VAR21;
    int VAR22;
    for (VAR22 = VAR6; VAR22 < VAR7; VAR22++)
    {
        int VAR10 = VAR9[VAR22];
        int VAR23;
        switch (VAR10)
        {
        case 0:
            if (VAR17)
                VAR23 = (((FUN2(&VAR2->VAR24) >> 8) * 181) >> 8) - 5931008;
            else
                VAR23 = 0;
            break;
        case 1:
            if (VAR5->VAR25)
            {
                VAR5->VAR25--;
                VAR23 = VAR5->VAR26[VAR5->VAR25];
            }
            else
            {
                int VAR27 = FUN3(VAR21, 5);
                VAR23 = VAR28[VAR27][0];
                VAR5->VAR26[1] = VAR28[VAR27][1];
                VAR5->VAR26[0] = VAR28[VAR27][2];
                VAR5->VAR25 = 2;
                break;
            case 2:
                if (VAR5->VAR29)
                {
                    VAR5->VAR29--;
                    VAR23 = VAR5->VAR30[VAR5->VAR29];
                }
                else
                {
                    int VAR27 = FUN3(VAR21, 7);
                    VAR23 = VAR31[VAR27][0];
                    VAR5->VAR30[1] = VAR31[VAR27][1];
                    VAR5->VAR30[0] = VAR31[VAR27][2];
                    VAR5->VAR29 = 2;
                    break;
                case 3:
                    VAR23 = VAR32[FUN3(VAR21, 3)];
                    break;
                case 4:
                    if (VAR5->VAR33)
                    {
                        VAR5->VAR33 = 0;
                        VAR23 = VAR5->VAR34;
                    }
                    else
                    {
                        int VAR27 = FUN3(VAR21, 7);
                        VAR23 = VAR35[VAR27][0];
                        VAR5->VAR34 = VAR35[VAR27][1];
                        VAR5->VAR33 = 1;
                        break;
                    case 5:
                        VAR23 = VAR36[FUN3(VAR21, 4)];
                        break;
                    default:
                        VAR23 = FUN4(VAR21, VAR37[VAR10]);
                        VAR23 <<= 24 - VAR37[VAR10];
                        break;
                        VAR15[VAR22] = VAR23 >> VAR12[VAR22];