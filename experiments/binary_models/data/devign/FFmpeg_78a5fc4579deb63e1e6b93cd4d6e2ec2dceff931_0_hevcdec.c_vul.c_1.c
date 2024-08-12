static enum VAR1 FUN1(VAR2 *VAR3, const VAR4 *VAR5)
{
    enum AVPixelFormat VAR6[VAR7 + 2], *VAR8 = VAR6;
    switch (VAR5->VAR9)
    {
    case VAR10:
    case VAR11:
        *VAR8++ = VAR12;
        *VAR8++ = VAR13;
        *VAR8++ = VAR14;
        *VAR8++ = VAR15;
        break;
    case VAR16:
        *VAR8++ = VAR12;
        *VAR8++ = VAR13;
        *VAR8++ = VAR14;
        break;
    }
    *VAR8++ = VAR5->VAR9;
    *VAR8 = VAR17;
    return FUN2(VAR3->VAR18, VAR6);
}