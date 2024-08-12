int FUN1(VAR1 *VAR2, size_t VAR3)
{
char *VAR4, *VAR5, *VAR6, *VAR7;
size_t VAR8;

FUN2(VAR2);

if (VAR3 > VAR2->VAR9)
VAR3 = VAR2->VAR9;


if (VAR3 == 0)
VAR3 = FUN3(VAR2->VAR10) + 1;


if (VAR3 == 0) {
for (VAR7 = VAR2->VAR10; *VAR7 && FUN4(*VAR7); ++VAR7);
if (VAR7[0] == '' && VAR7[1] == '' && VAR7[2] == '')
VAR3 = (VAR7 + 3) - VAR2->VAR10;
}

VAR4 = VAR5 = VAR6 = VAR2->VAR10 + VAR3;

while (*VAR6) {
for (VAR7 = VAR6; *VAR7 && *VAR7 != ''; ++VAR7);

VAR8 = VAR7 - VAR6;

if (VAR8 == 1 && VAR6[0] == '')
;

else if (VAR8 == 2 && VAR6[0] == '' && VAR6[1] == '') {

if (VAR5 == VAR4 && VAR3 != 0) {
FUN5(VAR11,
"");
return -1;
}


if (VAR5 == VAR4) {
if (*VAR7 == '')
VAR8++;

if (VAR5 != VAR6)
memmove(VAR5, VAR6, VAR8);

VAR5 += VAR8;

VAR4 = VAR5;
} else {

while (VAR5 > VAR4 && VAR5[-1] == '') VAR5--;
while (VAR5 > VAR4 && VAR5[-1] != '') VAR5--;
}
} else {
if (*VAR7 == '' && *VAR6 != '')
VAR8++;

if (VAR5 != VAR6)
memmove(VAR5, VAR6, VAR8);

VAR5 += VAR8;
}

VAR6 += VAR8;

while (*VAR6 == '') VAR6++;
}

*VAR5 = '';

VAR2->VAR9 = VAR5 - VAR2->VAR10;

return 0;
}