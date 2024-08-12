static VAR1 FUN1(VAR2* VAR3) {
struct pollfd VAR4;
int VAR5;
off_t VAR6;
ssize_t VAR7;
ssize_t VAR8;
ssize_t VAR9;
size_t VAR10;
size_t VAR11;
ssize_t VAR12;
int VAR13;
int VAR14;
char VAR15[8192];

VAR11 = VAR3->VAR16[0].VAR11;
VAR13 = VAR3->VAR17;
VAR14 = VAR3->VAR18;
VAR6 = VAR3->VAR19;
VAR5 = 1;


for (VAR7 = 0; (VAR20) VAR7 < VAR11; ) {
VAR10 = VAR11 - VAR7;

if (VAR10 > sizeof(VAR15))
VAR10 = sizeof(VAR15);

do
if (VAR5)
VAR8 = pread(VAR13, VAR15, VAR10, VAR6);
else
VAR8 = read(VAR13, VAR15, VAR10);
while (VAR8 == -1 && VAR21 == VAR22);

if (VAR8 == 0)
goto VAR23;

if (VAR8 == -1) {
if (VAR5 && VAR7 == 0 && (VAR21 == VAR24 || VAR21 == VAR25)) {
VAR5 = 0;
continue;
}

if (VAR7 == 0)
VAR7 = -1;

goto VAR23;
}

for (VAR9 = 0; VAR9 < VAR8; ) {
do
VAR12 = write(VAR14, VAR15 + VAR9, VAR8 - VAR9);
while (VAR12 == -1 && VAR21 == VAR22);

if (VAR12 != -1) {
VAR9 += VAR12;
continue;
}

if (VAR21 != VAR26 && VAR21 != VAR27) {
VAR7 = -1;
goto VAR23;
}

VAR4.VAR28 = VAR14;
VAR4.VAR29 = VAR30;
VAR4.VAR31 = 0;

do
VAR12 = FUN2(&VAR4, 1, -1);
while (VAR12 == -1 && VAR21 == VAR22);

if (VAR12 == -1 || (VAR4.VAR31 & ~VAR30) != 0) {
VAR21 = VAR24;
VAR7 = -1;
goto VAR23;
}
}

VAR6 += VAR8;
VAR7 += VAR8;
}

VAR23:
if (VAR7 != -1)
VAR3->VAR19 = VAR6;

return VAR7;
}