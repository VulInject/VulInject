static void FUN1(VAR1 *VAR2, VAR1 *VAR3, int VAR4, int VAR5, int VAR6, int VAR7, int VAR8, int VAR9, int VAR10, int VAR11, int VAR12, int VAR13, int VAR14, int VAR15)
{
    const int VAR16 = 8;
    const int VAR17 = VAR6 >> (16 + VAR12);
    const int VAR18 = VAR7 >> (16 + VAR12);
    const int VAR19 = VAR6 >> 4;
    const int VAR20 = VAR7 >> 4;
    const int VAR21 = VAR8 >> 4;
    const int VAR22 = VAR9 >> 4;
    const int VAR23 = VAR10 >> 4;
    const int VAR24 = VAR11 >> 4;
    const uint16_t VAR25[4] = {VAR13, VAR13, VAR13, VAR13};
    const uint16_t VAR26[4] = {VAR22, VAR22, VAR22, VAR22};
    const uint16_t VAR27[4] = {VAR24, VAR24, VAR24, VAR24};
    const uint64_t VAR28 = 2 * VAR12;
    uint8_t VAR29[(VAR30 + 1) * VAR31];
    int VAR32, VAR33;
    const int VAR34 = (VAR8 - (1 << (16 + VAR12))) * (VAR16 - 1);
    const int VAR35 = (VAR11 - (1 << (16 + VAR12))) * (VAR5 - 1);
    const int VAR36 = VAR9 * (VAR5 - 1);
    const int VAR37 = VAR10 * (VAR16 - 1);
    int VAR38 = (unsigned)VAR17 >= VAR14 - VAR16 || (unsigned)VAR18 >= VAR15 - VAR5;
    if (((VAR6 ^ (VAR6 + VAR34)) | (VAR6 ^ (VAR6 + VAR36)) | (VAR6 ^ (VAR6 + VAR34 + VAR36)) | (VAR7 ^ (VAR7 + VAR37)) | (VAR7 ^ (VAR7 + VAR35)) | (VAR7 ^ (VAR7 + VAR37 + VAR35))) >> (16 + VAR12) || (VAR8 | VAR9 | VAR10 | VAR11) & 15 || (VAR38 && (VAR5 > VAR30 || VAR4 > VAR31)))
    {
        FUN2(VAR2, VAR3, VAR4, VAR5, VAR6, VAR7, VAR8, VAR9, VAR10, VAR11, VAR12, VAR13, VAR14, VAR15);
        return;
    }
    VAR3 += VAR17 + VAR18 * VAR4;
    if (VAR38)
    {
        FUN3(VAR29, VAR3, VAR4, VAR4, VAR16 + 1, VAR5 + 1, VAR17, VAR18, VAR14, VAR15);
        VAR3 = VAR29;
    }
    VAR39 volatile(""
                     ""
                     ""
                     ""
                     :
                     : ""(1 << VAR12));
    for (VAR32 = 0; VAR32 < VAR16; VAR32 += 4)
    {
        uint16_t VAR40[4] = {VAR19 - VAR22 + VAR21 * (VAR32 + 0), VAR19 - VAR22 + VAR21 * (VAR32 + 1), VAR19 - VAR22 + VAR21 * (VAR32 + 2), VAR19 - VAR22 + VAR21 * (VAR32 + 3)};
        uint16_t VAR41[4] = {VAR20 - VAR24 + VAR23 * (VAR32 + 0), VAR20 - VAR24 + VAR23 * (VAR32 + 1), VAR20 - VAR24 + VAR23 * (VAR32 + 2), VAR20 - VAR24 + VAR23 * (VAR32 + 3)};
        for (VAR33 = 0; VAR33 < VAR5; VAR33++)
        {
            VAR39 volatile(""
                             ""
                             ""
                             ""
                             ""
                             ""
                             ""
                             ""
                             : ""(*VAR40), ""(*VAR41)
                             : ""(*VAR26), ""(*VAR27));
            VAR39 volatile(""
                             ""
                             ""
                             ""
                             ""
                             ""
                             ""
                             ""
                             ""
                             ""
                             ""
                             ""
                             ""
                             ""
                             ""
                             ""
                             ""
                             ""
                             ""
                             ""
                             ""
                             ""
                             ""
                             ""
                             ""
                             ""
                             ""
                             ""
                             ""
                             : ""(VAR2[VAR32 + VAR33 * VAR4])
                             : ""(VAR3[0]), ""(VAR3[1]), ""(VAR3[VAR4]), ""(VAR3[VAR4 + 1]), ""(*VAR25), ""(VAR28));
            VAR3 += VAR4;
        }
        VAR3 += 4 - VAR5 * VAR4;
    }
}