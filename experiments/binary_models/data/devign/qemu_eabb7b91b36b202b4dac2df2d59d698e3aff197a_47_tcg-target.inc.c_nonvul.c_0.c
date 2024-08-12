static VAR1 FUN1(VAR2 *VAR3, VAR2 *VAR4)
{
    ptrdiff_t VAR5 = FUN2(VAR4, VAR3);
    FUN3(FUN4(VAR5));
    return VAR5 & 0x3fffffc;
}