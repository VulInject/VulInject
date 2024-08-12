static int FUN1(VAR1 *VAR2, VAR3 *VAR4, VAR5 *VAR6, VAR7 *VAR8, VAR9 *VAR10, const VAR11 *VAR12, int VAR13, uint16_t VAR14, int VAR15)
{
    uint8_t VAR16;
    uint8_t VAR17;
    int VAR18 = 0;
    if (!VAR13)
    {
        FUN2(VAR2, VAR19, "");
        return VAR20;
    }
    VAR16 = VAR12[0];
    VAR17 = VAR16 & 0x1f;
    assert(VAR4);
    assert(VAR12);
    if (VAR17 >= 1 && VAR17 <= 23)
        VAR17 = 1;
    switch (VAR17)
    {
    case 0:
    case 1:
        FUN3(VAR8, VAR13 + sizeof(VAR21));
        memcpy(VAR8->VAR4, VAR21, sizeof(VAR21));
        memcpy(VAR8->VAR4 + sizeof(VAR21), VAR12, VAR13);
        FUN4(VAR4, VAR16);
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
                while (VAR26 > 2)
                {
                    uint16_t VAR27 = FUN5(VAR25);
                    VAR25 += 2;
                    VAR26 -= 2;
                    if (VAR27 <= VAR26)
                    {
                        if (VAR22 == 0)
                        {
                            VAR23 += sizeof(VAR21) + VAR27;
                        }
                        else
                        {
                            assert(VAR24);
                            memcpy(VAR24, VAR21, sizeof(VAR21));
                            VAR24 += sizeof(VAR21);
                            memcpy(VAR24, VAR25, VAR27);
                            FUN4(VAR4, *VAR25);
                            VAR24 += VAR27;
                        }
                    }
                    else
                    {
                        FUN2(VAR2, VAR19, "", VAR27, VAR26);
                    }
                    VAR25 += VAR27;
                    VAR26 -= VAR27;
                    if (VAR26 < 0)
                        FUN2(VAR2, VAR19, "", VAR26);
                }
                if (VAR22 == 0)
                {
                    FUN3(VAR8, VAR23);
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
        FUN2(VAR2, VAR19, "", VAR17);
        VAR18 = FUN6(VAR28);
        break;
    case 28:
        VAR12++;
        VAR13--;
        if (VAR13 > 1)
        {
            uint8_t VAR29 = VAR16;
            uint8_t VAR30 = *VAR12;
            uint8_t VAR31 = VAR30 >> 7;
            uint8_t av_unused VAR32 = (VAR30 & 0x40) >> 6;
            uint8_t VAR33 = VAR30 & 0x1f;
            uint8_t VAR34;
            VAR34 = VAR29 & 0xe0;
            VAR34 |= VAR33;
            VAR12++;
            VAR13--;
            if (VAR31)
                FUN4(VAR4, VAR33);
            if (VAR31)
            {
                FUN3(VAR8, sizeof(VAR21) + sizeof(VAR16) + VAR13);
                memcpy(VAR8->VAR4, VAR21, sizeof(VAR21));
                VAR8->VAR4[sizeof(VAR21)] = VAR34;
                memcpy(VAR8->VAR4 + sizeof(VAR21) + sizeof(VAR16), VAR12, VAR13);
            }
            else
            {
                FUN3(VAR8, VAR13);
                memcpy(VAR8->VAR4, VAR12, VAR13);
            }
        }
        else
        {
            FUN2(VAR2, VAR19, "");
            VAR18 = VAR20;
        }
        break;
    case 30:
    case 31:
    default:
        FUN2(VAR2, VAR19, "", VAR17);
        VAR18 = VAR20;
        break;
    }
    VAR8->VAR35 = VAR6->VAR36;
    return VAR18;
}