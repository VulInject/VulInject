static int FUN1(VAR1 *VAR2, VAR3 *VAR4, VAR5 *VAR6, int VAR7)
{
    int VAR8;
    for (VAR8 = 0; VAR8 <= VAR7; VAR8++)
    {
        uint8_t VAR9, VAR10, VAR11;
        unsigned int VAR12 = FUN2(VAR4);
        if (VAR12 > 255)
        {
            FUN3(VAR2, VAR13, "", VAR12);
            FUN4(VAR4, 6);
            continue;
        }
        VAR9 = FUN5(VAR4);
        FUN4(VAR4, 1);
        VAR10 = FUN5(VAR4);
        FUN4(VAR4, 1);
        VAR11 = FUN5(VAR4);
        FUN4(VAR4, 1);
        VAR6[VAR12] = (VAR9 << 16) | (VAR10 << 8) | VAR11;
    }
    return 0;
}