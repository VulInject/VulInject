static void FUN1(VAR1 *VAR2)
{
    uint8_t VAR3;
    uint8_t VAR4;
    uint8_t VAR5;
    int VAR6;
    VAR5 = (VAR2->VAR7 & VAR2->VAR8) | ~VAR2->VAR8;
    VAR3 = VAR2->VAR9 ^ VAR5;
    if (!VAR3)
        return;
    VAR2->VAR9 = VAR5;
    for (VAR6 = 0; VAR6 < 8; VAR6++)
    {
        VAR4 = 1 << VAR6;
        if (VAR3 & VAR4)
        {
            FUN2("", VAR6, (VAR5 & VAR4) != 0);
            FUN3(VAR2->VAR5[VAR6], (VAR5 & VAR4) != 0);
        }
    }
}