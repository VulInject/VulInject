VAR1 *FUN1(VAR2 *VAR3, VAR4 *VAR5, int VAR6)
{
    VAR7 *VAR8;
    static int VAR9;
    VAR8 = (VAR7 *)FUN2(VAR3, "", 6900, 0x1000, 0, VAR10, 0x02, 0x00, 0x00, sizeof(struct VAR11), sizeof(VAR7));
    if (!VAR8)
        return NULL;
    VAR8->VAR12.VAR13 = VAR14;
    VAR8->VAR12.VAR15 = VAR16;
    VAR8->VAR12.VAR17 = VAR18;
    VAR8->VAR19 = FUN3(&VAR8->VAR12, 256, VAR20);
    VAR8->VAR21 = FUN3(&VAR8->VAR12, 256, VAR22);
    memcpy(VAR8->VAR23, VAR5->VAR24, 6);
    VAR8->VAR25 = VAR26;
    VAR8->VAR27 = FUN4(VAR5->VAR28, VAR5->VAR29, VAR5->VAR30, VAR31, VAR32, VAR8);
    VAR8->VAR27->VAR33 = VAR34;
    FUN5(VAR8->VAR27, VAR8->VAR23);
    VAR8->VAR35 = FUN6(VAR36, VAR37, VAR8);
    VAR8->VAR38 = 0;
    VAR8->VAR39 = 0;
    FUN7("", VAR9++, 2, VAR40, VAR41, VAR8);
    return (VAR1 *)VAR8;
}