int FUN1(const char *VAR1, const char *VAR2)
{
const char *VAR3 = VAR1, *VAR4 = VAR2;


while (VAR3[0] || VAR4[0]) {
if (FUN2((unsigned char)VAR3[0]) &&
FUN2((unsigned char)VAR4[0])) {
unsigned long VAR5, VAR6;
char *VAR7 = NULL, *VAR8 = NULL;

VAR5 = FUN3(VAR3, &VAR7, 10);
VAR6 = FUN3(VAR4, &VAR8, 10);
if (VAR5 < VAR6)
return -1;
if (VAR5 > VAR6)
return 1;

VAR3 = VAR7;
VAR4 = VAR8;
continue;
}

int VAR9 = FUN4(*VAR3++);
int VAR10 = FUN4(*VAR4++);

if (VAR9 < VAR10)
return -1;
if (VAR9 > VAR10)
return 1;
}
return 0;
}