static void FUN1(VAR1 *VAR2, int VAR3, int VAR4)
{
    int VAR5;
    double VAR6;
    for (VAR5 = 0; VAR5 < 4; VAR5++)
        VAR2->VAR7[VAR5] = VAR2->VAR8[VAR5] = 0;
    for (VAR5 = 4; VAR5 <= 60; VAR5++)
    {
        VAR6 = VAR2->VAR9;
        if (VAR5 < 60)
            VAR6 *= 1.0 + (VAR5 & 3) * 0.25;
        VAR6 *= 1 << ((VAR5 >> 2) - 1);
        VAR6 *= (double)(VAR10 << VAR11);
        VAR2->VAR7[VAR5] = VAR6 / VAR3;
        VAR2->VAR8[VAR5] = VAR6 / VAR4;
    }
    for (VAR5 = 60; VAR5 < 76; VAR5++)
    {
        VAR2->VAR7[VAR5] = VAR12 - 1;
        VAR2->VAR8[VAR5] = VAR2->VAR8[60];
    }
    for (VAR5 = 0; VAR5 < 64; VAR5++)
    {
        FUN2(VAR13, ("", VAR5, ((double)(VAR10 << VAR11) / VAR2->VAR7[VAR5]) * (1000.0 / VAR2->VAR6), ((double)(VAR10 << VAR11) / VAR2->VAR8[VAR5]) * (1000.0 / VAR2->VAR6)));
    }
}