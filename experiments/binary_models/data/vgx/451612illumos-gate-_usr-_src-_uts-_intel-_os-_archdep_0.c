void
FUN1(void)
{
long long VAR1;

if (VAR2 == 0)
VAR1 = 0;
else if (VAR2 > 0) {
if (VAR2 < VAR3)
VAR1 = VAR2;
else
VAR1 = VAR3;
} else {
if (VAR2 < -VAR3)
VAR1 = -VAR3;
else
VAR1 = VAR2;
}

VAR4 -= VAR1;
VAR2 = VAR4;
VAR5.VAR6 += VAR1;

while (VAR5.VAR6 >= VAR7) {
VAR8++;
VAR5.VAR9++;
VAR5.VAR6 -= VAR7;
}
}