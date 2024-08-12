static int
FUN1(struct VAR1 *VAR2)
{
struct VAR1		*VAR3;
vm_offset_t			 VAR4;
struct VAR5		*VAR6;
struct VAR7		*VAR8 = NULL;
struct VAR9	*VAR10 = NULL;
VAR11		*VAR12;
struct VAR13		*VAR14;
struct VAR15			*VAR16;
char				*VAR17 = NULL;
size_t				 VAR18;
int				 VAR19, VAR20, VAR21;
int				 VAR22 = 0;	
int				 VAR23 = 0;	
int				 VAR24 = 0;	


for (VAR3 = VAR2; VAR3->VAR25 != NULL; VAR3 = VAR3->VAR25);


VAR26 = FUN2(VAR3->VAR27 + VAR3->VAR28, VAR29);


VAR8 = (struct VAR7 *)FUN3(FUN4(sizeof (*VAR8)));

FUN5(VAR8, sizeof(struct VAR7));
VAR8->VAR30 = VAR31|VAR32;
VAR8->VAR33 = VAR34 / 1024;
VAR8->VAR35 = VAR36 / 1024;
VAR8->VAR37 = FUN4(strlen(VAR38) + 1);

FUN6(VAR38, VAR8->VAR37,
strlen(VAR38) + 1);

FUN7((void **)(&VAR16), NULL, NULL);
if (VAR16 == NULL) {
FUN8("");
VAR19 = VAR39;
goto VAR19;
}



if (strstr(VAR2->VAR40, "") == NULL)
VAR23 = 1;

VAR4 = VAR2->VAR27;

VAR20 = 0;
for (VAR3 = VAR2->VAR25; VAR3 != NULL; VAR3 = VAR3->VAR25) {
VAR20++;
if (VAR3->VAR41 != NULL && strcmp(VAR3->VAR41, "") == 0)
VAR22++;
if (VAR3->VAR41 != NULL && strcmp(VAR3->VAR41, "") == 0)
VAR24++;
}

if (VAR20 == 0 || VAR22 == 0) {

FUN8("");
VAR19 = VAR39;
goto VAR19;
}
if (VAR23 == 1 && VAR24 == 0) {
FUN8("");
VAR19 = VAR39;
goto VAR19;
}
VAR10 = (struct VAR9 *) FUN3(VAR26);
VAR26 += FUN2(sizeof(*VAR10) * VAR20, VAR42);

FUN5(VAR10, sizeof(*VAR10) * VAR20);

VAR20 = 0;
for (VAR3 = VAR2->VAR25; VAR3 != NULL; VAR3 = VAR3->VAR25) {
VAR10[VAR20].VAR43 = VAR3->VAR27;
VAR10[VAR20].VAR44 = VAR3->VAR27 + VAR3->VAR28;

if (strcmp(VAR3->VAR41, "") == 0) {
VAR17 = NULL;
VAR19 = FUN9(VAR3, VAR16, &VAR17);
if (VAR19 != 0)
goto VAR19;
} else {
VAR18 = strlen(VAR3->VAR40) + 1;
VAR18 += strlen(VAR3->VAR41) + 5 + 1;
if (VAR3->VAR45 != NULL) {
VAR18 += strlen(VAR3->VAR45) + 1;
}
VAR17 = malloc(VAR18);
if (VAR17 == NULL) {
VAR19 = VAR46;
goto VAR19;
}

if (VAR3->VAR45 != NULL)
snprintf(VAR17, VAR18, "",
VAR3->VAR40, VAR3->VAR41, VAR3->VAR45);
else
snprintf(VAR17, VAR18, "",
VAR3->VAR40, VAR3->VAR41);
}

VAR10[VAR20].VAR17 = FUN4(strlen(VAR17)+1);
FUN6(VAR17, VAR10[VAR20].VAR17, strlen(VAR17)+1);
free(VAR17);
VAR20++;
}

VAR8->VAR47 = VAR20;
VAR8->VAR48 = FUN10(VAR10);
VAR8->VAR30 |= VAR49;

VAR6 = FUN11(VAR2, VAR50);
if (VAR6 == NULL) {
FUN8("");
VAR19 = VAR39;
goto VAR19;
}

VAR20 = VAR6->VAR51 / sizeof(struct VAR13); 
VAR12 = (VAR11 *)FUN3(FUN4(sizeof(*VAR12) * VAR20));

VAR8->VAR52 = VAR20 * sizeof(*VAR12);
VAR14 = (struct VAR13 *)VAR6->VAR53;

for (VAR21 = 0; VAR21 < VAR20; VAR21++) {
VAR12[VAR21].VAR54 = sizeof(*VAR14);
VAR12[VAR21].VAR55 = VAR14[VAR21].VAR56;
VAR12[VAR21].VAR18 = VAR14[VAR21].VAR57;
VAR12[VAR21].VAR58 = VAR14[VAR21].VAR58;
}
VAR8->VAR59 = FUN10(VAR12);
VAR8->VAR30 |= VAR60;

if (strstr(getenv(""), "") != NULL &&
VAR61 != NULL) {
VAR8->VAR62 = VAR63;
VAR8->VAR64 = FUN4(VAR63);
FUN6(VAR61, VAR8->VAR64,
VAR63);
VAR8->VAR30 &= ~VAR65;
}

if (VAR2->VAR45 == NULL) {
if (VAR23)
VAR17 = getenv("");
else
VAR17 = getenv("");
if (VAR17 != NULL) {
VAR2->VAR45 = strdup(VAR17);
if (VAR2->VAR45 == NULL) {
VAR19 = VAR46;
goto VAR19;
}
}
}


if (VAR23) {
VAR18 = strlen(VAR2->VAR40) + 1;
if (VAR2->VAR45 != NULL)
VAR18 += strlen(VAR2->VAR45) + 1;

if (VAR2->VAR45 != NULL) {
if((VAR17 = malloc(VAR18)) == NULL) {
VAR19 = VAR46;
goto VAR19;
}
snprintf(VAR17, VAR18, "", VAR2->VAR40, VAR2->VAR45);
} else {
VAR17 = strdup(VAR2->VAR40);
if (VAR17 == NULL) {
VAR19 = VAR46;
goto VAR19;
}
}
} else {
VAR17 = NULL;
if ((VAR19 = FUN9(VAR2, VAR16, &VAR17)) != 0)
goto VAR19;
}

VAR8->VAR17 = FUN4(strlen(VAR17)+1);
FUN6(VAR17, VAR8->VAR17, strlen(VAR17)+1);
VAR8->VAR30 |= VAR66;
free(VAR17);
VAR17 = NULL;


FUN12(VAR67);

FUN13();
FUN14((void *)FUN10(VAR68), VAR69,
(void *)VAR4, (void *)FUN10(VAR8));

FUN15("");

VAR19:
free(VAR17);
return (VAR19);
}