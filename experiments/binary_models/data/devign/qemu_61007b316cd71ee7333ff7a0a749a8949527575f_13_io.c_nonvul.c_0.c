static void FUN1(VAR1 *VAR2)
{
    int VAR3;
    for (VAR3 = 0; VAR3 < VAR2->VAR4; VAR3++)
    {
        VAR2->VAR5[VAR3].FUN2(VAR2->VAR5[VAR3].VAR6, VAR2->VAR7);
        if (VAR2->VAR5[VAR3].VAR8)
        {
            FUN3(VAR2->VAR5[VAR3].VAR8);
        }
        FUN4(VAR2->VAR5[VAR3].VAR8);
    }
}