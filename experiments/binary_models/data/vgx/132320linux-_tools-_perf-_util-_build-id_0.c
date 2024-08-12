static char *FUN1(const char *VAR1,
struct VAR2 *VAR3,
const char *VAR4)
{
const char *VAR5 = "";
char *VAR6 = NULL;
char VAR7[VAR8];
char *VAR9;
struct nscookie VAR10;
size_t VAR11 = 0;

VAR9 = calloc(1, VAR8);
if (!VAR9)
goto VAR12;

if (VAR4) {
FUN2(VAR7, VAR8, VAR4, VAR5);
VAR5 = VAR7;
}

VAR11 = FUN3(VAR9, VAR8, VAR5);
snprintf(VAR9 + VAR11, VAR8 - VAR11, "", VAR1,
VAR1 + 2);

FUN4(VAR3, &VAR10);
VAR6 = FUN5(VAR9, NULL);
if (VAR6 && FUN6(VAR6, VAR13))
FUN7(&VAR6);
FUN8(&VAR10);

if (VAR6 == NULL) {
VAR14* VAR15;

FUN9("", VAR1);

VAR15 = FUN10();
if (VAR15 != NULL) {
int VAR16 = FUN11(VAR15,
(const unsigned char*)VAR1, 0,
&VAR6);
if (VAR16 >= 0)
close(VAR16); 
FUN12(VAR15);
}
}

VAR12:
free(VAR9);
return VAR6;
}