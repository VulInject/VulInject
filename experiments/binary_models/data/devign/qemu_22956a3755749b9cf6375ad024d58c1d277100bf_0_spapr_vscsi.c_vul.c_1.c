static int FUN1(VAR1 *VAR2, VAR3 *VAR4, uint64_t VAR5, uint8_t VAR6)
{
    long VAR7, VAR8;
    VAR7 = FUN2(&VAR2->VAR9, VAR4->VAR10.VAR2.VAR11, &VAR4->VAR12, VAR5);
    if (VAR7)
    {
        fprintf(VAR13, "");
    }
    VAR4->VAR10.VAR2.VAR14 = 0x80;
    VAR4->VAR10.VAR2.VAR6 = VAR6;
    VAR4->VAR10.VAR2.VAR15 = 0x00;
    VAR4->VAR10.VAR2.VAR16 = FUN3(0x0000);
    VAR4->VAR10.VAR2.VAR17 = FUN3(VAR5);
    VAR4->VAR10.VAR2.VAR11 = VAR4->VAR12.VAR18.VAR19.VAR20;
    if (VAR7 == 0)
    {
        VAR4->VAR10.VAR2.VAR21 = 0x99;
    }
    else
    {
        VAR4->VAR10.VAR2.VAR21 = 0x00;
    }
    VAR8 = FUN4(&VAR2->VAR9, VAR4->VAR10.VAR22);
    if (VAR8)
    {
        fprintf(VAR13, "");
        return VAR8;
    }
    return VAR7;
}