static void FUN1(VAR1 *VAR2, VAR3 *VAR4, VAR5 *VAR6)
{
    VAR7 *VAR8 = FUN2(VAR2);
    virtio_input_event VAR9;
    int VAR10;
    switch (VAR6->VAR11)
    {
    case VAR12:
        VAR10 = FUN3(VAR6->VAR13.VAR14->VAR14);
        if (VAR10 && VAR15[VAR10])
        {
            VAR9.VAR11 = FUN4(VAR16);
            VAR9.VAR17 = FUN4(VAR15[VAR10]);
            VAR9.VAR18 = FUN5(VAR6->VAR13.VAR14->VAR19 ? 1 : 0);
            FUN6(VAR8, &VAR9);
        }
        else
        {
            if (VAR6->VAR13.VAR14->VAR19)
            {
                fprintf(VAR20, "", VAR21, VAR10, VAR22[VAR10]);
            }
        }
        break;
    case VAR23:
        if (VAR24[VAR6->VAR13.VAR25->VAR26])
        {
            VAR9.VAR11 = FUN4(VAR16);
            VAR9.VAR17 = FUN4(VAR24[VAR6->VAR13.VAR25->VAR26]);
            VAR9.VAR18 = FUN5(VAR6->VAR13.VAR25->VAR19 ? 1 : 0);
            FUN6(VAR8, &VAR9);
        }
        else
        {
            if (VAR6->VAR13.VAR25->VAR19)
            {
                fprintf(VAR20, "", VAR21, VAR6->VAR13.VAR25->VAR26, VAR27[VAR6->VAR13.VAR25->VAR26]);
            }
        }
        break;
    case VAR28:
        VAR9.VAR11 = FUN4(VAR29);
        VAR9.VAR17 = FUN4(VAR30[VAR6->VAR13.VAR31->VAR32]);
        VAR9.VAR18 = FUN5(VAR6->VAR13.VAR31->VAR18);
        FUN6(VAR8, &VAR9);
        break;
    case VAR33:
        VAR9.VAR11 = FUN4(VAR34);
        VAR9.VAR17 = FUN4(VAR35[VAR6->VAR13.VAR36->VAR32]);
        VAR9.VAR18 = FUN5(VAR6->VAR13.VAR36->VAR18);
        FUN6(VAR8, &VAR9);
        break;
    default:
        break;
    }
}