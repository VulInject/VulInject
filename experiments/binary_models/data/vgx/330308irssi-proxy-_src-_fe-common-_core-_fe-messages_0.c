static void FUN1(VAR1 *VAR2, VAR3 *VAR4)
{
VAR3 *VAR5;
VAR6 *VAR7;
char *VAR8, *VAR9;
int VAR10;

if (VAR4->VAR11 == NULL)
return;

VAR5 = FUN2(VAR2->VAR12, VAR4->VAR4);
if (VAR5->VAR13 == NULL)
return;

if (VAR4 == VAR2->VAR14) {

VAR4 = FUN3(VAR5->VAR13);
if (VAR4 == NULL)
return; 
}


VAR9 = strchr(VAR4->VAR11, '');
if (VAR9 == NULL) VAR9 = VAR4->VAR11; else VAR9++;

VAR8 = FUN4("", VAR4->VAR4, VAR9);
VAR9 = strchr(VAR8+strlen(VAR4->VAR4), '');
if (VAR9 != NULL) *VAR9 = '';

if (!FUN5(VAR5, VAR4, VAR8)) {

FUN6(VAR15, VAR4, VAR8);
return;
}

VAR7 = FUN7(NULL);
VAR10 = 2;
do {
FUN8(VAR7, "", VAR8, VAR10);
VAR10++;
} while (FUN5(VAR5, VAR4, VAR7->VAR16));

FUN6(VAR15, VAR4, VAR7->VAR16);
FUN9(VAR7, VAR17);
FUN10(VAR8);
}