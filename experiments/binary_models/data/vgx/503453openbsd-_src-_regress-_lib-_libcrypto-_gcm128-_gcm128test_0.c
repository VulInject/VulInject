static int
FUN1(int VAR1, struct VAR2 *VAR3)
{
GCM128_CONTEXT VAR4;
AES_KEY VAR5;
VAR6 *VAR7 = NULL;
size_t VAR8;
int VAR9 = 1;

VAR8 = VAR3->VAR10;
if (VAR8 != 0) {
VAR7 = malloc(VAR8);
if (VAR7 == NULL)
FUN2(1, "");
}

FUN3(VAR3->VAR11, VAR3->VAR12 * 8, &VAR5);

if (VAR8 != 0)
memset(VAR7, 0, VAR8);
FUN4(&VAR4, &VAR5, (VAR13)VAR14);
FUN5(&VAR4, VAR3->VAR15, VAR3->VAR16);
if (VAR3->VAR17 > 0)
FUN6(&VAR4, VAR3->VAR18, VAR3->VAR17);
if (VAR3->VAR10 > 0)
FUN7(&VAR4, VAR3->VAR19, VAR7, VAR8);
if (FUN8(&VAR4, VAR3->VAR20, 16)) {
fprintf(VAR21, "",
VAR1);
goto VAR22;
}
if (VAR3->VAR23 > 0 && memcmp(VAR7, VAR3->VAR24, VAR8)) {
fprintf(VAR21, "", VAR1);
goto VAR22;
}

if (VAR8 != 0)
memset(VAR7, 0, VAR8);
FUN5(&VAR4, VAR3->VAR15, VAR3->VAR16);
if (VAR3->VAR17 > 0)
FUN6(&VAR4, VAR3->VAR18, VAR3->VAR17);
if (VAR3->VAR23 > 0)
FUN9(&VAR4, VAR3->VAR24, VAR7, VAR8);
if (FUN8(&VAR4, VAR3->VAR20, 16)) {
fprintf(VAR21, "",
VAR1);
goto VAR22;
}
if (VAR3->VAR10 > 0 && memcmp(VAR7, VAR3->VAR19, VAR8)) {
fprintf(VAR21, "", VAR1);
goto VAR22;
}

VAR9 = 0;

VAR22:
free(VAR7);
return (VAR9);
}