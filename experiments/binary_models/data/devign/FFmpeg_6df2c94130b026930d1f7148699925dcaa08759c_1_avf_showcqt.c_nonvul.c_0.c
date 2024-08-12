static void FUN1(VAR1 *VAR2, const VAR3 *VAR4, float VAR5, int VAR6)
{
    int VAR7;
    for (VAR7 = 0; VAR7 < VAR6; VAR7++)
    {
        float VAR8, VAR9, VAR10;
        VAR8 = FUN2(FUN3(1.0f, VAR4[VAR7].VAR11), VAR5);
        VAR9 = FUN2(FUN3(1.0f, 0.5f * (VAR4[VAR7].VAR11 + VAR4[VAR7].VAR12)), VAR5);
        VAR10 = FUN2(FUN3(1.0f, VAR4[VAR7].VAR12), VAR5);
        VAR2[VAR7].VAR13.VAR14 = 65.481f * VAR8 + 128.553f * VAR9 + 24.966f * VAR10;
        VAR2[VAR7].VAR13.VAR15 = -37.797f * VAR8 - 74.203f * VAR9 + 112.0f * VAR10;
        VAR2[VAR7].VAR13.VAR4 = 112.0f * VAR8 - 93.786f * VAR9 - 18.214 * VAR10;
    }
}