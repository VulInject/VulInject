static VAR1 FUN1(void)
{
    uint8_t VAR2 = 0;
    uint8_t VAR3 = 0;
    uint8_t VAR4 = 0;
    uint8_t VAR5 = 1;
    uint8_t VAR6 = 2;
    uint8_t VAR7 = 1;
    uint8_t VAR8 = 0x1b;
    uint8_t VAR9 = 0xff;
    uint8_t VAR10 = 0;
    uint8_t VAR11;
    uint8_t VAR12 = 0;
    FUN2(VAR13);
    FUN2(VAR3 << 2 | VAR2);
    FUN3(!FUN4(VAR14));
    FUN2(VAR4);
    FUN2(VAR3);
    FUN2(VAR5);
    FUN2(VAR6);
    FUN2(VAR7);
    FUN2(VAR8);
    FUN2(VAR9);
    uint8_t VAR15 = 0;
    uint8_t VAR16 = 2;
    for (; VAR15 < VAR16; VAR15++)
    {
        VAR10 = FUN5(VAR17 + VAR18);
        if (VAR10 == 0xd0)
        {
            break;
        }
        sleep(1);
    }
    if (VAR15 >= VAR16)
    {
        return 1;
    }
    VAR11 = FUN6();
    if (VAR11 != 0x60)
    {
        VAR12 = 1;
    }
    FUN6();
    FUN6();
    FUN6();
    FUN6();
    FUN6();
    FUN6();
    return VAR12;
}