static void FUN1(VAR1 *VAR2, const VAR3 *VAR4, int VAR5)
{
    uint8_t VAR6[16] = {VAR7, 0, VAR4[0]};
    int VAR8;
    uint32_t VAR9;
    switch (VAR4[0])
    {
    case VAR10:
        VAR8 = (VAR4[1] != 0);
        if (VAR8 != VAR2->VAR8)
        {
            VAR2->VAR8 = VAR8;
            if (VAR8)
            {
                FUN2(VAR2->VAR11, FUN3(VAR12) + (FUN4() / VAR13));
            }
            else
            {
                FUN5(VAR2->VAR11);
            }
        }
        FUN6(VAR2, VAR6, 3);
        break;
    case VAR14:
        FUN6(VAR2, VAR6, 3);
        break;
    case VAR15:
        VAR9 = (((VAR16)VAR4[1]) << 24) + (((VAR16)VAR4[2]) << 16) + (((VAR16)VAR4[3]) << 8) + VAR4[4];
        VAR2->VAR17 = VAR9 - (FUN3(VAR12) / FUN4());
        FUN6(VAR2, VAR6, 3);
        break;
    case VAR18:
        VAR9 = VAR2->VAR17 + (FUN3(VAR12) / FUN4());
        VAR6[3] = VAR9 >> 24;
        VAR6[4] = VAR9 >> 16;
        VAR6[5] = VAR9 >> 8;
        VAR6[6] = VAR9;
        FUN6(VAR2, VAR6, 7);
        break;
    case VAR19:
    case VAR20:
    case VAR21:
    case VAR22:
        FUN6(VAR2, VAR6, 3);
        break;
    case VAR23:
        FUN6(VAR2, VAR6, 3);
        FUN7();
        break;
    case VAR24:
        FUN6(VAR2, VAR6, 3);
        FUN8();
        break;
    case VAR25:
        VAR6[1] = 0x5;
        break;
    case VAR26:
        if (VAR5 == 4)
        {
            FUN6(VAR2, VAR6, 3);
        }
        else
        {
        }
        break;
    default:
        break;
    }