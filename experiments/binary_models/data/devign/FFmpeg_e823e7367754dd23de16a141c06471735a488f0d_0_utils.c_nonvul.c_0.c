VAR1 *FUN1(double VAR2, double VAR3)
{
    const int VAR4 = (int)(VAR2 * VAR3 + 0.5) | 1;
    int VAR5;
    double VAR6 = (VAR4 - 1) * 0.5;
    VAR1 *VAR7;
    if (VAR2 < 0 || VAR3 < 0)
        return NULL;
    VAR7 = FUN2(VAR4);
    if (!VAR7)
        return NULL;
    for (VAR5 = 0; VAR5 < VAR4; VAR5++)
    {
        double VAR8 = VAR5 - VAR6;
        VAR7->VAR9[VAR5] = FUN3(-VAR8 * VAR8 / (2 * VAR2 * VAR2)) / FUN4(2 * VAR2 * VAR10);
    }
    FUN5(VAR7, 1.0);
    return VAR7;
}