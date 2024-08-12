static int FUN1(VAR1 *VAR2)
{
    int VAR3, VAR4, VAR5, VAR6 = 0;
    VAR4 = VAR2->VAR7;
    VAR3 = VAR2->VAR8;
    VAR5 = !(VAR4 & 0x02) + 2 * !(VAR3 & 0x04);
    VAR6 |= FUN2(&VAR2->VAR9, &VAR2->VAR10[73 + VAR5]);
    VAR5 = !(VAR6 & 0x01) + 2 * !(VAR3 & 0x08);
    VAR6 |= FUN2(&VAR2->VAR9, &VAR2->VAR10[73 + VAR5]) << 1;
    VAR5 = !(VAR4 & 0x08) + 2 * !(VAR6 & 0x01);
    VAR6 |= FUN2(&VAR2->VAR9, &VAR2->VAR10[73 + VAR5]) << 2;
    VAR5 = !(VAR6 & 0x04) + 2 * !(VAR6 & 0x02);
    VAR6 |= FUN2(&VAR2->VAR9, &VAR2->VAR10[73 + VAR5]) << 3;
    return VAR6;
}