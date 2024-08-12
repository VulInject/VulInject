static int
FUN1(VAR1 *VAR2, int VAR3)
{
int VAR4, VAR5, VAR6;

FUN2(FUN3(&VAR2->VAR7));
FUN2((VAR2->VAR8 & (VAR2->VAR8 + 1)) == 0);

for (VAR6 = VAR3; (VAR9)VAR6 < VAR2->VAR8; VAR6 |= VAR6 + 1) {
VAR4 = VAR6 ^ (VAR6 | (VAR6 + 1));
if (VAR2->VAR10[VAR6].VAR11 == VAR4)
continue;
for (VAR5 = 0, VAR4 >>= 1; VAR4 != 0; VAR4 >>= 1) {
VAR5 += VAR2->VAR10[VAR6 + VAR4].VAR11;
if (VAR2->VAR10[VAR6].VAR11 == VAR5 + VAR4) {
VAR6 += VAR4;
VAR5 = 0;
}
}
return (VAR6);
}
return (-1);
}