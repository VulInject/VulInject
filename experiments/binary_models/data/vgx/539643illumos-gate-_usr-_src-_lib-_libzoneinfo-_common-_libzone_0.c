int
FUN1(struct VAR1 **VAR2, struct VAR3 *VAR4)
{
VAR5 *VAR6, *VAR7;
char VAR8[VAR9], VAR10[VAR11], *VAR12;
char *VAR13, *VAR14, *VAR15, *VAR16, *VAR17;	
struct VAR1 *VAR18 = NULL, *VAR19 = NULL, *VAR20, *VAR21, *VAR22;
int VAR23 = 0, VAR24, VAR25;
int VAR26, VAR27;
size_t VAR28, VAR29, VAR30;

VAR30 = strlen(VAR4->VAR31);
VAR10[0] = '';


if ((VAR6 = fopen(VAR32, "")) == NULL) {

return (-1);
}
if ((VAR7 = fopen(VAR33, "")) == NULL) {

(void) fclose(VAR6);
return (-1);
}


VAR24 = 0;

while (1) {
if (fgets(VAR8, sizeof (VAR8), VAR6) == NULL) {
if (FUN2(VAR6) == 0) {

VAR23 = VAR34;
VAR24 = -1;
}
break;
}

if ((VAR27 = FUN3(VAR8)) != 0) {
if (VAR27 == 1)
continue;
else {
VAR23 = VAR35;
VAR24 = -1;
break;
}
}


VAR16 = FUN4(&VAR8[0]);
if (strcspn(VAR16, VAR36) != VAR37) {
VAR24 = -1;
VAR23 = VAR35;
break;
}

if (FUN5(VAR10, VAR16, VAR37) == 0) {
continue;
}

VAR15 = FUN4(VAR16 + VAR37);
if (((VAR29 = strcspn(VAR15, VAR36)) !=
VAR38) &&
(VAR29 != VAR39)) {
VAR24 = -1;
VAR23 = VAR35;
break;
}


VAR17 = FUN4(VAR15 + VAR29);
if ((VAR28 = strcspn(VAR17, VAR40)) == 0) {
VAR24 = -1;
VAR23 = VAR35;
break;
}

if ((VAR28 == VAR30) &&
(FUN5(VAR4->VAR31, VAR17, VAR28) == 0)) {
if ((VAR21 = (struct VAR1 *)
calloc(1, sizeof (struct VAR1))) == NULL) {
VAR23 = VAR41;
VAR24 = -1;
break;
}

(void) strncpy(VAR21->VAR42, VAR16, VAR37);
VAR21->VAR42[VAR37] = '';
(void) strncpy(VAR10, VAR16, VAR37);
VAR10[VAR37] = '';


if (VAR18 == NULL) {
VAR18 = VAR21;
} else {
VAR19->VAR43 = VAR21;
};
VAR19 = VAR21;
VAR24++;
}
}	

if (VAR24 == -1)
goto VAR44;



VAR21 = VAR18;

while (1) {
if (fgets(VAR8, sizeof (VAR8), VAR7) == NULL) {
if (FUN2(VAR7) == 0) {

VAR24 = -1;
VAR23 = VAR34;
}
break;
}

if ((VAR27 = FUN3(VAR8)) != 0) {
if (VAR27 == 1)
continue;
else {
VAR23 = VAR35;
VAR24 = -1;
break;
}
}

if ((VAR28 = strcspn(VAR8, VAR36)) != VAR37) {
VAR23 = VAR35;
VAR24 = -1;
break;
}
if ((VAR26 = FUN5(VAR21->VAR42, VAR8, VAR37)) == 0) {


VAR13 = &VAR8[VAR37];
if ((VAR28 = strspn(VAR13, VAR36)) == 0) {
VAR23 = VAR35;
VAR24 = -1;
break;
}
VAR13 += VAR28;		
VAR28 = strcspn(VAR13, VAR45);
if ((VAR12 = calloc(VAR28 + 1, 1)) == NULL) {
VAR24 = -1;
VAR34 = VAR41;
break;
}
(void) strncpy(VAR12, VAR13, VAR28);
*(VAR12 + VAR28) = '';
VAR21->VAR46 = VAR12;


VAR14 = FUN6(VAR47, VAR12);
if ((VAR12 = strdup(VAR14)) == NULL) {
VAR24 = -1;
VAR34 = VAR41;
break;
}
VAR21->VAR48 = VAR12;
} else if (VAR26 > 0) {

continue;
} else {

VAR24 = -1;
VAR34 = VAR49;
break;
}
if (VAR21->VAR43 == NULL) {

break;
} else {
VAR21 = VAR21->VAR43;
}
}		


if ((VAR24 != -1) &&
((VAR22 = calloc(VAR24, sizeof (struct VAR1))) != NULL)) {

VAR21 = VAR18;
for (VAR25 = 0; VAR25 < VAR24; VAR25++) {
VAR20 = VAR21->VAR43;
VAR21->VAR43 = VAR21;
(void) memcpy(&VAR22[VAR25], VAR21, sizeof (struct VAR1));
VAR21 = VAR20;
}


FUN7(VAR22, VAR24, sizeof (struct VAR1),
(int (*)(const void *, const void *))VAR50);


VAR18 = VAR22->VAR43; 
VAR21 = VAR18;
for (VAR25 = 0; VAR25 < VAR24; VAR25++) {
VAR19 = VAR21;
VAR21 = VAR22[VAR25].VAR43;
VAR19->VAR43 = VAR21;
}
VAR21->VAR43 = NULL;


free(VAR22);

} else {
if (VAR24 != -1)
VAR24 = -1;
}

VAR44:
(void) fclose(VAR6);
(void) fclose(VAR7);
if (VAR24 == -1) {

if (VAR18 != NULL)
(void) FUN8(VAR18);
if (VAR23)
VAR34 = VAR23;
} else {
*VAR2 = VAR18;
}
return (VAR24);
}