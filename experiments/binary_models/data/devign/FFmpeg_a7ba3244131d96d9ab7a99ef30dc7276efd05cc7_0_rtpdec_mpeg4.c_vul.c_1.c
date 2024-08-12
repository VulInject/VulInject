static int FUN1(VAR1 *VAR2, VAR3 *VAR4, VAR5 *VAR6, VAR7 *VAR8, VAR9 *VAR10, const VAR11 *VAR12, int VAR13, uint16_t VAR14, int VAR15)
{
    int VAR16;
    if (FUN2(VAR4, VAR12))
        return -1;
    VAR12 += VAR4->VAR17 + 2;
    VAR13 -= VAR4->VAR17 + 2;
    if ((VAR16 = FUN3(VAR8, VAR4->VAR18[0].VAR19)) < 0)
        return VAR16;
    memcpy(VAR8->VAR4, VAR12, VAR4->VAR18[0].VAR19);
    VAR8->VAR20 = VAR6->VAR21;
    return 0;
}