FUN1 (const char *VAR1, char **VAR2, int VAR3)
{
char *VAR4 = (char *) VAR1;
char *VAR5;
char VAR6;
int64_t VAR7 = 0;
int64_t VAR8 = 1;
int64_t VAR9;
int64_t VAR10;

VAR11 = 0;

if (!VAR1) {
VAR11 = VAR12;
return 0;
}

VAR6 = *VAR4;

while (FUN2 (VAR6)) {
VAR6 = *++VAR4;
}

if (VAR6 == '') {
VAR8 = -1;
VAR6 = *++VAR4;
} else if (VAR6 == '') {
VAR6 = *++VAR4;
} else if (!FUN3 (VAR6)) {
VAR11 = VAR12;
return 0;
}


if ((VAR3 == 0 || VAR3 == 16) && VAR6 == '' &&
(VAR4[1] == '' || VAR4[1] == '')) {
VAR4 += 2;
VAR6 = *VAR4;
VAR3 = 16;
}

if (VAR3 == 0) {
VAR3 = VAR6 == '' ? 8 : 10;
}


VAR9 = VAR8 == -1 ? VAR13 : VAR14;
VAR10 = (int) (VAR9 % VAR3);
VAR9 /= VAR3;
if (VAR8 == -1) {
if (VAR10 > 0) {
VAR10 -= VAR3;
VAR9 += 1;
}
VAR10 = -VAR10;
}

VAR5 = VAR4;

while ((VAR6 = *VAR4)) {
if (FUN3 (VAR6)) {
VAR6 -= '';
} else if (FUN4 (VAR6)) {
VAR6 -= FUN5 (VAR6) ? '' - 10 : '' - 10;
} else {

break;
}

if (VAR6 >= VAR3) {
break;
}

if (VAR8 == -1) {
if (VAR7 < VAR9 || (VAR7 == VAR9 && VAR6 > VAR10)) {
VAR7 = VAR13;
VAR11 = VAR15;
break;
} else {
VAR7 *= VAR3;
VAR7 -= VAR6;
}
} else {
if (VAR7 > VAR9 || (VAR7 == VAR9 && VAR6 > VAR10)) {
VAR7 = VAR14;
VAR11 = VAR15;
break;
} else {
VAR7 *= VAR3;
VAR7 += VAR6;
}
}

VAR4++;
}


if (VAR2 != NULL && VAR4 > VAR5) {
*VAR2 = VAR4;
}

return VAR7;
}