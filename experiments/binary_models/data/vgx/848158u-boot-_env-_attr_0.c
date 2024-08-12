int FUN1(const char *VAR1,
int (*VAR2)(const char *VAR3, const char *VAR4, void *VAR5),
void *VAR5)
{
const char *VAR6, *VAR7;
char *VAR3, *VAR4;

if (!VAR1)

return 1;

VAR6 = VAR1;
do {
char *VAR8 = NULL;

VAR7 = strchr(VAR6, VAR9);

if (VAR7 == NULL) {
int VAR10 = strlen(VAR6);

if (VAR10) {

VAR8 = malloc(VAR10 + 1);
if (VAR8)

strcpy(VAR8, VAR6);
else
return -VAR11;
}
} else {
int VAR10 = VAR7 - VAR6;

if (VAR10) {

VAR8 = malloc(VAR10 + 1);
if (VAR8) {

strncpy(VAR8, VAR6, VAR10);
VAR8[VAR10] = '';
} else
return -VAR11;
}
}


if (VAR8 != NULL) {
VAR4 = strchr(VAR8, VAR12);

if (VAR4 != NULL) {

*VAR4++ = '';

VAR4 = FUN2(VAR4);
}

VAR3 = FUN2(VAR8);


if (strlen(VAR3) != 0) {
int VAR13 = 0;

VAR13 = FUN3(VAR3, VAR4, VAR5);
if (VAR13) {
free(VAR8);
return VAR13;
}
}
}

free(VAR8);
VAR6 = VAR7 + 1;
} while (VAR7 != NULL);

return 0;
}

struct VAR14 {
const char *VAR15;
char *VAR16;
char *VAR4;
};