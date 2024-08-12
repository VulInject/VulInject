static int FUN1(VAR1 *VAR2)
{
    unsigned int VAR3;
    int VAR4;
    VAR5 *VAR6;
    VAR3 = FUN2(&VAR2->VAR7);
    if (VAR3 > 31 || !VAR2->VAR8.VAR9[VAR3])
    {
        FUN3(VAR2->VAR10, VAR11, "", VAR3);
        return VAR12;
    }
    VAR6 = (VAR5 *)VAR2->VAR8.VAR9[VAR3]->VAR13;
    if (VAR6->VAR14)
    {
        for (VAR4 = 0; VAR4 < VAR6->VAR15; VAR4++)
        {
            VAR2->VAR16[VAR4] = FUN4(&VAR2->VAR7, VAR6->VAR17);
            FUN5(&VAR2->VAR7, VAR6->VAR17);
        }
    }
    if (VAR6->VAR18)
    {
        for (VAR4 = 0; VAR4 < VAR6->VAR15; VAR4++)
        {
            VAR2->VAR16[VAR4] = FUN4(&VAR2->VAR7, VAR6->VAR17);
            FUN5(&VAR2->VAR7, VAR6->VAR17);
        }
    }
    VAR2->VAR19 = 1;
    return 0;
}