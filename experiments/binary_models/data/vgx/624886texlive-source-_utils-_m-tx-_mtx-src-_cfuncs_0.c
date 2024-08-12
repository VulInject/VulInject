void FUN1(char VAR1, char *VAR2, short VAR3)
{ char VAR4;
VAR2 += VAR3-1;
do { VAR4=VAR1; VAR1=*VAR2; *VAR2++=VAR4; } while (VAR4);
}