static void FUN1(VAR1 *VAR2, float *VAR3, float *VAR4, VAR5 *VAR6)
{
    const float *VAR7 = VAR6->VAR8[0] ? VAR9 : VAR10;
    const float *VAR11 = VAR6->VAR8[0] ? VAR12 : VAR13;
    const float *VAR14 = VAR6->VAR8[1] ? VAR9 : VAR10;
    const float *VAR15 = VAR6->VAR8[1] ? VAR12 : VAR13;
    if (VAR6->VAR16[0] != VAR17)
    {
        VAR2->VAR18.FUN2(VAR4, VAR4, VAR14, 1024);
    }
    else
    {
        memset(VAR4, 0, 448 * sizeof(float));
        VAR2->VAR18.FUN2(VAR4 + 448, VAR4 + 448, VAR15, 128);
        memcpy(VAR4 + 576, VAR4 + 576, 448 * sizeof(float));
    }
    if (VAR6->VAR16[0] != VAR19)
    {
        VAR2->VAR18.FUN3(VAR4 + 1024, VAR4 + 1024, VAR7, 1024);
    }
    else
    {
        memcpy(VAR4 + 1024, VAR4 + 1024, 448 * sizeof(float));
        VAR2->VAR18.FUN3(VAR4 + 1024 + 448, VAR4 + 1024 + 448, VAR11, 128);
        memset(VAR4 + 1024 + 576, 0, 448 * sizeof(float));
    }
    VAR2->VAR20.FUN4(&VAR2->VAR20, VAR3, VAR4);
}