static int FUN1(const void *VAR1, const void *VAR2)
{
    const double VAR3 = *(const double *)VAR1, VAR4 = *(const double *)VAR2;
    return VAR3 < VAR4 ? -1 : (VAR3 > VAR4 ? 1 : 0);
}