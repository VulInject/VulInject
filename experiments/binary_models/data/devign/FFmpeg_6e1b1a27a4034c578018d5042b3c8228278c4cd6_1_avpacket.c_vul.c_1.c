int FUN1(VAR1 *VAR2, VAR1 *VAR3)
{
    if (VAR3->VAR4)
    {
        int VAR5;
        FUN2(VAR2->VAR6, VAR3->VAR6, VAR3->VAR4 * sizeof(*VAR3->VAR6), 0, VAR7);
        memset(VAR2->VAR6, 0, VAR3->VAR4 * sizeof(*VAR3->VAR6));
        for (VAR5 = 0; VAR5 < VAR3->VAR4; VAR5++)
        {
            FUN2(VAR2->VAR6[VAR5].VAR8, VAR3->VAR6[VAR5].VAR8, VAR3->VAR6[VAR5].VAR9, 1, VAR7);
            VAR2->VAR6[VAR5].VAR9 = VAR3->VAR6[VAR5].VAR9;
            VAR2->VAR6[VAR5].VAR10 = VAR3->VAR6[VAR5].VAR10;
        }
    }
    return 0;
VAR11:
    FUN3(VAR2);
    return FUN4(VAR12);
}