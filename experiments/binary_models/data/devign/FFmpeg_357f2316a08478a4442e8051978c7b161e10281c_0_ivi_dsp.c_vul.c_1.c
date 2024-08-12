void FUN1(const VAR1 *VAR2, VAR3 *VAR4, ptrdiff_t VAR5, const VAR6 *VAR7)
{
    int VAR8, VAR9, VAR10, VAR11;
    const VAR1 *VAR12;
    VAR1 *VAR13;
    int VAR14[16];
    int VAR15, VAR16, VAR17, VAR18, VAR19;
    VAR12 = VAR2;
    VAR13 = VAR14;
    for (VAR8 = 0; VAR8 < 4; VAR8++)
    {
        if (VAR7[VAR8])
        {
            VAR9 = !(VAR8 & 2);
            VAR10 = VAR12[0] << VAR9;
            VAR11 = VAR12[4] << VAR9;
            FUN2(VAR10, VAR11, VAR12[8], VAR12[12], VAR13[0], VAR13[4], VAR13[8], VAR13[12], VAR15, VAR16, VAR17, VAR18, VAR19);
        }
        else
            VAR13[0] = VAR13[4] = VAR13[8] = VAR13[12] = 0;
        VAR12++;
        VAR13++;
    }
    VAR12 = VAR14;
    for (VAR8 = 0; VAR8 < 4; VAR8++)
    {
        if (!VAR12[0] && !VAR12[1] && !VAR12[2] && !VAR12[3])
        {
            memset(VAR4, 0, 4 * sizeof(VAR4[0]));
        }
        else
        {
            FUN2(VAR12[0], VAR12[1], VAR12[2], VAR12[3], VAR4[0], VAR4[1], VAR4[2], VAR4[3], VAR15, VAR16, VAR17, VAR18, VAR19);
        }
        VAR12 += 4;
        VAR4 += VAR5;
    }
}