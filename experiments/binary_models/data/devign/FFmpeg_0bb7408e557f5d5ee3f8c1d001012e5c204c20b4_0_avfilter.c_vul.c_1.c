void FUN1(VAR1 *VAR2)
{
    int VAR3;
    if (VAR2->VAR2->VAR4)
        VAR2->VAR2->FUN2(VAR2);
    for (VAR3 = 0; VAR3 < VAR2->VAR5; VAR3++)
    {
        if (VAR2->VAR6[VAR3])
        {
            VAR2->VAR6[VAR3]->VAR7->VAR8[VAR2->VAR6[VAR3]->VAR9] = NULL;
            FUN3(&VAR2->VAR6[VAR3]->VAR10);
            FUN3(&VAR2->VAR6[VAR3]->VAR11);
        }
        FUN4(&VAR2->VAR6[VAR3]);
    }
    for (VAR3 = 0; VAR3 < VAR2->VAR12; VAR3++)
    {
        if (VAR2->VAR8[VAR3])
        {
            if (VAR2->VAR8[VAR3]->VAR13)
                VAR2->VAR8[VAR3]->VAR13->VAR6[VAR2->VAR8[VAR3]->VAR14] = NULL;
            FUN3(&VAR2->VAR8[VAR3]->VAR10);
            FUN3(&VAR2->VAR8[VAR3]->VAR11);
        }
        FUN4(&VAR2->VAR8[VAR3]);
    }
    FUN4(&VAR2->VAR15);
    FUN4(&VAR2->VAR16);
    FUN4(&VAR2->VAR17);
    FUN4(&VAR2->VAR6);
    FUN4(&VAR2->VAR8);
    FUN4(&VAR2->VAR18);
    FUN5(VAR2);