static int FUN1(VAR1 *VAR2, const VAR3 *VAR4)
{
    int VAR5, VAR6, VAR7;
    GetBitContext VAR8;
    VAR9 *VAR10;
    VAR10 = VAR2->VAR11;
    if (VAR10 == NULL)
        return -1;
    VAR5 = FUN2(VAR4);
    if (VAR5 > VAR12)
        return -1;
    VAR10->VAR13 = (VAR5 + 7) / 8;
    VAR4 += 2;
    FUN3(&VAR8, VAR4, VAR10->VAR13 * 8);
    VAR6 = VAR10->VAR14 + VAR10->VAR15;
    if (VAR6 <= 0 || (VAR5 % VAR6 != 0))
        return -1;
    VAR10->VAR16 = VAR5 / VAR6;
    VAR10->VAR17 = FUN4(sizeof(struct VAR18) * VAR10->VAR16);
    VAR10->VAR17[0].VAR19 = 0;
    VAR10->VAR17[0].VAR20 = 0;
    for (VAR7 = 0; VAR7 < VAR10->VAR16; ++VAR7)
    {
        VAR10->VAR17[0].VAR19 += FUN5(&VAR8, VAR10->VAR14);
        VAR10->VAR17[0].VAR20 = FUN5(&VAR8, VAR10->VAR15);
        VAR10->VAR16 = 1;
        return 0;