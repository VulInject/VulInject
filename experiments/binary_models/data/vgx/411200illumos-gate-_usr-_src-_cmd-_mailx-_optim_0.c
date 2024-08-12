char *
FUN1(char *VAR1)
{
register char *VAR2, *VAR3, *VAR4;
char VAR5[100];
char VAR6[300];

if (VAR7==0 &&
((VAR4 = FUN2(""))==VAR8 || strcmp(VAR4, "")))
return VAR1;
if (VAR9) fprintf(VAR10, "", VAR1);
FUN3(VAR6, sizeof (VAR6), VAR1);
VAR2 = strrchr(VAR6, '');
if (VAR2 == VAR8)
return VAR1;
*VAR2++ = 0;
VAR3 = strrchr(VAR6, '');
if (VAR3 == VAR8)
VAR3 = VAR6;
else
*VAR3++ = 0;
VAR4 = strchr(VAR2, '');
if (VAR4 == VAR8)
VAR4 = strchr(VAR2, '');
if (VAR4)
*VAR4 = 0;
if (VAR9) fprintf(VAR10, "", VAR3, VAR2);
snprintf(VAR5, sizeof (VAR5), "", VAR2, VAR3);
if (VAR9) fprintf(VAR10, "", VAR5);
return FUN4(VAR5);
}