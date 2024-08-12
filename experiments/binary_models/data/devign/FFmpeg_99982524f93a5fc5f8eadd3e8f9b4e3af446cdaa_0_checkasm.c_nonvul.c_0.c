static void FUN1(const char *VAR1, int VAR2)
{
    int VAR3 = VAR4.VAR5;
    VAR2 |= VAR3;
    FUN2(-1);
    VAR4.VAR5 = VAR2 & FUN3();
    FUN2(VAR4.VAR5);
    if (!VAR2 || VAR4.VAR5 != VAR3)
    {
        int VAR6;
        VAR4.VAR7 = VAR1;
        for (VAR6 = 0; VAR8[VAR6].VAR9; VAR6++)
        {
            VAR4.VAR10 = VAR8[VAR6].VAR1;
            VAR8[VAR6].FUN4();
        }
    }
}