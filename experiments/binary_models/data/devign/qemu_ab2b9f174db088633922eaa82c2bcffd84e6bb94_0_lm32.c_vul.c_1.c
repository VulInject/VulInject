int FUN1(bfd_vma VAR1, struct VAR2 *VAR3)
{
    fprintf_function VAR4 = VAR3->VAR5;
    void *VAR6 = VAR3->VAR6;
    int VAR7;
    uint8_t VAR8[4];
    const VAR9 *VAR10;
    uint32_t VAR11;
    const char *VAR12;
    VAR7 = VAR3->FUN2(VAR1, VAR8, 4, VAR3);
    if (VAR7 != 0)
    {
        VAR3->FUN3(VAR7, VAR1, VAR3);
        return -1;
    }
    FUN4(VAR6, "", VAR8[0], VAR8[1], VAR8[2], VAR8[3]);
    VAR11 = FUN5(VAR8);
    VAR10 = FUN6(VAR11);
    if (VAR10)
    {
        FUN4(VAR6, "", VAR10->VAR13);
        VAR12 = VAR10->VAR12;
        while (VAR12 && *VAR12)
        {
            if (*VAR12 == '')
            {
                switch (*(++VAR12))
                {
                case '':
                {
                    uint8_t VAR14;
                    const char *VAR15;
                    VAR14 = (VAR11 >> 21) & 0x1f;
                    VAR15 = FUN7(VAR14)->VAR13;
                    FUN4(VAR6, "", VAR15);
                    break;
                }
                case '':
                {
                    uint8_t VAR16;
                    const char *VAR17;
                    VAR16 = (VAR11 >> 16) & 0x1f;
                    VAR17 = FUN7(VAR16)->VAR13;
                    FUN4(VAR6, "", VAR17);
                    break;
                }
                case '':
                {
                    uint8_t VAR18;
                    const char *VAR19;
                    VAR18 = (VAR11 >> 11) & 0x1f;
                    VAR19 = FUN7(VAR18)->VAR13;
                    FUN4(VAR6, "", VAR19);
                    break;
                }
                case '':
                {
                    uint8_t VAR20;
                    const char *VAR21;
                    VAR20 = (VAR11 >> 21) & 0x1f;
                    VAR21 = FUN8(VAR20)->VAR13;
                    if (VAR21)
                    {
                        FUN4(VAR6, "", VAR21);
                    }
                    else
                    {
                        FUN4(VAR6, "", VAR20);
                    }
                    break;
                }
                case '':
                {
                    uint16_t VAR22;
                    VAR22 = VAR11 & 0xffff;
                    FUN4(VAR6, "", VAR22);
                    break;
                }
                case '':
                {
                    int16_t VAR23;
                    VAR23 = (VAR24)(VAR11 & 0xffff);
                    FUN4(VAR6, "", VAR23);
                    break;
                }
                case '':
                {
                    uint32_t VAR25;
                    VAR25 = VAR1 + (((VAR24)(VAR11 & 0xffff)) << 2);
                    FUN4(VAR6, "", VAR25);
                    break;
                }
                case '':
                {
                    uint32_t VAR25;
                    int32_t VAR26;
                    VAR26 = (VAR27)((VAR11 & 0x3ffffff) << 6) >> 4;
                    VAR25 = VAR1 + VAR26;
                    FUN4(VAR6, "", VAR25);
                    break;
                }
                case '':
                {
                    uint8_t VAR28;
                    VAR28 = (VAR11 & 0x1f);
                    FUN4(VAR6, "", VAR28);
                    break;
                }
                default:
                    break;
                }
            }
            else
            {
                FUN4(VAR6, "", *VAR12);
            }
            VAR12++;
        }
    }
    else
    {
        FUN4(VAR6, "", VAR11);
    }
    return 4;
}