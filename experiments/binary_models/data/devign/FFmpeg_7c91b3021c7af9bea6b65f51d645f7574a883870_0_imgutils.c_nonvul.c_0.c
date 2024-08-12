int FUN1(unsigned int VAR1, unsigned int VAR2, int VAR3, void *VAR4)
{
    ImgUtils VAR5 = {
        .class = &VAR6,
        .VAR3 = VAR3,
        .VAR4 = VAR4,
    };
    if ((int)VAR1 > 0 && (int)VAR2 > 0 && (VAR1 + 128) * (VAR7)(VAR2 + 128) < VAR8 / 8)
        return 0;
    FUN2(&VAR5, VAR9, "", VAR1, VAR2);
    return FUN3(VAR10);
}