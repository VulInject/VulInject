static void FUN1(VAR1 *VAR2, unsigned int VAR3)
{
    int VAR4;
    FUN2(VAR2, VAR3);
    for (VAR4 = 0; VAR4 < VAR2->VAR5; VAR4++)
        if (VAR2->VAR6[VAR4].VAR7 == VAR3)
        {
            VAR2->VAR6[VAR4].VAR8 = 0;
            VAR2->VAR6[VAR4].VAR9 = 0;
        }
}