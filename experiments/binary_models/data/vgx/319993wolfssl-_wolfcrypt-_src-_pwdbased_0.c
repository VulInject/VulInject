int FUN1(VAR1* VAR2, const VAR1* VAR3, int VAR4,
const VAR1* VAR5, int VAR6, word32 VAR7,
int VAR8, int VAR9, int VAR10)
{
int VAR11;


if ((VAR7 & (VAR7 - 1)) != 0)
return VAR12;

for (VAR11 = -1; VAR7 != 0; VAR11++) {
VAR7 >>= 1;
}

return FUN2(VAR2, VAR3, VAR4, VAR5, VAR6, VAR11, VAR8,
VAR9, VAR10);
}