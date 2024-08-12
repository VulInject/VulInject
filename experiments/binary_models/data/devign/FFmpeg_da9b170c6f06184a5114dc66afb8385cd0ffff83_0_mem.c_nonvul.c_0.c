void *FUN1(unsigned int VAR1)
{
    void *VAR2;
    int VAR3;
    VAR2 = malloc(VAR1 + 16 + 1);
    VAR3 = ((-(int)VAR2 - 1) & 15) + 1;
    VAR2 += VAR3;
    ((char *)VAR2)[-1] = VAR3;
    VAR2 = memalign(16, VAR1);
    VAR2 = malloc(VAR1);
    return VAR2;
}