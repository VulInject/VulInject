void FUN1(VAR1 *VAR2, struct VAR3 *VAR4)
{
    const uint8_t VAR5[] = {[VAR6] = 0x0, [VAR7] = 0x1, [VAR8] = 0x3};
    const uint8_t VAR9[] = {[1] = 0x0, [2] = 0x1, [4] = 0x3, [8] = 0x2};
    int VAR10;
    if (FUN2(VAR2))
        VAR4->VAR11 |= VAR12 | VAR13;
    if (VAR14 > 0)
    {
        VAR4->VAR11 |= VAR12 | VAR15;
        VAR4->VAR16.VAR17[7] = 0x0600;
        for (VAR10 = 0; VAR10 < VAR14; VAR10++)
        {
            VAR4->VAR16.VAR17[VAR10] = VAR18[VAR10].VAR19;
            VAR4->VAR16.VAR17[7] |= (2 << (VAR10 * 2)) | (VAR5[VAR18[VAR10].VAR20] << (16 + VAR10 * 4)) | (VAR9[VAR18[VAR10].VAR21] << (18 + VAR10 * 4));
        }
    }
    VAR2->VAR22 = 1;
}