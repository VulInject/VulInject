static VAR1 FUN1(VAR2 *VAR3, VAR2 *VAR4)
{
    ptrdiff_t VAR5 = FUN2(VAR4, VAR3);
    FUN3(VAR5 == (VAR6)VAR5);
    return VAR5 & 0xfffc;
}