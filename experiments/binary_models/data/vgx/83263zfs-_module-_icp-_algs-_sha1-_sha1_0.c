void
FUN1(VAR1 *VAR2, const void *VAR3, size_t VAR4)
{
uint32_t VAR5, VAR6, VAR7;
const VAR8 *VAR9 = VAR3;
uint32_t	VAR10;


if (VAR4 == 0)
return;


VAR6 = (VAR2->VAR11[1] >> 3) & 0x3F;


if ((VAR2->VAR11[1] += (VAR4 << 3)) < (VAR4 << 3))
VAR2->VAR11[0]++;

VAR2->VAR11[0] += (VAR4 >> 29);

VAR7 = 64 - VAR6;


VAR5 = 0;
if (VAR4 >= VAR7) {



if (VAR6) {
bcopy(VAR9, &VAR2->VAR12.VAR13[VAR6], VAR7);
FUN2(VAR2, VAR2->VAR12.VAR13);
VAR5 = VAR7;
}

for (; VAR5 + 63 < VAR4; VAR5 += 64)
FUN2(VAR2, &VAR9[VAR5]);
VAR10 = (VAR4 - VAR5) >> 6;
if (VAR10 > 0) {
FUN3(VAR2, &VAR9[VAR5], VAR10);
VAR5 += VAR10 << 6;
}



if (VAR4 == VAR5)
return;

VAR6 = 0;
}


bcopy(&VAR9[VAR5], &VAR2->VAR12.VAR13[VAR6], VAR4 - VAR5);
}