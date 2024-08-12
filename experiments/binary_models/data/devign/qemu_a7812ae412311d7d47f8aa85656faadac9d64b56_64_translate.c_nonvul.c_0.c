static void FUN1(TCGv VAR1)
{
    int VAR2;
    VAR3--;
    VAR2 = VAR3;
    if (FUN2(VAR4[VAR2], VAR1))
        return;
    while (!FUN2(VAR4[VAR2], VAR1))
        VAR2--;
    while (VAR2 < VAR3)
    {
        VAR4[VAR2] = VAR4[VAR2 + 1];
        VAR2++;
    }
    VAR4[VAR2] = VAR1;
}