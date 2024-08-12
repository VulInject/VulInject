int
FUN1(char *VAR1)
{
int	VAR2, VAR3;
char	*VAR4;
int	VAR5, VAR6;
char	VAR7[257];

for (;;) {
FUN2("", VAR1);
VAR2 = 0;
VAR6 = 1;
for (VAR4 = VAR7; (VAR5 = getchar()) != '';) {
if (VAR5 == VAR8) {
FUN2("");
FUN3(0);
}
*VAR4 = VAR5;
if (VAR6 < (int)sizeof(VAR7)) {
VAR6++;
VAR4++;
}
}
*VAR4 = VAR5;
if (VAR4 == VAR7)
continue;
for (VAR4 = VAR7; FUN4((unsigned char)*VAR4); VAR4++)
;
for (; FUN5((unsigned char)*VAR4); VAR4++) {
VAR3 = VAR2;
VAR2 = VAR2 * 10 + *VAR4 - '';
if (VAR2 < VAR3) {
FUN2("");
*(VAR4 + 1) = '';	
}
}

for (; *VAR4 == ''; VAR4++)
;
if (*VAR4 == '')
return VAR2;
else
FUN2("");
}
}