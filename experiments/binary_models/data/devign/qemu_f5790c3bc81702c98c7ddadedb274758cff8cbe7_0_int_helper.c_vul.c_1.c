VAR1 FUN1(uint64_t VAR2, uint64_t VAR3)
{
    uint64_t VAR4;
    {
        typedef uint64_t VAR5 FUN2((FUN3(16)));
        typedef uint8_t VAR6 FUN2((FUN3(16)));
        Q VAR7 = (VAR5){VAR2, 0};
        Q VAR8 = (VAR5){VAR3, 0};
        VAR7 = (VAR5)((VAR6)VAR7 >= (VAR6)VAR8);
        VAR4 = VAR7[0];
    }
    VAR4 &= 0x0101010101010101;
    VAR4 |= VAR4 >> (8 - 1);
    VAR4 |= VAR4 >> (16 - 2);
    VAR4 |= VAR4 >> (32 - 4);
    return VAR4 & 0xff;
    uint8_t VAR9, VAR10, VAR11;
    int VAR12;
    VAR11 = 0;
    for (VAR12 = 0; VAR12 < 8; VAR12++)
    {
        VAR9 = VAR2 >> (VAR12 * 8);
        VAR10 = VAR3 >> (VAR12 * 8);
        if (VAR9 >= VAR10)
        {
            VAR11 |= 1 << VAR12;
        }
    }
    return VAR11;
}