static void FUN1(VAR1 *VAR2, double VAR3)
{
    int VAR4;
    const float VAR5 = VAR2->VAR6->VAR5 / (128.0 * 128.0);
    const float VAR7 = VAR2->VAR6->VAR7 / (128.0 * 128.0);
    const float VAR8 = VAR2->VAR6->VAR9;
    const float VAR10 = VAR2->VAR6->VAR10;
    const float VAR11 = VAR2->VAR6->VAR11;
    float VAR12 = 0.0;
    float VAR13 = 0.0;
    float VAR14[VAR2->VAR15];
    float VAR16[VAR2->VAR15];
    const int VAR17 = VAR2->VAR6->VAR18;
    const int VAR19 = VAR2->VAR6->VAR20;
    VAR21 *const VAR22 = &VAR2->VAR23;
    for (VAR4 = 0; VAR4 < VAR2->VAR15; VAR4++)
    {
        float VAR24 = FUN2(VAR22->VAR25[VAR4]);
        float VAR26 = FUN2(VAR22->VAR27[VAR4]);
        const int VAR28 = VAR22->VAR29[VAR4];
        float VAR30, VAR31, VAR32;
        if (VAR26 < VAR3 / 3)
            VAR26 = VAR3 / 3;
        if (VAR24 < VAR3 / 3)
            VAR24 = VAR3 / 3;
        if ((VAR2->VAR33[VAR4] & VAR34))
        {
            VAR31 = VAR26;
            VAR32 = 1.0 + VAR11;
        }
        else
        {
            VAR31 = VAR24;
            VAR32 = FUN3(VAR24, -VAR8);
        }
        VAR32 *= FUN3(VAR26, -VAR10);
        if (VAR28 > 127)
            VAR32 *= (1.0 - (VAR28 - 128) * (VAR28 - 128) * VAR5);
        else
            VAR32 *= (1.0 - (VAR28 - 128) * (VAR28 - 128) * VAR7);
        if (VAR32 < 0.00001)
            VAR32 = 0.00001;
        VAR30 = VAR31 * VAR32;
        VAR13 += VAR31;
        VAR12 += VAR30;
        VAR14[VAR4] = VAR31;
        VAR16[VAR4] = VAR30;
    }
    if (VAR2->VAR35 & VAR36)
    {
        for (VAR4 = 0; VAR4 < VAR2->VAR15; VAR4++)
        {
            float VAR37 = VAR3 * VAR14[VAR4] / VAR16[VAR4];
            VAR37 *= VAR12 / VAR13;
            if (VAR37 > VAR19)
            {
                VAR12 -= VAR16[VAR4];
                VAR13 -= VAR14[VAR4] * VAR3 / VAR19;
            }
            else if (VAR37 < VAR17)
            {
                VAR12 -= VAR16[VAR4];
                VAR13 -= VAR14[VAR4] * VAR3 / VAR17;
            }
        }
    }
    for (VAR4 = 0; VAR4 < VAR2->VAR15; VAR4++)
    {
        float VAR37 = VAR3 * VAR14[VAR4] / VAR16[VAR4];
        int VAR38;
        if (VAR2->VAR35 & VAR36)
        {
            VAR37 *= VAR12 / VAR13;
        }
        if (VAR4 && FUN4(VAR22->VAR39[VAR4 - 1] - VAR37) < 0.75)
            VAR38 = VAR22->VAR39[VAR4 - 1];
        else
            VAR38 = (int)(VAR37 + 0.5);
        if (VAR38 > VAR19)
            VAR38 = VAR19;
        else if (VAR38 < VAR17)
            VAR38 = VAR17;
        VAR22->VAR39[VAR4] = VAR38;
    }
}