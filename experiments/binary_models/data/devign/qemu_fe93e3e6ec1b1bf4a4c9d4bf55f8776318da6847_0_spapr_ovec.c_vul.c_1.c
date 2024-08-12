int FUN1(void *VAR1, int VAR2, VAR3 *VAR4, const char *VAR5)
{
    uint8_t VAR6[VAR7 + 1];
    uint16_t VAR8;
    unsigned long VAR9;
    int VAR10;
    FUN2(VAR4);
    VAR9 = FUN3(VAR4->VAR11, VAR12);
    VAR8 = (VAR9 == VAR12) ? 1 : VAR9 / VAR13 + 1;
    FUN4(VAR8, <=, VAR7);
    VAR6[0] = VAR8 - 1;
    for (VAR10 = 1; VAR10 < VAR8 + 1; VAR10++)
    {
        VAR6[VAR10] = FUN5(VAR4->VAR11, (VAR10 - 1) * VAR13);
        if (VAR6[VAR10])
        {
            FUN6("", VAR10, VAR8, VAR6[VAR10]);
        }
    }
    return FUN7(VAR1, VAR2, VAR5, VAR6, VAR8);
}