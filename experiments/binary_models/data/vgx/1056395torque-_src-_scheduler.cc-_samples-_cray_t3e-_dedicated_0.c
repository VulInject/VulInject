VAR1 *
FUN1(char *VAR2, time_t VAR3)
{
char   *VAR4 = "";
VAR5 *VAR6, *VAR7;
VAR1 *VAR8, *VAR9, *VAR10;

if (VAR3 == 0)
VAR3 = VAR11;
else if (VAR3 < VAR11)
{
(void)sprintf(VAR12,
"");
FUN2(VAR13, VAR14, VAR4, VAR12);
FUN3(("", VAR4, VAR12));
}


for (VAR6 = VAR15; VAR6 != NULL; VAR6 = VAR6->VAR16)
{
if (strcmp(VAR2, VAR6->VAR2) == 0)
{
break;
}
}


if (VAR6 == NULL)
{
VAR7 = (VAR5 *)malloc(sizeof(VAR5));

if ((VAR7 == NULL) ||
((VAR7->VAR2 = FUN4(VAR2)) == NULL))
{
(void)sprintf(VAR12,
"");
FUN2(VAR13, VAR14, VAR4, VAR12);
FUN3(("", VAR4, VAR12));
return (NULL);
}


VAR7->VAR16      = NULL;

VAR7->VAR8   = NULL;


VAR7->VAR17 = 0;


if (VAR15 == NULL)
{
VAR15 = VAR7;
}
else
{
for (VAR6 = VAR15; VAR6->VAR16; VAR6 = VAR6->VAR16)
;

VAR6->VAR16 = VAR7;
}

VAR6 = VAR7;
}


if ((VAR6->VAR17 == 0) ||
(VAR11 - VAR6->VAR17) > VAR18)
{
FUN3(("", VAR4, VAR6->VAR2));

if (VAR6->VAR17)
{
FUN3(("", FUN5(VAR11 -
(VAR6->VAR17 + VAR18))));
}
else
{
FUN3((""));
}



if (FUN6(VAR2, &VAR8))
{
(void)sprintf(VAR12,
"", VAR2);
FUN2(VAR13, VAR14, VAR4, VAR12);
FUN3(("", VAR4, VAR12));

if (VAR6->VAR17)
(void)sprintf(VAR12, "",
FUN5(VAR11 - VAR6->VAR17));
else
(void)sprintf(VAR12, "");

FUN2(VAR13, VAR14, VAR4, VAR12);

FUN3(("", VAR4, VAR12));

}
else
{

FUN3(("", VAR4, VAR2));

(void)sprintf(VAR12,
"", VAR2,
FUN5(VAR18));
FUN2(VAR13, VAR14, VAR4, VAR12);
FUN3(("", VAR4, VAR12));



for (VAR10 = VAR8; VAR10 != NULL; VAR10 = VAR10->VAR16)
VAR10->VAR2 = VAR6->VAR2;

FUN3(("", VAR4, VAR2));

for (VAR10 = VAR8; VAR10 != NULL; VAR10 = VAR10->VAR16)
FUN3(("", VAR4, FUN7(VAR10)));



if (VAR19)
{
FUN3(("", VAR4,
VAR19));

if (FUN6(VAR19, &VAR9) == 0)
{
if (VAR9 != NULL)
{


for (VAR10 = VAR9; VAR10 != NULL; VAR10 = VAR10->VAR16)
{
VAR10->VAR2 = VAR19;
VAR10->VAR20 |= VAR21;
}

FUN3(("", VAR4, VAR2));

for (VAR10 = VAR9; VAR10 != NULL; VAR10 = VAR10->VAR16)
FUN3(("", VAR4, FUN7(VAR10)));


(void)sprintf(VAR12,
"",
VAR19, VAR2);

FUN2(VAR13, VAR14,
VAR4, VAR12);

FUN3(("", VAR4, VAR12));


VAR8 = FUN8(VAR9, VAR8);

if (VAR8 == NULL)
FUN3(("", VAR4));

VAR9 = NULL; 
}
}
else
{
(void)sprintf(VAR12, ""
"", VAR19);
FUN2(VAR13, VAR14,
VAR4, VAR12);
FUN3(("", VAR4, VAR12));
}
}


FUN9(VAR6->VAR8);


VAR6->VAR8 = VAR8;

VAR6->VAR17 = VAR11;

}
}



FUN3(("", VAR4, VAR2));

for (VAR10 = VAR6->VAR8; VAR10 != NULL; VAR10 = VAR10->VAR16)
FUN3(("", VAR4, FUN7(VAR10)));


for (VAR10 = VAR6->VAR8; VAR10 != NULL; VAR10 = VAR10->VAR16)
{

if (VAR10->VAR22 > VAR3)
break;

FUN3(("", VAR4,
VAR10->VAR23, VAR10->VAR24,
VAR10->VAR25, VAR10->VAR26));
}

return (VAR10);
}


