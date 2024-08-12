int FUN1(const char VAR1 *VAR2, unsigned long VAR3,
int *VAR4, int VAR5)
{
char VAR6[20], *VAR7, *VAR8;

if (VAR3 > (sizeof(VAR6) - 1))
return -VAR9;

if (FUN2(VAR6, VAR2, VAR3))
return -VAR10;

VAR6[VAR3] = '';
VAR8 = VAR6;
if (*VAR8 == '') {
VAR5 = -VAR5;
VAR8++;
}

*VAR4 = (int)FUN3(VAR8, &VAR7, 10) * VAR5;
if (VAR8 == VAR7)
return -VAR9;

if (VAR7 && *VAR7 == '') {
int VAR11, VAR12 = 1;
int VAR13;

VAR8 = VAR7 + 1;
if (strlen(VAR8) > 5)
VAR8[5] = ''; 

VAR11 = (int)FUN3(VAR8, &VAR7, 10) * VAR5;

if (VAR8 < VAR7) {
for (VAR13 = 0; VAR13 < (VAR7 - VAR8); VAR13++)
VAR12 *= 10;

*VAR4 += VAR11 / VAR12;
}
}
return 0;
}