char *
FUN1(const VAR1 *VAR2, const char *VAR3)
{
const char *VAR4 = FUN2(VAR5);
iconv_t VAR6;
char *VAR7, *VAR8;
size_t VAR9;
size_t VAR10;
size_t VAR11, VAR12;
const char *VAR13;
char *VAR14;
size_t VAR15;

if (VAR3 == NULL)
return NULL;

if (VAR4 == NULL)
VAR4 = "";

if (FUN3(VAR4, "") == 0) {
if (VAR2 == NULL)
VAR7 = strdup(VAR3);
else {
if (FUN4(VAR2, VAR3, &VAR7, NULL) != VAR16)
VAR7 = NULL;
}
return VAR7;
}
VAR6 = FUN5("", VAR4);
if (VAR6 == (VAR17)-1)
return NULL;

VAR9 = strlen(VAR3);
VAR10 = 4 * (VAR9 + 1);	

if (VAR2 == NULL)
VAR7 = malloc(VAR10);
else
VAR7 = VAR2->malloc(VAR10);

if (VAR7 == NULL) {
(void) FUN6(VAR6);
return NULL;
}
VAR13 = VAR3;
VAR11 = VAR9;
VAR14 = VAR7;
VAR12 = VAR10;
for (;;) {
VAR15 = FUN7(VAR6, &VAR13, &VAR11, &VAR14, &VAR12);
if (VAR15 == (VAR18)(-1)) {
if (VAR19 == VAR20) {
VAR12 += VAR10;
VAR10 *= 2;
if (VAR2 == NULL)
VAR8 = realloc(VAR7, VAR10);
else
VAR8 = VAR2->realloc(VAR7, VAR10);
if (VAR8 == NULL) {
VAR12 = (VAR18)(-1);
break;
}
VAR14 = VAR8 + (VAR14-VAR7);
VAR7 = VAR8;
continue;
}
VAR12 = (VAR18)(-1);
break;
}
if (VAR13 == NULL)
break;
VAR13 = NULL;
VAR11 = 0;
}
if (VAR12 > 0) {
*VAR14 = '';
} else if (VAR12 != (VAR18)(-1)) {
if (VAR2 == NULL)
VAR8 = realloc(VAR7, VAR10 + 1);
else
VAR8 = VAR2->realloc(VAR7, VAR10 + 1);
if (VAR8 == NULL) {
VAR12 = (VAR18)(-1);
} else {
VAR7 = VAR8;
VAR7[VAR10] = '';
}
}
if (VAR12 == (VAR18)(-1)) {
if (VAR2 == NULL)
free(VAR7);
else
VAR2->free(VAR7);
VAR7 = NULL;
}

(void) FUN6(VAR6);
return VAR7;
}