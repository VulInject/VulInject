static const char *
FUN1(const char *VAR1, const char *VAR2, VAR3 *VAR4)
{
FUN2(VAR1, <=, VAR2);

if (VAR2 - VAR1 < 2)
return (VAR1);

FUN3(VAR1[0], ==, '');

const char *VAR5 = VAR1 + 1;


if (VAR5[0] == '')
VAR5++;

const char *VAR6 = FUN4(VAR5, VAR2, VAR4);
if (VAR6 == VAR5)
return (VAR1);

size_t VAR7 = FUN5(VAR4);
int VAR8 = 0;

VAR5 = VAR6;

while (VAR5 != VAR2 && VAR5[0] != '') {
if (VAR5[0] == '') {
VAR5++;
continue;
}

if (VAR5[0] == '' && VAR5 + 1 != VAR2 && VAR5[1] == '') {
VAR8 = 1;
VAR5++;
continue;
}

if (VAR5[0] == '' && VAR5 + 1 != VAR2 && VAR5[1] == '') {
VAR8 = 2;
VAR5++;
continue;
}


VAR6 = FUN4(VAR5, VAR2, VAR4);
if (VAR6 == VAR5 || VAR5 == VAR2)
return (VAR1);

VAR5 = VAR6;
}

if (VAR5 == VAR2)
return (VAR1);

FUN6(VAR4, FUN7(VAR4, VAR7), "");
FUN8(VAR4, "", NULL);

switch (VAR8) {
case 1:
FUN8(VAR4, "", NULL);
break;
case 2:
FUN8(VAR4, "", NULL);
break;
}

FUN8(VAR4, "", "");


return (VAR5 + 1);
}