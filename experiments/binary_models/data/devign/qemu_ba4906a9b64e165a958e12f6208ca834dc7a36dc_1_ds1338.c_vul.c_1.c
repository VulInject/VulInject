static int FUN1(VAR1 *VAR2)
{
    VAR3 *VAR4 = FUN2(VAR3, VAR2);
    uint8_t VAR5;
    VAR5 = VAR4->VAR6[VAR4->VAR7];
    VAR4->VAR7 = (VAR4->VAR7 + 1) & 0xff;
    return VAR5;
}