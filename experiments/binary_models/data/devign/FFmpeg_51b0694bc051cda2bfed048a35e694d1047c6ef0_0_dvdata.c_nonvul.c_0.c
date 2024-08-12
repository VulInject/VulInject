const VAR1 *FUN1(VAR2 *VAR3, const VAR1 *VAR4, const VAR5 *VAR6, unsigned VAR7)
{
    int VAR8, VAR9, VAR10;
    if (VAR7 < VAR11)
        return NULL;
    VAR9 = (VAR6[3] & 0x80) >> 7;
    VAR10 = VAR6[80 * 5 + 48 + 3] & 0x1f;
    if (VAR9 == 1 && VAR10 == 0 && VAR6[4] & 0x07)
    {
        return &VAR12[2];
    }
    if (VAR3 && VAR3->VAR13 == FUN2("") && VAR3->VAR14 == 720 && VAR3->VAR15 == 576)
        return &VAR12[1];
    for (VAR8 = 0; VAR8 < FUN3(VAR12); VAR8++)
        if (VAR9 == VAR12[VAR8].VAR9 && VAR10 == VAR12[VAR8].VAR16)
            return &VAR12[VAR8];
    if (VAR4 && VAR7 == VAR4->VAR17)
        return VAR4;
    return NULL;
}