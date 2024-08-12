static int FUN1(const void *VAR1, const void *VAR2)
{
    int64_t VAR3 = *(VAR4 *)VAR1, VAR5 = *(VAR4 *)VAR2;
    return VAR3 < VAR5 ? -1 : VAR3 > VAR5 ? +1
                                  : 0;
}