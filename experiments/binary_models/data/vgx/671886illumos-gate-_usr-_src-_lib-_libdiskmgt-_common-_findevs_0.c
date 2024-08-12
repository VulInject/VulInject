static void
FUN1(char *VAR1, char *VAR2, int VAR3)
{
char		*VAR4;
int		VAR5 = 0;

VAR4 = strrchr(VAR1, '');
if (VAR4 == NULL) {
VAR4 = VAR1;
} else {
VAR4++;
}

VAR3 = VAR3 - 1;	

if (FUN2(VAR4)) {
while (*VAR4 != 0 && *VAR4 != '' && VAR5 < VAR3) {
*VAR2++ = *VAR4++;
VAR5++;
}
*VAR2 = 0;
} else {
if (FUN3(VAR4, VAR6,
sizeof (VAR6) - 1) == 0) {

VAR4++;
}


(void) FUN4(VAR2, VAR4, VAR3);
}
}