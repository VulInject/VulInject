static VAR1 FUN1(void *VAR2, int64_t VAR3, int VAR4)
{
VAR5 *VAR6 = VAR2;

if (VAR4 == VAR7) {
if (VAR3 > VAR8 - VAR6->VAR9)
return -1;
VAR3 += VAR6->VAR9;
} else if (VAR4 == VAR10) {
if (VAR3 > VAR8 - VAR6->VAR11)
return -1;
VAR3 += VAR6->VAR11;
} else if (VAR4 == VAR12) {
return VAR6->VAR11;
}
if (VAR3 < 0 || VAR3 > VAR6->VAR11)
return -1;
if (VAR13) {
VAR6->VAR14      += VAR3 - VAR6->VAR9;
VAR6->VAR15 -= VAR3 - VAR6->VAR9;
}
VAR6->VAR9 = VAR3;
return 0;
}