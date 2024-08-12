void *FUN1(VAR1 *VAR2, int VAR3)
{
    VAR4 *VAR5;
    VAR5 = (VAR4 *)FUN2(VAR2, "", sizeof(*VAR5), VAR3, NULL, NULL);
    if (VAR5 == NULL)
    {
        fprintf(VAR6, "");
        return NULL;
    }
    VAR5->VAR7.VAR8[0x00] = 0x00;
    VAR5->VAR7.VAR8[0x01] = 0x10;
    VAR5->VAR7.VAR8[0x02] = 0x12;
    VAR5->VAR7.VAR8[0x03] = 0x00;
    VAR5->VAR7.VAR8[0x0b] = 0x01;
    VAR5->VAR7.VAR8[0x2e] = 0x00;
    VAR5->VAR7.VAR8[0x2f] = 0x10;
    VAR5->VAR7.VAR8[0x0d] = 0xff;
    VAR5->VAR7.VAR8[0x3d] = 0x01;
    VAR5->VAR9 = FUN3(0, VAR10, VAR11, VAR5);
    VAR5->VAR12 = FUN3(0, VAR13, VAR14, VAR5);
    FUN4((struct VAR15 *)VAR5, 0, 256, VAR16, VAR17);
    FUN4((struct VAR15 *)VAR5, 1, 0x400, VAR18, VAR19);
    FUN4((struct VAR15 *)VAR5, 2, 0x2000, VAR18, VAR20);
    VAR5->VAR21 = FUN5(sizeof(VAR22));
    VAR5->VAR23 = 1;
    VAR5->VAR24 = 0;
    FUN6(VAR5);
    return VAR5;
}