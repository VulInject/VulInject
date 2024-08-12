int FUN1(char* VAR1, VAR2* VAR3) {
char VAR4[1 + VAR5];

if (VAR1 == NULL || VAR3 == NULL)
return VAR6;


if (FUN2(VAR1, *VAR3) != NULL)
goto VAR7;

if (VAR8 != VAR9)
return FUN3(VAR8);


if (FUN2(VAR4, sizeof(VAR4)) == NULL)
return FUN3(VAR8);

VAR1 = VAR4;

VAR7:

*VAR3 = strlen(VAR1);

if (*VAR3 > 1 && VAR1[*VAR3 - 1] == '') {
*VAR3 -= 1;
VAR1[*VAR3] = '';
}

if (VAR1 == VAR4) {
*VAR3 += 1;
return VAR10;
}

return 0;
}