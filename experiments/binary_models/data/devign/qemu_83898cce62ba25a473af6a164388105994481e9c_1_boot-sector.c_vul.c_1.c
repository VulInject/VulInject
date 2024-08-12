void FUN1(void)
{
    uint8_t VAR1;
    uint8_t VAR2;
    uint16_t VAR3;
    int VAR4;
    for (VAR4 = 0; VAR4 < VAR5; ++VAR4)
    {
        VAR1 = FUN2(VAR6 + VAR7);
        VAR2 = FUN2(VAR6 + VAR7 + 1);
        VAR3 = (VAR2 << 8) | VAR1;
        if (VAR3 == VAR8)
        {
            break;
        }
        FUN3(VAR9);
    }
    FUN4(VAR3, ==, VAR8);
}