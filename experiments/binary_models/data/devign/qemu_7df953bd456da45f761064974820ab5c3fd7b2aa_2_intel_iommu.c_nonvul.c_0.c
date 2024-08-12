static void FUN1(VAR1 *VAR2)
{
    VAR3 *VAR4;
    VAR5 *VAR6;
    GHashTableIter VAR7;
    uint32_t VAR8;
    FUN2(&VAR7, VAR2->VAR9);
    FUN3(VAR10, "");
    while (FUN4(&VAR7, NULL, (void **)&VAR6))
    {
        for (VAR8 = 0; VAR8 < VAR11; ++VAR8)
        {
            VAR4 = VAR6->VAR12[VAR8];
            if (!VAR4)
            {
                continue;
            }
            VAR4->VAR13.VAR14 = 0;
        }
    }
    VAR2->VAR14 = 1;
}