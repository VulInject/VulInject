void FUN1(VAR1 *VAR2)
{
    int64_t VAR3;
    FUN2(VAR2);
    FUN2(VAR2->VAR4);
    for (VAR3 = 0; VAR3 < VAR2->VAR5; VAR3++)
    {
        FUN3(VAR2->VAR4[VAR3].VAR6);
    }
    FUN3(VAR2->VAR4);
    VAR2->VAR4 = NULL;