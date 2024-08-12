static int FUN1(VAR1 *VAR2)
{
    VAR3 *VAR4, *VAR5;
    int VAR6, VAR7 = -1;
    VAR8 *VAR9 = FUN2(VAR2, VAR8, VAR2);
    if (!(VAR2->VAR10 & VAR11))
    {
        FUN3("");
        return VAR7;
    }
    VAR9->VAR12 = FUN4(VAR13 *, VAR2->VAR14);
    for (VAR6 = 0; VAR6 < VAR2->VAR14; VAR6++)
    {
        struct vfio_region_info VAR15 = {.VAR16 = sizeof(VAR15)};
        VAR13 *VAR17;
        VAR9->VAR12[VAR6] = FUN5(sizeof(VAR13));
        VAR17 = VAR9->VAR12[VAR6];
        VAR15.VAR18 = VAR6;
        VAR7 = FUN6(VAR2->VAR19, VAR20, &VAR15);
        if (VAR7)
        {
            FUN3("", VAR6);
            goto VAR21;
        }
        VAR17->VAR10 = VAR15.VAR10;
        VAR17->VAR22 = VAR15.VAR22;
        VAR17->VAR23 = VAR15.VAR24;
        VAR17->VAR25 = VAR6;
        VAR17->VAR2 = VAR2;
        FUN7(VAR17->VAR25, (unsigned long)VAR17->VAR10, (unsigned long)VAR17->VAR22, VAR17->VAR2->VAR19, (unsigned long)VAR17->VAR23);
    }
    VAR9->VAR26 = FUN8(VAR27, VAR28, VAR9);
    FUN9(&VAR9->VAR29);
    for (VAR6 = 0; VAR6 < VAR2->VAR30; VAR6++)
    {
        struct vfio_irq_info VAR31 = {.VAR16 = sizeof(VAR31)};
        VAR31.VAR18 = VAR6;
        VAR7 = FUN6(VAR2->VAR19, VAR32, &VAR31);
        if (VAR7)
        {
            FUN10("", VAR2->VAR33);
            goto VAR34;
        }
        else
        {
            FUN11(VAR31.VAR18, VAR31.VAR35, VAR31.VAR10);
            VAR4 = FUN12(VAR2, VAR31);
            if (!VAR4)
            {
                FUN3("", VAR6);
                goto VAR34;
            }
        }
    }
    return 0;
VAR34:
    FUN13(VAR9->VAR26);
    FUN14(VAR4, &VAR9->VAR36, VAR37, VAR5)
    {
        FUN15(VAR4, VAR37);
        FUN16(VAR4);
    }
VAR21:
    for (VAR6 = 0; VAR6 < VAR2->VAR14; VAR6++)
    {
        FUN16(VAR9->VAR12[VAR6]);
    }
    FUN16(VAR9->VAR12);
    return VAR7;
}