static int FUN1(VAR1 *VAR2, VAR3 *VAR4)
{
    int VAR5;
    unsigned int VAR6;
    unsigned int VAR7;
    VAR8 *VAR9 = VAR2->VAR10;
    VAR11 *VAR12 = VAR2->VAR12;
    int VAR13;
    int VAR14;
    unsigned char VAR15, VAR16, VAR17;
    unsigned char VAR18[768];
    uint32_t VAR19[256];
    if (VAR2->VAR12->VAR20)
        return FUN2(VAR21);
    if (VAR9->VAR22)
    {
        VAR6 = FUN3(VAR12);
        if (VAR6 == 2)
        {
            return FUN2(VAR21);
        }
        else if (VAR6 == 1)
        {
            if (FUN4(VAR12, VAR18, 768) != 768)
                return FUN2(VAR21);
            VAR14 = 2;
            for (VAR13 = 0; VAR13 < 768; VAR13++)
                if (VAR18[VAR13] > 63)
                {
                    VAR14 = 0;
                    break;
                    for (VAR13 = 0; VAR13 < 256; VAR13++)
                    {
                        VAR15 = VAR18[VAR13 * 3] << VAR14;
                        VAR16 = VAR18[VAR13 * 3 + 1] << VAR14;
                        VAR17 = VAR18[VAR13 * 3 + 2] << VAR14;
                        VAR19[VAR13] = (VAR15 << 16) | (VAR16 << 8) | (VAR17);
                        VAR7 = FUN3(VAR12);
                        FUN5(VAR12, 4);
                        VAR7 -= 4;
                        VAR5 = FUN6(VAR12, VAR4, VAR7);
                        if (VAR5 < 0)
                            return VAR5;
                        if (VAR6 == 1)
                        {
                            VAR23 *VAR24;
                            VAR24 = FUN7(VAR4, VAR25, VAR26);
                            if (VAR5 < 0)
                                return VAR5;
                            memcpy(VAR24, VAR19, VAR26);
                            VAR4->VAR27 |= VAR28;
                            VAR4->VAR29 = VAR9->VAR30;
                            VAR4->VAR31 = 1;
                        }
                        else
                        {
                            if (VAR9->VAR32)
                                VAR7 = VAR9->VAR33;
                            else
                                VAR7 = VAR9->VAR34;
                            VAR5 = FUN6(VAR12, VAR4, VAR7);
                            if (VAR5 < 0)
                                return VAR5;
                            VAR4->VAR29 = VAR9->VAR35;
                            VAR4->VAR31 = VAR7 / VAR9->VAR36;
                            VAR9->VAR32 ^= 1;
                            if (VAR9->VAR37)
                                VAR9->VAR22 ^= 1;
                            return VAR5;