static int FUN1(VAR1 *VAR2, VAR3 *VAR4)
{
    VAR5 *VAR6 = FUN2(VAR5, VAR7, VAR2->VAR8.VAR9);
    uint64_t VAR10;
    int VAR11, VAR12, VAR13, VAR14, VAR15;
    VAR3 *VAR16;
    uint8_t VAR17;
    VAR12 = VAR2->VAR8.VAR18.VAR19[1] & 0x8;
    VAR11 = VAR2->VAR8.VAR18.VAR19[2] & 0x3f;
    VAR15 = (VAR2->VAR8.VAR18.VAR19[2] & 0xc0) >> 6;
    FUN3("", (VAR2->VAR8.VAR18.VAR19[0] == VAR20) ? 6 : 10, VAR11, VAR2->VAR8.VAR18.VAR21, VAR15);
    memset(VAR4, 0, VAR2->VAR8.VAR18.VAR21);
    VAR16 = VAR4;
    if (FUN4(VAR6->VAR7.VAR22.VAR23))
    {
        VAR17 = 0x80;
    }
    else
    {
        VAR17 = 0x00;
    }
    if (VAR2->VAR8.VAR18.VAR19[0] == VAR20)
    {
        VAR16[1] = 0;
        VAR16[2] = VAR17;
        VAR16[3] = 0;
        VAR16 += 4;
    }
    else
    {
        VAR16[2] = 0;
        VAR16[3] = VAR17;
        VAR16[6] = VAR16[7] = 0;
        VAR16 += 8;
    }
    FUN5(VAR6->VAR7.VAR22.VAR23, &VAR10);
    if (!VAR12 && VAR6->VAR7.VAR24 == VAR25 && VAR10)
    {
        if (VAR2->VAR8.VAR18.VAR19[0] == VAR20)
        {
            VAR4[3] = 8;
        }
        else
        {
            VAR4[7] = 8;
        }
        VAR10 /= (VAR6->VAR7.VAR26 / 512);
        if (VAR10 > 0xffffff)
        {
            VAR10 = 0;
        }
        VAR16[0] = 0;
        VAR16[1] = (VAR10 >> 16) & 0xff;
        VAR16[2] = (VAR10 >> 8) & 0xff;
        VAR16[3] = VAR10 & 0xff;
        VAR16[4] = 0;
        VAR16[5] = 0;
        VAR16[6] = VAR6->VAR7.VAR26 >> 8;
        VAR16[7] = 0;
        VAR16 += 8;
    }
    if (VAR15 == 3)
    {
        FUN6(VAR2, FUN7(VAR27));
        return -1;
    }
    if (VAR11 == 0x3f)
    {
        for (VAR11 = 0; VAR11 <= 0x3e; VAR11++)
        {
            FUN8(VAR6, VAR11, &VAR16, VAR15);
        }
    }
    else
    {
        VAR14 = FUN8(VAR6, VAR11, &VAR16, VAR15);
        if (VAR14 == -1)
        {
            return -1;
        }
    }
    VAR13 = VAR16 - VAR4;
    if (VAR2->VAR8.VAR18.VAR19[0] == VAR20)
    {
        VAR4[0] = VAR13 - 1;
    }
    else
    {
        VAR4[0] = ((VAR13 - 2) >> 8) & 0xff;
        VAR4[1] = (VAR13 - 2) & 0xff;
    }
    if (VAR13 > VAR2->VAR8.VAR18.VAR21)
    {
        VAR13 = VAR2->VAR8.VAR18.VAR21;
    }
    return VAR13;
}