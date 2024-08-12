static void FUN1(struct VAR1 *VAR2)
{
    struct VAR1 *VAR3 = VAR2;
    int VAR4;
    FUN2(&VAR2->VAR5);
    do
    {
        for (VAR4 = 0; VAR4 < VAR6; VAR4++)
        {
            if (VAR3->VAR7[VAR4] == NULL)
            {
                goto VAR8;
            }
            VAR3->VAR9[VAR4] = 0;
            FUN3(&VAR3->VAR7[VAR4], NULL);
        }
        VAR3 = VAR3->VAR10;
    } while (VAR3);
VAR8:
    FUN4(&VAR2->VAR5);
}