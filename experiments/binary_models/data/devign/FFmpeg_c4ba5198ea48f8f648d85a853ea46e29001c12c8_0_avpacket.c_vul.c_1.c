void FUN1(VAR1 *VAR2)
{
    int VAR3;
    FUN2(VAR2->VAR4);
    VAR2->VAR4 = NULL;
    VAR2->VAR5 = 0;
    for (VAR3 = 0; VAR3 < VAR2->VAR6; VAR3++)
        FUN2(VAR2->VAR7[VAR3].VAR4);
    FUN3(&VAR2->VAR7);
    VAR2->VAR6 = 0;
}