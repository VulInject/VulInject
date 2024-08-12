static int FUN1(VAR1 *VAR2)
{
    int VAR3, VAR4;
    unsigned char VAR5, VAR6, VAR7;
    FUN2(VAR2->VAR8, VAR2->VAR9, 1);
    VAR5 = *VAR2->VAR8++;
    VAR6 = VAR5 & 0x0F;
    VAR7 = (VAR5 >> 4) & 0x0F;
    VAR3 = -8 + VAR6;
    VAR4 = -8 + VAR7;
    FUN3("", VAR5, VAR3, VAR4);
    return FUN4(VAR2, &VAR2->VAR10, VAR3, VAR4);
}