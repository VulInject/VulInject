void FUN1(VAR1 *VAR2)
{
    int VAR3;
    VAR2->VAR4 = FUN2();
    VAR2->VAR5 = VAR6;
    VAR2->VAR7 = FUN3(VAR2->VAR5 * sizeof *VAR2->VAR7);
    for (VAR3 = 0; VAR3 < VAR6; VAR3++)
    {
        VAR2->VAR7[VAR3] = VAR8[VAR3].VAR7;
    }
    VAR2->VAR9.VAR10 = VAR11;
    FUN4(&VAR2->VAR9);
}