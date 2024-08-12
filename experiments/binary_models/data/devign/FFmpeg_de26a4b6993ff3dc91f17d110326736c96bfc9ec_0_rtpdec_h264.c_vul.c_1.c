static int FUN1(VAR1 *VAR2, VAR3 *VAR4, VAR5 *VAR6, VAR7 *VAR8, VAR9 *VAR10, const VAR11 *VAR12, int VAR13, int VAR14)
{
    uint8_t VAR15 = VAR12[0];
    uint8_t VAR16 = (VAR15 & 0x1f);
    int VAR17 = 0;
    uint8_t VAR18[] = {0, 0, 0, 1};
    assert(VAR4);
    assert(VAR4->VAR19 == VAR20);
    assert(VAR12);
    if (VAR16 >= 1 && VAR16 <= 23)
        VAR16 = 1;
    switch (VAR16)
    {
    case 0:
    case 1:
        FUN2(VAR8, VAR13 + sizeof(VAR18));
        memcpy(VAR8->VAR4, VAR18, sizeof(VAR18));
        memcpy(VAR8->VAR4 + sizeof(VAR18), VAR12, VAR13);
        VAR4->VAR21[VAR15 & 0x1f]++;
        break;
    case 24:
        VAR12++;
        VAR13--;
        {
            int VAR22 = 0;
            int VAR23 = 0;
            VAR11 *VAR24 = NULL;
            for (VAR22 = 0; VAR22 < 2; VAR22++)
            {
                const VAR11 *VAR25 = VAR12;
                int VAR26 = VAR13;
                do
                {
                    uint16_t VAR27 = FUN3(VAR25);
                    VAR25 += 2;
                    VAR26 -= 2;
                    if (VAR27 <= VAR26)
                    {
                        if (VAR22 == 0)
                        {
                            VAR23 += sizeof(VAR18) + VAR27;
                        }
                        else
                        {
                            assert(VAR24);
                            memcpy(VAR24, VAR18, sizeof(VAR18));
                            VAR24 += sizeof(VAR18);
                            memcpy(VAR24, VAR25, VAR27);
                            VAR4->VAR21[*VAR25 & 0x1f]++;
                            VAR24 += VAR27;
                        }
                    }
                    else
                    {
                        FUN4(VAR2, VAR28, "", VAR27, VAR26);
                    }
                    VAR25 += VAR27;
                    VAR26 -= VAR27;
                    if (VAR26 < 0)
                        FUN4(VAR2, VAR28, "", VAR26);
                } while (VAR26 > 2);
                if (VAR22 == 0)
                {
                    FUN2(VAR8, VAR23);
                    VAR24 = VAR8->VAR4;
                }
                else
                {
                    assert(VAR24 - VAR8->VAR4 == VAR23);
                }
            }
        }
        break;
    case 25:
    case 26:
    case 27:
    case 29:
        FUN4(VAR2, VAR28, "", VAR16);
        VAR17 = -1;
        break;
    case 28:
        VAR12++;
        VAR13--;
        {
            uint8_t VAR29 = VAR15;
            uint8_t VAR30 = *VAR12;
            uint8_t VAR31 = VAR30 >> 7;
            uint8_t VAR32 = (VAR30 & 0x1f);
            uint8_t VAR33;
            VAR33 = VAR29 & (0xe0);
            VAR33 |= VAR32;
            VAR12++;
            VAR13--;
            if (VAR31)
                VAR4->VAR21[VAR32]++;
            if (VAR31)
            {
                FUN2(VAR8, sizeof(VAR18) + sizeof(VAR15) + VAR13);
                memcpy(VAR8->VAR4, VAR18, sizeof(VAR18));
                VAR8->VAR4[sizeof(VAR18)] = VAR33;
                memcpy(VAR8->VAR4 + sizeof(VAR18) + sizeof(VAR15), VAR12, VAR13);
            }
            else
            {
                FUN2(VAR8, VAR13);
                memcpy(VAR8->VAR4, VAR12, VAR13);
            }
        }
        break;
    case 30:
    case 31:
    default:
        FUN4(VAR2, VAR28, "", VAR16);
        VAR17 = -1;
        break;
    }
    VAR8->VAR34 = VAR6->VAR35;
    return VAR17;
}