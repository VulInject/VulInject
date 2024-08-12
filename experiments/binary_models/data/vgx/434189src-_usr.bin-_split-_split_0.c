void
FUN1(void)
{
ssize_t VAR1, VAR2, VAR3;
char *VAR4;

for (VAR1 = 0;;)
switch ((VAR3 = read(VAR5, VAR6, sizeof(VAR6)))) {
case 0:
FUN2(0);
case -1:
FUN3(1, "");

default:
if (!VAR7)
FUN4();
if (VAR1 + VAR3 >= VAR8) {
VAR2 = VAR8 - VAR1;
if (write(VAR9, VAR6, VAR2) != VAR2)
FUN3(1, "");
VAR3 -= VAR2;
for (VAR4 = VAR6 + VAR2; VAR3 >= VAR8;
VAR3 -= VAR8, VAR4 += VAR8) {
FUN4();
if (write(VAR9, VAR4, VAR8) != VAR8)
FUN3(1, "");
}
if (VAR3 != 0) {
FUN4();
if (write(VAR9, VAR4, VAR3) != VAR3)
FUN3(1, "");
} else
VAR7 = 0;
VAR1 = VAR3;
} else {
VAR1 += VAR3;
if (write(VAR9, VAR6, VAR3) != VAR3)
FUN3(1, "");
}
}
}