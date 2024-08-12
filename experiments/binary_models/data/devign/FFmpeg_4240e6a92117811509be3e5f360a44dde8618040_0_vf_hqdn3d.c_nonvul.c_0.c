static VAR1 *FUN1(double VAR2, int VAR3)
{
    int VAR4;
    double VAR5, VAR6, VAR7;
    VAR1 *VAR8 = FUN2((512 << VAR9) * sizeof(VAR1));
    if (!VAR8)
        return NULL;
    VAR5 = FUN3(0.25) / FUN3(1.0 - FUN4(VAR2, 252.0) / 255.0 - 0.00001);
    for (VAR4 = -256 << VAR9; VAR4 < 256 << VAR9; VAR4++)
    {
        double VAR10 = ((VAR4 << (9 - VAR9)) + (1 << (8 - VAR9)) - 1) / 512.0;
        VAR6 = FUN5(0, 1.0 - FUN6(VAR10) / 255.0);
        VAR7 = FUN7(VAR6, VAR5) * 256.0 * VAR10;
        VAR8[(256 << VAR9) + VAR4] = FUN8(VAR7);
    }
    VAR8[0] = !!VAR2;
    return VAR8;
}