int
FUN10(VAR27 *VAR28, VAR29 *VAR30, time_t VAR3, char *VAR31)
{
char   *VAR4 = "";
VAR1 *VAR32;
char   *VAR33;
time_t VAR34;



if (!(VAR35 && VAR11 >= VAR35))
return(1);

if (VAR36 == NULL)
return(1);


if (VAR3 == 0)
VAR3 = VAR11;


VAR32 = FUN1(VAR30->VAR2, VAR3);


if (VAR32 == NULL)
return (1);

VAR33 = FUN11(VAR32->VAR2);

VAR34 = VAR3 + VAR28->VAR37;


if ((VAR32->VAR38 <= VAR3) && (VAR3 <= VAR32->VAR22))
{

if (VAR28->VAR20 & VAR39)
{

if (VAR34 >= VAR32->VAR22)
{
if (VAR31)
(void)sprintf(VAR31,
"",
VAR33 ? VAR33 : VAR32->VAR2,
VAR32->VAR25, VAR32->VAR26);

return 0;
}
}
else
{

if (VAR31)
sprintf(VAR31, "",
VAR33 ? VAR33 : VAR32->VAR2,
VAR32->VAR25, VAR32->VAR26);

return 0;

}
}
else
{

if (VAR34 >= VAR32->VAR38)
{
if (VAR31)
(void)sprintf(VAR31,
"",
VAR33 ? VAR33 : VAR32->VAR2,
VAR32->VAR23, VAR32->VAR24);

return 0;
}
}

FUN3(("", VAR4, VAR28->VAR40));

return 1; 
}


