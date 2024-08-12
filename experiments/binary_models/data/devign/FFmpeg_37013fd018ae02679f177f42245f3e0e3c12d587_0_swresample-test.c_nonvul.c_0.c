static void FUN1(void *VAR1, enum AVSampleFormat VAR2, int VAR3, int VAR4, int VAR5)
{
    int VAR6, VAR7, VAR8;
    double VAR9, VAR10, VAR11, VAR12;
    double VAR13[VAR14];
    double VAR15[VAR14];
    double VAR16[VAR14];
    unsigned static VAR17;
    VAR8 = 0;
    VAR11 = 0;
    for (VAR6 = 0; VAR6 < 1 * VAR4 && VAR8 < VAR5; VAR6++, VAR8++)
    {
        VAR9 = FUN2(VAR11) * 0.30;
        for (VAR7 = 0; VAR7 < VAR3; VAR7++)
            PUT_SAMPLE VAR11 += VAR18 * 1000.0 * 2.0 / VAR4;
    }
    VAR11 = 0;
    for (VAR6 = 0; VAR6 < 1 * VAR4 && VAR8 < VAR5; VAR6++, VAR8++)
    {
        VAR9 = FUN2(VAR11) * 0.30;
        for (VAR7 = 0; VAR7 < VAR3; VAR7++)
            PUT_SAMPLE VAR10 = 100.0 + (((10000.0 - 100.0) * VAR6) / VAR4);
        VAR11 += VAR18 * VAR10 * 2.0 / VAR4;
    }
    for (VAR6 = 0; VAR6 < VAR4 / 2 && VAR8 < VAR5; VAR6++, VAR8++)
    {
        VAR9 = FUN3(VAR17) * 0.30;
        for (VAR7 = 0; VAR7 < VAR3; VAR7++)
            VAR19
    }
    for (VAR6 = 0; VAR6 < VAR4 / 2 && VAR8 < VAR5; VAR6++, VAR8++)
    {
        VAR9 = FUN3(VAR17);
        for (VAR7 = 0; VAR7 < VAR3; VAR7++)
            VAR19
    }
    for (VAR7 = 0; VAR7 < VAR3; VAR7++)
    {
        VAR16[VAR7] = 0;
        VAR13[VAR7] = 100 + FUN4(VAR17) % 5000;
        VAR15[VAR7] = 100 + FUN4(VAR17) % 5000;
    }
    for (VAR6 = 0; VAR6 < 1 * VAR4 && VAR8 < VAR5; VAR6++, VAR8++)
    {
        for (VAR7 = 0; VAR7 < VAR3; VAR7++)
        {
            VAR9 = FUN2(VAR16[VAR7]) * 0.30;
            PUT_SAMPLE VAR10 = VAR13[VAR7] + (((VAR15[VAR7] - VAR13[VAR7]) * VAR6) / VAR4);
            VAR16[VAR7] += VAR18 * VAR10 * 2.0 / VAR4;
        }
    }
    VAR11 = 0;
    VAR12 = 0;
    for (VAR6 = 0; VAR6 < 2 * VAR4 && VAR8 < VAR5; VAR6++, VAR8++)
    {
        for (VAR7 = 0; VAR7 < VAR3; VAR7++)
        {
            double VAR20 = (1.0 + FUN2(VAR12)) * 0.15;
            if (VAR7 & 1)
                VAR20 = 0.30 - VAR20;
            VAR9 = FUN2(VAR11) * VAR20;
            PUT_SAMPLE VAR11 += VAR18 * 500.0 * 2.0 / VAR4;
            VAR12 += VAR18 * 2.0 / VAR4;
        }
    }
}