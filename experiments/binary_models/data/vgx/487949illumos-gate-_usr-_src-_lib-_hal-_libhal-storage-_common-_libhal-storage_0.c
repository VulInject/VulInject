FUN1 (VAR1 *VAR2, const char *VAR3)
{	
char *VAR4;
VAR5 *VAR6;
VAR7 *VAR8;
LibHalPropertySetIterator VAR9;
DBusError VAR10;
unsigned int VAR11;

FUN2(VAR2, NULL);

VAR6 = NULL;
VAR8 = NULL;
VAR4 = NULL;

FUN3 (&VAR10);
if (!FUN4 (VAR2, VAR3, "", &VAR10))
goto VAR10;

VAR6 = malloc (sizeof (VAR5));
if (VAR6 == NULL)
goto VAR10;
memset (VAR6, 0x00, sizeof (VAR5));

VAR6->VAR2 = VAR2;

VAR6->VAR3 = strdup (VAR3);
if (VAR6->VAR3 == NULL)
goto VAR10;

VAR8 = FUN5 (VAR2, VAR3, &VAR10);
if (VAR8 == NULL)
goto VAR10;


for (FUN6 (&VAR9, VAR8); FUN7 (&VAR9); FUN8 (&VAR9)) {
int VAR12;
char *VAR13;

VAR12 = FUN9 (&VAR9);
VAR13 = FUN10 (&VAR9);

VAR14;

FUN11    ("",               VAR6->VAR15);
FUN11    ("",               VAR6->VAR16);
FUN12 ("",              VAR6->VAR17);
FUN12 ("",               VAR4);
FUN12 ("",            VAR6->VAR18);
FUN12 ("",             VAR6->VAR19);
FUN12 ("",        VAR6->VAR20);
FUN13 ("", 		 VAR6->VAR21); 

FUN12 ("",        VAR6->VAR22);
FUN12 ("",       VAR6->VAR23);

FUN14   ("",      VAR6->VAR24);
FUN14   ("",         VAR6->VAR25);
FUN14   ("", VAR6->VAR26);
FUN13 ("", VAR6->VAR27); 
FUN14   ("",    VAR6->VAR28);

FUN12 ("", VAR6->VAR29); 

FUN12 ("",   VAR6->VAR30);
FUN12 ("",  VAR6->VAR31);
FUN12 ("",            VAR6->VAR32);

FUN15 ("", VAR6->VAR33, VAR34);
FUN15 ("", VAR6->VAR33, VAR35);
FUN15 ("", VAR6->VAR33, VAR36);
FUN15 ("", VAR6->VAR33, VAR37);
FUN15 ("", VAR6->VAR33, VAR38);
FUN15 ("", VAR6->VAR33, VAR39);
FUN15 ("", VAR6->VAR33, VAR40);
FUN15 ("", VAR6->VAR33, VAR41);
FUN15 ("", VAR6->VAR33, VAR42);
FUN15 ("", VAR6->VAR33, VAR43);
FUN15 ("", VAR6->VAR33, VAR44);
FUN15 ("", VAR6->VAR33, VAR45);
FUN15 ("", VAR6->VAR33, VAR46);
FUN15 ("", VAR6->VAR33, VAR47);
FUN15 ("", VAR6->VAR33, VAR48);
FUN15 ("", VAR6->VAR33, VAR49);

FUN14   ("",        VAR6->VAR50);
FUN12 ("", VAR6->VAR51);
FUN12 ("",    VAR6->VAR52);

FUN14   ("",        VAR6->VAR53);

FUN16 ("",                VAR6->VAR54);

VAR55;
}

if (VAR6->VAR20 != NULL) {
if (strcmp (VAR6->VAR20, "") == 0) {
VAR6->VAR33 |= VAR56;
VAR6->VAR12 = VAR57;
} else if (strcmp (VAR6->VAR20, "") == 0) {
VAR6->VAR12 = VAR58;
} else if (strcmp (VAR6->VAR20, "") == 0) {
if (VAR6->VAR25)
VAR6->VAR12 = VAR59;
else
VAR6->VAR12 = VAR60;				
} else if (strcmp (VAR6->VAR20, "") == 0) {
VAR6->VAR12 = VAR61;
} else if (strcmp (VAR6->VAR20, "") == 0) {
VAR6->VAR12 = VAR62;
} else if (strcmp (VAR6->VAR20, "") == 0) {
VAR6->VAR12 = VAR63;
} else if (strcmp (VAR6->VAR20, "") == 0) {
VAR6->VAR12 = VAR64;
} else if (strcmp (VAR6->VAR20, "") == 0) {
VAR6->VAR12 = VAR65;
} else if (strcmp (VAR6->VAR20, "") == 0) {
VAR6->VAR12 = VAR66;
} else if (strcmp (VAR6->VAR20, "") == 0) {
VAR6->VAR12 = VAR67;
} else if (strcmp (VAR6->VAR20, "") == 0) {
VAR6->VAR12 = VAR68;
} else {
VAR6->VAR12 = VAR60; 
}

}

if (VAR6->VAR54 != NULL) {
for (VAR11 = 0; VAR6->VAR54[VAR11] != NULL; VAR11++) {
if (strcmp (VAR6->VAR54[VAR11], "") == 0) {
VAR6->VAR12 = VAR69;
break;
} else if (strcmp (VAR6->VAR54[VAR11], "") == 0) {
VAR6->VAR12 = VAR70;
break;
}
}
}

if (VAR4 != NULL) {
if (strcmp (VAR4, "") == 0) {
VAR6->VAR71 = VAR72;
} else if (strcmp (VAR4, "") == 0) {
VAR6->VAR71 = VAR73;
} else if (strcmp (VAR4, "") == 0) {
VAR6->VAR71 = VAR74;
} else if (strcmp (VAR4, "") == 0) {
VAR6->VAR71 = VAR75;
} else if (strcmp (VAR4, "") == 0) {
VAR6->VAR71 = VAR76;
}
}

FUN17 (VAR4);
FUN18 (VAR8);

return VAR6;

VAR10:
FUN19(&VAR10);
FUN17 (VAR4);
FUN18 (VAR8);
FUN20 (VAR6);
return NULL;
}