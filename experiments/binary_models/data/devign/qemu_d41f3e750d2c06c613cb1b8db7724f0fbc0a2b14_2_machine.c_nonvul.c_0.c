static void FUN1(VAR1 *VAR2)
{
    int VAR3;
    bool VAR4;
    VAR5 *VAR6 = FUN2(NULL);
    VAR7 *VAR8 = FUN3(VAR2);
    const VAR9 *VAR10 = VAR8->FUN4(VAR2);
    assert(VAR11);
    for (VAR3 = 0; VAR3 < VAR10->VAR12; VAR3++)
    {
        if (VAR10->VAR13[VAR3].VAR14.VAR15)
        {
            break;
        }
    }
    VAR4 = (VAR3 == VAR10->VAR12);
    for (VAR3 = 0; VAR3 < VAR10->VAR12; VAR3++)
    {
        const VAR16 *VAR17 = &VAR10->VAR13[VAR3];
        if (!VAR17->VAR14.VAR15)
        {
            CpuInstanceProperties VAR14 = VAR17->VAR14;
            if (!VAR4)
            {
                char *VAR18 = FUN5(VAR17);
                FUN6(VAR6, "", VAR6->VAR12 ? "" : "", VAR3, VAR18);
                FUN7(VAR18);
                VAR14.VAR19 = 0;
            }
            VAR14.VAR15 = true;
            FUN8(VAR2, &VAR14, &VAR20);
        }
    }
    if (VAR6->VAR12 && !FUN9())
    {
        FUN10("", VAR6->VAR21);
        FUN10(""
                     ""
                     "");
    }
    FUN11(VAR6, true);
}