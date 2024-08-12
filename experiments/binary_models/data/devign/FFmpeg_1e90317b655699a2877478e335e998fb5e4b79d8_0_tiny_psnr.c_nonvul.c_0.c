int main(int argc, char *argv[])
{
    int VAR1, VAR2;
    uint64_t VAR3 = 0;
    uint64_t VAR4;
    VAR5 *VAR6[2];
    uint8_t VAR7[2][VAR8];
    uint64_t VAR9;
    int VAR10 = argc < 4 ? 1 : FUN1(argv[3]);
    int64_t VAR11 = (1 << (8 * VAR10)) - 1;
    int VAR12 = argc < 5 ? 0 : FUN1(argv[4]);
    int VAR13 = argc < 6 ? 0 : FUN1(argv[5]);
    int VAR14 = 0;
    int VAR15 = 0;
    if (argc < 3)
    {
        FUN2("");
        FUN2("");
        FUN2("");
        return -1;
    }
    VAR6[0] = fopen(argv[1], "");
    VAR6[1] = fopen(argv[2], "");
    if (!VAR6[0] || !VAR6[1])
    {
        fprintf(VAR16, "");
        return -1;
    }
    FUN3(VAR6[VAR12 < 0], VAR12 < 0 ? -VAR12 : VAR12, VAR17);
    FUN3(VAR6[0], VAR13, VAR18);
    FUN3(VAR6[1], VAR13, VAR18);
    for (;;)
    {
        int VAR19 = fread(VAR7[0], 1, VAR8, VAR6[0]);
        int VAR20 = fread(VAR7[1], 1, VAR8, VAR6[1]);
        for (VAR2 = 0; VAR2 < FUN4(VAR19, VAR20); VAR2++)
        {
            int64_t VAR21 = VAR7[0][VAR2];
            int64_t VAR22 = VAR7[1][VAR2];
            if (VAR10 == 2)
            {
                VAR21 = (VAR23)(VAR21 | (VAR7[0][++VAR2] << 8));
                VAR22 = (VAR23)(VAR22 | (VAR7[1][VAR2] << 8));
            }
            VAR3 += (VAR21 - VAR22) * (VAR21 - VAR22);
        }
        VAR14 += VAR19;
        VAR15 += VAR20;
        if (VAR19 + VAR20 <= 0)
            break;
    }
    VAR1 = FUN4(VAR14, VAR15) / VAR10;
    if (!VAR1)
        VAR1 = 1;
    VAR4 = FUN5(((VAR3 / VAR1) * VAR24 * VAR24) + (((VAR3 % VAR1) * VAR24 * VAR24) + VAR1 / 2) / VAR1);
    if (VAR3)
        VAR9 = ((2 * FUN6(VAR11 << 16) + FUN6(VAR1) - FUN6(VAR3)) * 284619LL * VAR24 + (1 << 31)) / (1LL << 32);
    else
        VAR9 = 1000 * VAR24 - 1;
    FUN2("", (int)(VAR4 / VAR24), (int)(VAR4 % VAR24), (int)(VAR9 / VAR24), (int)(VAR9 % VAR24), VAR14, VAR15);
    return 0;
}