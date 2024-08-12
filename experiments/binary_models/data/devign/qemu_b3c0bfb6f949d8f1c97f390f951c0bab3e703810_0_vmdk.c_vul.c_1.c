static void FUN1(VAR1 *VAR2)
{
    int VAR3;
    VAR4 *VAR5 = VAR2->VAR6;
    for (VAR3 = 0; VAR3 < VAR5->VAR7; VAR3++)
    {
        FUN2(VAR5->VAR8[VAR3].VAR9);
        FUN2(VAR5->VAR8[VAR3].VAR10);
        FUN2(VAR5->VAR8[VAR3].VAR11);
    }
    FUN2(VAR5->VAR8);
}