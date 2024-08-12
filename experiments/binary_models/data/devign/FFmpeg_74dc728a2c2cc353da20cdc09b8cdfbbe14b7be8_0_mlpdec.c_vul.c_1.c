static void FUN1(VAR1 *VAR2, unsigned int VAR3)
{
    VAR4 *VAR5 = &VAR2->VAR6[VAR3];
    unsigned int VAR7;
    uint32_t VAR8 = VAR5->VAR9;
    unsigned int VAR10 = VAR5->VAR11;
    for (VAR7 = 0; VAR7 < VAR5->VAR12; VAR7++)
    {
        uint16_t VAR13 = VAR8 >> 7;
        VAR2->VAR14[VAR7][VAR10 + 1] = ((VAR15)(VAR8 >> 15)) << VAR5->VAR16;
        VAR2->VAR14[VAR7][VAR10 + 2] = ((VAR15)VAR13) << VAR5->VAR16;
        VAR8 = (VAR8 << 16) ^ VAR13 ^ (VAR13 << 5);
    }
    VAR5->VAR9 = VAR8;
}