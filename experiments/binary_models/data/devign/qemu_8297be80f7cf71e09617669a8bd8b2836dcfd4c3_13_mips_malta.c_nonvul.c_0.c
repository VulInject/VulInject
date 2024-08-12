static void FUN1(VAR1 *VAR2, ram_addr_t VAR3)
{
    enum
    {
        VAR4 = 0x4,
        VAR5 = 0x8
    } VAR6;
    VAR1 *VAR7 = VAR8.VAR9;
    uint8_t VAR10 = 0;
    uint16_t VAR11 = 0;
    int VAR12;
    VAR3 >>= 20;
    while ((VAR3 >= 4) && (VAR10 <= 2))
    {
        int VAR13 = FUN2(31 - FUN3(VAR3), 14);
        VAR10++;
        VAR11 |= 1 << (VAR13 - 2);
        VAR3 -= 1 << VAR13;
    }
    if ((VAR10 == 1) && (VAR11 > 1))
    {
        VAR10++;
        VAR11 >>= 1;
    }
    if (VAR11 & 0xff00)
    {
        VAR11 = (VAR11 & 0xe0) | ((VAR11 >> 8) & 0x1f);
        VAR6 = VAR5;
    }
    else if (!(VAR11 & 0x1f))
    {
        VAR6 = VAR5;
    }
    else
    {
        VAR6 = VAR4;
    }
    if (VAR3)
    {
        FUN4(""
                    "",
                    (int)VAR3);
    }
    VAR7[2] = VAR6;
    VAR7[5] = VAR10;
    VAR7[31] = VAR11;
    VAR7[63] = 0;
    for (VAR12 = 0; VAR12 < 63; VAR12++)
    {
        VAR7[63] += VAR7[VAR12];
    }
    memcpy(VAR2, VAR7, sizeof(VAR8.VAR9));
}