static struct VAR1 *FUN1(int VAR2)
{
int VAR3;
unsigned short int VAR4 = 0;
struct VAR1 *VAR5;
struct VAR6 *VAR7 = NULL;
struct VAR6 *VAR8;
char *VAR9;

VAR5 = malloc(sizeof(struct VAR1));
if (!VAR5)
return NULL;

VAR5->VAR2 = VAR2;
VAR5->VAR10 = 0;
VAR5->VAR11 = NULL;

VAR9 = FUN2("");
if (VAR9)
VAR5->VAR10 = (int)FUN3(VAR9, NULL, 10);

VAR3 = FUN4(VAR5, &VAR7, &VAR4);
if (VAR3 < 0)
goto VAR12;

if (VAR4 < VAR13 - 1) {
efi_status_t VAR14;


VAR14 = FUN5();
if (VAR14 != VAR15 && VAR14 != VAR16)
goto VAR12;

VAR3 = FUN6(VAR5, &VAR7, &VAR4);
if (VAR3 < 0 && VAR3 != -VAR17)
goto VAR12;
}


if (VAR4 <= VAR13 - 1) {
VAR8 = malloc(sizeof(struct VAR6));
if (!VAR8)
goto VAR12;


if (!FUN7(VAR18))
VAR8->VAR19 = strdup("");
else
VAR8->VAR19 = strdup("");

if (!VAR8->VAR19) {
free(VAR8);
goto VAR12;
}

VAR8->VAR20 = strdup("");
if (!VAR8->VAR20) {
free(VAR8->VAR19);
free(VAR8);
goto VAR12;
}

sprintf(VAR8->VAR21, "", VAR4);

VAR8->VAR22 = VAR4;
VAR8->VAR5 = VAR5;
VAR8->VAR23 = VAR24;
VAR8->VAR25 = NULL;

if (!VAR7)
VAR5->VAR11 = VAR8;
else
VAR7->VAR25 = VAR8;

VAR7 = VAR8;
++VAR4;
}

VAR5->VAR26 = VAR4;

if ((VAR5->VAR10 >= VAR5->VAR26)||(VAR5->VAR10 < 0)) { 
FUN8("",VAR5->VAR10,VAR5->VAR26-1);
VAR5->VAR10=0;
}

return VAR5;

VAR12:
FUN9(VAR5);
return NULL;
}