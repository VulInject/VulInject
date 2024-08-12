int main(int argc, char **argv)
{
    VAR1 *VAR2;
    int VAR3, VAR4, VAR5;
    if (argc < 4)
    {
        FUN1("");
        return 1;
    }
    VAR2 = fopen(argv[1], "");
    if (!VAR2)
    {
        FUN2(argv[1]);
        return 2;
    }
    VAR3 = FUN3(argv[2]);
    VAR4 = FUN3(argv[3]);
    srand(FUN4(0));
    FUN5(VAR2, 0, VAR6);
    VAR5 = FUN6(VAR2);
    FUN5(VAR2, 0, VAR7);
    while (VAR3--)
    {
        int VAR8 = 1 + random() * (VAR9)(FUN7(VAR4) - 1) / VAR10;
        int VAR11 = random() * (VAR9)VAR5 / VAR10;
        FUN5(VAR2, VAR11, VAR7);
        if (VAR4 < 0)
            VAR8 = -VAR4;
        if (VAR11 + VAR8 > VAR5)
            continue;
        while (VAR8--)
        {
            int VAR12 = random() * 256ULL / VAR10;
            if (VAR4 < 0)
                VAR12 = 0;
            fwrite(&VAR12, 1, 1, VAR2);
        }
    }
    return 0;
}