static int
FUN6(char *VAR2, VAR1 **VAR41)
{
char   *VAR4 = "";
char    VAR42[VAR43];
char    VAR44[VAR43];
char   *VAR45, *VAR46;
char    VAR47[VAR48 + 1]; 
char    VAR49[VAR50 + 1]; 
char    VAR51[VAR48 + 1];  
char    VAR52[VAR50 + 1];  
char   *VAR53;
VAR54   *VAR55;
VAR1 *VAR56, *VAR57, *VAR58;
int     VAR59, VAR60;
size_t  VAR61;

VAR56 = VAR57 = NULL;


VAR59    = 0;
VAR47[0] = '';
VAR49[0] = '';
VAR51[0]   = '';
VAR52[0]   = '';


VAR46 = FUN11(VAR2);

if (VAR46 == NULL)
return (-1);

sprintf(VAR44, "", VAR62, VAR46);

FUN3(("", VAR4, VAR44));

if ((VAR55 = popen(VAR44, "")) == NULL)
{

(void)sprintf(VAR12, ""%VAR63\"", VAR44,
strerror(VAR64));
FUN2(VAR13, VAR14, VAR4, VAR12);
FUN3(("", VAR4, VAR12));

free(VAR46);
return (1);
}


while (fgets(VAR42, sizeof VAR42, VAR55) != NULL)
{

VAR60 = 0;



if ((VAR61 = strlen(VAR42)) == 0)
continue;


if (VAR61 >= (sizeof(VAR42) - 1))
{
(void)sprintf(VAR12,
"", VAR4, VAR44);
FUN2(VAR13, VAR14, VAR4, VAR12);
FUN3(("", VAR4, VAR12));
VAR59 = 0;
break;
}


if (VAR42[VAR61 - 1] == '')
VAR42[VAR61 - 1] = '';


if (!FUN12(VAR42, "", 5))
{
VAR59 = 0;
FUN2(VAR13, VAR14, VAR4, VAR42);
FUN3(("", VAR4, VAR42));
break;
}

if (!strcmp(VAR42,
""))
{
VAR59 ++;
break;  
}


if (!FUN12(VAR42, "", 8))
{
continue;
}

if (strstr(VAR42, ""))
VAR60 ++;


VAR45 = strtok(VAR42, "");  

if (VAR45 == NULL)
continue;


VAR53 = VAR45;

VAR45 = strtok(NULL, "");  

if (VAR45 == NULL)
continue;

strncpy(VAR47, VAR45, VAR48);

VAR45 = strtok(NULL, "");   

if (VAR45 == NULL)
continue;

strncpy(VAR49, VAR45, VAR50);

VAR45 = strtok(NULL, "");  

if (VAR45 == NULL)
continue;

strncpy(VAR52, VAR45, VAR50);

VAR45 = strtok(NULL, "");  

if (VAR45 == NULL)
continue;

strncpy(VAR51, VAR45, VAR48);


VAR59++;


FUN13(VAR53);

if (strcmp(VAR53, VAR46) != 0)
{
continue;
}

if (FUN14(VAR47, VAR49) >=
FUN14(VAR51, VAR52))
{
FUN3(("", VAR4));
FUN3(("", VAR4, VAR46,
VAR47, VAR49, VAR51, VAR52));
continue;
}

if (VAR60)
{

FUN3(("",
VAR4, VAR46, VAR47, VAR49, VAR51, VAR52));
VAR59 ++;
continue;
}


if (FUN14(VAR51, VAR52) > VAR11)
{
VAR59 ++;

if ((VAR58 = (VAR1 *)malloc(sizeof(VAR1))) == NULL)
{
(void)sprintf(VAR12, "");
FUN2(VAR13, VAR14, VAR4,
VAR12);
FUN3(("", VAR4, VAR12));

VAR59 = 0;
break;
}

memset((void *)VAR58, 0, sizeof(VAR1));



if (VAR57)
VAR57->VAR16 = VAR58;
else
VAR56 = VAR58;

VAR57 = VAR58;

VAR58->VAR16 = NULL;



VAR58->VAR2 = NULL; 

strncpy(VAR58->VAR23, VAR47, VAR48);

strncpy(VAR58->VAR24, VAR49, VAR50);

strncpy(VAR58->VAR25, VAR51, VAR48);

strncpy(VAR58->VAR26, VAR52, VAR50);

VAR58->VAR38 = FUN14(VAR47, VAR49);

VAR58->VAR22 = FUN14(VAR51, VAR52);
}
}

FUN15(VAR55);

free(VAR46);

if (VAR59)
{

*VAR41 = VAR56;
return 0;

}
else
{
FUN3(("", VAR4, VAR44));

if (VAR56)
FUN9(VAR56);

*VAR41 = NULL;

return 1;
}
}

static VAR1 *
FUN8(VAR1 *VAR65, VAR1 *VAR66)
{
char     *VAR4 = "";
VAR1  **VAR67, *VAR10, *VAR68;
int       VAR69, VAR70, VAR71;



if (VAR65 == NULL)
return (VAR66);


if (VAR66 == NULL)
return (VAR65);


VAR69 = 0;

for (VAR10 = VAR65; VAR10 != NULL; VAR10 = VAR10->VAR16)
++ VAR69;

for (VAR10 = VAR66; VAR10 != NULL; VAR10 = VAR10->VAR16)
++ VAR69;


VAR67 = (VAR1 **)calloc(VAR69, sizeof(VAR1 *));

if (VAR67 == NULL)
{
(void)sprintf(VAR12, "", VAR69,
(int)sizeof(VAR1 *));
FUN2(VAR13, VAR14, VAR4, VAR12);
FUN3(("", VAR4, VAR12));


FUN9(VAR65);
FUN9(VAR66);


return (NULL);
}


VAR70 = 0;

for (VAR10 = VAR65; VAR10 != NULL; VAR10 = VAR10->VAR16)
VAR67[VAR70++] = VAR10;

for (VAR10 = VAR66; VAR10 != NULL; VAR10 = VAR10->VAR16)
VAR67[VAR70++] = VAR10;

FUN16(VAR67, VAR69, sizeof(VAR1 *), VAR72);


VAR68 = VAR10 = VAR67[0];

for (VAR70 = 1; VAR70 < VAR69; VAR70++)
{
VAR10->VAR16 = VAR67[VAR70];
VAR10 = VAR10->VAR16;
}

VAR10->VAR16 = NULL;


free(VAR67);


FUN3(("", VAR4));

for (VAR10 = VAR68; VAR10 != NULL; VAR10 = VAR10->VAR16)
FUN3(("", VAR4, FUN7(VAR10)));

for (VAR70 = 0; VAR70 < VAR73; VAR70++)
{
VAR71 = FUN17(&VAR68);

if (VAR71 < 0)
{
(void)sprintf(VAR12, "");
FUN2(VAR13, VAR14, VAR4, VAR12);
FUN3(("", VAR4, VAR12));

FUN9(VAR68);
return (NULL);
}

if (VAR71 == 0)
{

break;
}


continue;
}

if (VAR70 == VAR73)
{
(void)sprintf(VAR12,
"", VAR70);
FUN2(VAR13, VAR14, VAR4, VAR12);
FUN3(("", VAR4, VAR12));
}


return (VAR68);
}

