static int FUN1(VAR1 *VAR2,
const VAR3 *VAR4, int VAR5)
{
uint64_t VAR6 = VAR2->VAR7;
int VAR8 = VAR2->VAR9;
int VAR10 = 0;

if (!VAR8) {
for (VAR10 = 0; VAR10 < VAR5; VAR10++) {
VAR6 = (VAR6 << 8) | VAR4[VAR10];
if ((VAR6 & 0xffffffffffLL) == VAR11) {
VAR10++;
VAR8 = 1;
break;
}
}
}

if (VAR8) {
if (!VAR5) 
return 0;
for (; VAR10 < VAR5; VAR10++) {
VAR6 = (VAR6 << 8) | VAR4[VAR10];
if ((VAR6 & 0xffffffffffLL) == VAR11) {
VAR2->VAR9 = 0;
VAR2->VAR7 = -1;
return VAR10 - 4;
}
}
}
VAR2->VAR9 = VAR8;
VAR2->VAR7 = VAR6;
return VAR12;
}