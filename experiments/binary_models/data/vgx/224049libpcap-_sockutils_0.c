static VAR1 FUN1(struct VAR2 *VAR2, char *VAR3,
int VAR4)
{
SOCKET VAR5;
int VAR6 = 1;

VAR5 = socket(VAR2->VAR7, VAR2->VAR8,
VAR2->VAR9);
if (VAR5 == VAR10)
{
FUN2(VAR3, VAR4, "");
return VAR10;
}


if (FUN3(VAR5, VAR11, VAR12, (char *)&VAR6,
sizeof (int)) == -1)
{
FUN2(VAR3, VAR4,
"");
FUN4(VAR5);
return VAR10;
}
return VAR5;
}


VAR1 FUN5(const char *VAR13, struct VAR2 *VAR2, int VAR14, int VAR15, char *VAR3, int VAR4)
{
SOCKET VAR5;


if (VAR14)
{
int VAR6;


VAR5 = FUN1(VAR2, VAR3, VAR4);
if (VAR5 == VAR10)
{
return VAR10;
}


VAR6 = 1;
(void)FUN3(VAR5, VAR11, VAR16,
(char *)&VAR6, sizeof (VAR6));



if (VAR2->VAR7 == VAR17)
{
VAR6 = 1;
if (FUN3(VAR5, VAR18, VAR19,
(char *)&VAR6, sizeof (int)) == -1)
{
if (VAR3)
snprintf(VAR3, VAR4, "");
FUN4(VAR5);
return VAR10;
}
}


if (FUN6(VAR5, VAR2->VAR20, (int) VAR2->VAR21) != 0)
{
FUN2(VAR3, VAR4, "");
FUN4(VAR5);
return VAR10;
}

if (VAR2->VAR8 == VAR22)
if (FUN7(VAR5, VAR15) == -1)
{
FUN2(VAR3, VAR4,
"");
FUN4(VAR5);
return VAR10;
}


return VAR5;
}
else	
{
struct VAR23 *VAR24;
struct VAR2 *VAR25;
size_t VAR26;
size_t VAR27;
int VAR28 = VAR29;


VAR26 =  0;
for (VAR25 = VAR2; VAR25 != NULL;
VAR25 = VAR25->VAR30)
{
VAR26++;
}

if (VAR26 == 0)
{
snprintf(VAR3, VAR4,
"");
return VAR10;
}


VAR24 = calloc(VAR26, sizeof *VAR24);
if (VAR24 == NULL)
{
snprintf(VAR3, VAR4,
"", VAR13);
return VAR10;
}

for (VAR25 = VAR2, VAR27 = 0; VAR25 != NULL;
VAR25 = VAR25->VAR30, VAR27++)
{
VAR24[VAR27].VAR31 = VAR25;
VAR24[VAR27].VAR32 = 0;
VAR24[VAR27].VAR33 = VAR34;
}


FUN8(VAR24, VAR26, sizeof *VAR24,
VAR35);


VAR5 = VAR10;


for (VAR27 = 0; VAR27 < VAR26; VAR27++)
{
VAR25 = VAR24[VAR27].VAR31;
break;

if (VAR5 != VAR10 &&
VAR28 != VAR25->VAR7)
{
FUN4(VAR5);
VAR5 = VAR10;
}


if (VAR5 == VAR10)
{
VAR5 = FUN1(VAR25,
VAR3, VAR4);
if (VAR5 == VAR10)
{
free(VAR24);
return VAR10;
}
}
if (connect(VAR5, VAR25->VAR20, (int) VAR25->VAR21) == -1)
{
VAR24[VAR27].VAR32 = FUN9();
VAR24[VAR27].VAR33 =
FUN10(VAR24[VAR27].VAR32);
}
else
break;
}


if (VAR27 == VAR26)
{
int VAR36;
int VAR37;

FUN4(VAR5);


FUN8(VAR24, VAR26, sizeof *VAR24,
VAR38);


VAR36 = 1;
VAR37 = VAR24[0].VAR32;
for (VAR27 = 1; VAR27 < VAR26; VAR27++)
{
if (VAR24[VAR27].VAR32 != VAR37)
{
VAR36 = 0;
break;
}
}

if (VAR36) {

if (VAR24[0].VAR33 == VAR39) {

FUN11(VAR3, VAR4,
VAR24[0].VAR32,
"",
VAR13);
} else {
FUN11(VAR3, VAR4,
VAR24[0].VAR32,
"", VAR13);
}
} else {

char *VAR40;
size_t VAR41;
size_t VAR42;

snprintf(VAR3, VAR4,
"", VAR13);

VAR42 = strlen(VAR3);
VAR40 = VAR3 + VAR42;
VAR41 = VAR4 - VAR42;

for (VAR27 = 0; VAR27 < VAR26 &&
VAR24[VAR27].VAR32 != VAR34;
VAR27++)
{

FUN12((struct VAR43 *) VAR24[VAR27].VAR31->VAR20,
VAR40, (int)VAR41,
NULL, 0, VAR44, NULL, 0);
VAR42 = strlen(VAR3);
VAR40 = VAR3 + VAR42;
VAR41 = VAR4 - VAR42;

if (VAR27 + 1 < VAR26 &&
VAR24[VAR27 + 1].VAR32 == VAR24[VAR27].VAR32)
{

snprintf(VAR40, VAR41,
"");
}
else
{

FUN11(VAR40,
VAR41,
VAR24[VAR27].VAR32,
"", "");
VAR42 = strlen(VAR3);
VAR40 = VAR3 + VAR42;
VAR41 = VAR4 - VAR42;

if (VAR27 + 1 < VAR26 &&
VAR24[VAR27 + 1].VAR32 != VAR34)
{

snprintf(VAR40,
VAR41,
"");
}
}
VAR42 = strlen(VAR3);
VAR40 = VAR3 + VAR42;
VAR41 = VAR4 - VAR42;
}
}
free(VAR24);
return VAR10;
}
else
{
free(VAR24);
return VAR5;
}
}
}