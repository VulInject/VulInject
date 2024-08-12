static char *FUN1(long VAR1, char *VAR2, char *VAR3, size_t VAR4) {
char *VAR5;
size_t VAR6;

char VAR7[VAR8];
int VAR9;

size_t VAR10;

if ((VAR1 < 1) || (NULL == VAR3) || (VAR4 < 2))
return NULL;

snprintf(VAR7, sizeof(VAR7), "", VAR1);

VAR11 = 0;
VAR9 = open(VAR7, VAR12);
if (VAR9 < 0) {

if (VAR11 != VAR13)
FUN2("", VAR7, VAR14);
return NULL;
}

VAR5 = VAR3;
VAR6 = VAR4;

VAR10 = 0;

while (42) {
ssize_t VAR15;

VAR15 = read(VAR9, (void *)VAR5, VAR6);

if (VAR15 < 0) {

if ((VAR16 == VAR11) || (VAR17 == VAR11))
continue;

FUN2("", VAR7,
VAR14);
close(VAR9);
return NULL;
}

VAR10 += VAR15;

if (VAR15 == 0)
break;

VAR5 += VAR15;
VAR6 -= VAR15;

if (VAR6 == 0)
break;
}

close(VAR9);

if (0 == VAR10) {

if (NULL == VAR2)
return NULL;

snprintf(VAR3, VAR4, "", VAR2);
return VAR3;
}

assert(VAR10 <= VAR4);

if (VAR10 == VAR4)
--VAR10;
VAR3[VAR10] = '';

--VAR10;

while ((VAR10 > 0) && (FUN3(VAR3[VAR10]) || ('' == VAR3[VAR10]))) {
VAR3[VAR10] = '';
--VAR10;
}


while (VAR10 > 0) {
if ('' == VAR3[VAR10])
VAR3[VAR10] = '';
--VAR10;
}
return VAR3;
}