static int
FUN17(VAR1 **VAR41)
{
char    *VAR4 = "";
VAR1  *VAR74, *VAR75;
VAR1  *VAR10, *VAR16, *this, *VAR76, *VAR77;
time_t   VAR78, VAR79, VAR80, VAR81;
int      VAR71 = 0;




VAR75 = NULL;


VAR74  = *VAR41;

for (this = VAR74; this->VAR16 != NULL; this = VAR16)
{
VAR16 = this->VAR16;



if (this->VAR22 < VAR16->VAR38)
continue;


VAR71 = 1;


if ((this->VAR20 & VAR21) ==
(VAR16->VAR20 & VAR21))
{
FUN3(("", VAR4,
(this->VAR20 & VAR21) ? "" : ""));
FUN3(("", VAR4, FUN7(this)));
FUN3(("", VAR4, FUN7(VAR16)));


this->VAR38 = FUN18(this->VAR38, VAR16->VAR38);
this->VAR22 = FUN19(this->VAR22, VAR16->VAR22);
VAR16->VAR38 = this->VAR38;
VAR16->VAR22 = this->VAR22;


FUN20(this);
FUN20(VAR16);

FUN3(("", VAR4, FUN7(this)));


VAR77  = this;
VAR76 = VAR16;
}
else
{


if (this->VAR20 & VAR21)
{
VAR77  = this;
VAR76 = VAR16;
}
else
{
VAR76 = this;
VAR77  = VAR16;
}
}

FUN3(("", VAR4, FUN7(VAR77)));

FUN3(("", VAR4, FUN7(VAR76)));

VAR78  = VAR77->VAR38;
VAR79  = VAR77->VAR22;
VAR80 = VAR76->VAR38;
VAR81 = VAR76->VAR22;



if ((VAR79 - VAR78) < 1)
{
(void)sprintf(VAR12,
"", FUN7(VAR77));
FUN2(VAR13, VAR14, VAR4, VAR12);
FUN3(("", VAR4, VAR12));


VAR71 = -1;
break;
}

if ((VAR81 - VAR80) < 1)
{
(void)sprintf(VAR12,
"", FUN7(VAR76));
FUN2(VAR13, VAR14, VAR4, VAR12);
FUN3(("", VAR4, VAR12));


VAR71 = -1;
break;
}


if ((VAR78 <= VAR80) && (VAR79 >= VAR81))
{
FUN3(("",
VAR4));
FUN3(("", VAR4,
FUN7(VAR76)));



if (VAR76 != VAR74)
{
for (VAR10 = VAR74; VAR10 != NULL; VAR10 = VAR10->VAR16)

if (VAR10->VAR16 == VAR76)
break;

if (VAR10 == NULL)
{
FUN3(("", VAR4));
VAR71 = -1;
break;
}

FUN3(("",

VAR4, FUN7(VAR10)));
VAR10->VAR16 = VAR76->VAR16;
}
else
{
VAR74 = VAR76->VAR16;
FUN3(("",