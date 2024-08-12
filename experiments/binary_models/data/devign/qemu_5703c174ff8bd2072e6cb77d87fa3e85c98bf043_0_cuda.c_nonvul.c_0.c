static void FUN1(VAR1 *VAR2, const VAR3 *VAR4, int VAR5)
{
    uint8_t VAR6[16];
    int VAR7;
    uint32_t VAR8;
    switch (VAR4[0])
    {
    case VAR9:
        VAR7 = (VAR4[1] != 0);
        if (VAR7 != VAR2->VAR7)
        {
            VAR2->VAR7 = VAR7;
            if (VAR7)
            {
                FUN2(VAR2->VAR10, FUN3(VAR11) + (VAR12 / VAR13));
            }
            else
            {
                FUN4(VAR2->VAR10);
            }
        }
        VAR6[0] = VAR14;
        VAR6[1] = VAR4[1];
        FUN5(VAR2, VAR6, 2);
        break;
    case VAR15:
        VAR8 = (((VAR16)VAR4[1]) << 24) + (((VAR16)VAR4[2]) << 16) + (((VAR16)VAR4[3]) << 8) + VAR4[4];
        VAR2->VAR17 = VAR8 - (FUN3(VAR11) / VAR12);
        VAR6[0] = VAR14;
        VAR6[1] = 0;
        VAR6[2] = 0;
        FUN5(VAR2, VAR6, 3);
        break;
    case VAR18:
        VAR8 = VAR2->VAR17 + (FUN3(VAR11) / VAR12);
        VAR6[0] = VAR14;
        VAR6[1] = 0;
        VAR6[2] = 0;
        VAR6[3] = VAR8 >> 24;
        VAR6[4] = VAR8 >> 16;
        VAR6[5] = VAR8 >> 8;
        VAR6[6] = VAR8;
        FUN5(VAR2, VAR6, 7);
        break;
    case VAR19:
    case VAR20:
    case VAR21:
    case VAR22:
        VAR6[0] = VAR14;
        VAR6[1] = 0;
        FUN5(VAR2, VAR6, 2);
        break;
    case VAR23:
        VAR6[0] = VAR14;
        VAR6[1] = 0;
        FUN5(VAR2, VAR6, 2);
        FUN6();
        break;
    case VAR24:
        VAR6[0] = VAR14;
        VAR6[1] = 0;
        FUN5(VAR2, VAR6, 2);
        FUN7();
        break;
    default:
        break;
    }
}