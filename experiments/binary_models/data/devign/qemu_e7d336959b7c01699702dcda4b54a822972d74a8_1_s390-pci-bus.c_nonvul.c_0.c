int FUN1(void *VAR1)
{
    VAR2 *VAR3 = (VAR2 *)VAR1;
    VAR4 *VAR5;
    VAR6 *VAR7;
    int VAR8 = 1;
    VAR9 *VAR10;
    VAR11 *VAR12 = FUN2();
    VAR10 = FUN3(&VAR12->VAR13);
    if (VAR10)
    {
        FUN4(&VAR12->VAR13, VAR10, VAR14);
        VAR3->VAR15 = 2;
        VAR3->VAR16 = VAR10->VAR16;
        VAR3->VAR17 = FUN5(sizeof(VAR2));
        switch (VAR10->VAR16)
        {
        case 1:
            VAR7 = (VAR6 *)VAR3->VAR18;
            VAR7->VAR19 = FUN6(VAR10->VAR19);
            VAR7->VAR20 = FUN6(VAR10->VAR20);
            VAR7->VAR21 = FUN6(VAR10->VAR21);
            VAR7->VAR22 = FUN7(VAR10->VAR22);
            VAR7->VAR23 = FUN5(VAR10->VAR23);
            break;
        case 2:
            VAR5 = (VAR4 *)VAR3->VAR18;
            VAR5->VAR19 = FUN6(VAR10->VAR19);
            VAR5->VAR20 = FUN6(VAR10->VAR20);
            VAR5->VAR23 = FUN5(VAR10->VAR23);
            break;
        default:
            FUN8();
        }
        FUN9(VAR10);
        VAR8 = 0;
    }
    return VAR8;
}