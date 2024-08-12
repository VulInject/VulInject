static void FUN1(VAR1 *VAR2)
{
    int VAR3, VAR4, VAR5;
    for (VAR3 = 0; VAR3 < 2; VAR3++)
    {
        for (VAR4 = 0; VAR4 < VAR2->VAR6; VAR4++)
        {
            for (VAR5 = VAR4 ? 1 : 0; VAR5 < 4; VAR5++)
            {
                memset(VAR2->VAR7[VAR3].VAR8[VAR4][VAR5].VAR9, 0, sizeof(VAR2->VAR7[VAR3].VAR8[VAR4][VAR5].VAR9));
            }
        }
    }
    memset(VAR2->VAR10, 0, sizeof(VAR2->VAR10));
    memset(VAR2->VAR11, 0, sizeof(VAR2->VAR11));
}