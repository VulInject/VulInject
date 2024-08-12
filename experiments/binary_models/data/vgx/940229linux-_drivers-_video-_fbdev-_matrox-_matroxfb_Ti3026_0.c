static int FUN1(const struct VAR1 *VAR2,
unsigned int VAR3, unsigned int VAR4, int *VAR5,
int *VAR6, int *VAR7)
{
unsigned int VAR8;
unsigned int VAR9, VAR10, VAR11;

FUN2(VAR12)

VAR8 = FUN3(VAR2, VAR3, VAR4, &VAR9, &VAR10, &VAR11);
VAR8 >>= (*VAR7 = VAR11);
*VAR5 = 64 - VAR9;
*VAR6 = 64 - VAR10;
return VAR8;
}