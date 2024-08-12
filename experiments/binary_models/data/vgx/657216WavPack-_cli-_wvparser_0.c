static void FUN1 (void *VAR1, char *VAR2)
{
unsigned char *VAR3 = (unsigned char *) VAR1;
int32_t VAR4;

while (*VAR2) {
switch (*VAR2) {
case '':
VAR4 = VAR3 [0] + ((VAR5) VAR3 [1] << 8) + ((VAR5) VAR3 [2] << 16) + ((VAR5) VAR3 [3] << 24);
* (VAR5 *) VAR3 = VAR4;
VAR3 += 4;
break;

case '':
VAR4 = VAR3 [0] + (VAR3 [1] << 8);
* (VAR6 *) VAR3 = (VAR6) VAR4;
VAR3 += 2;
break;

default:
if (FUN2 (*VAR2))
VAR3 += *VAR2 - '';

break;
}

VAR2++;
}
}