static void FUN1(VAR1 *VAR2, gpointer VAR3);
static void FUN2(VAR4 *VAR5, gpointer VAR3);

VAR6 *
FUN3(const VAR6 *VAR7, const VAR6 *VAR8, const gint VAR9, gboolean VAR10)
{


gchar VAR11[1024];
gchar VAR12[32];
VAR6 *VAR13 = NULL;
gint VAR14=0, VAR15=0;
gint VAR16=0;
gboolean VAR17 = VAR18;
gboolean VAR19 = VAR18;
gint VAR20 = 1;
VAR6 *VAR21;
VAR6 *VAR22;
VAR23 *VAR24 = NULL;

if (VAR10)
VAR24 = FUN4(VAR8);
else
VAR24 = FUN5();

if (VAR8 == NULL) return NULL;
if (VAR7 == NULL) return NULL;

VAR21 = FUN6(VAR8);
VAR22 = FUN7(VAR8);
VAR13 = FUN8(VAR21, "");


struct VAR25 *VAR25 = FUN9(struct VAR25, 1);
time_t VAR26;
VAR26 = (VAR27) VAR24->VAR28;
FUN10(&VAR26, VAR25);

if (VAR13 != NULL) {
*VAR13 = '';
}
VAR13 = NULL;
do {

while (VAR7[VAR14])
{
switch(VAR7[VAR14])
{
case '':
switch (VAR7[VAR14+1])
{
case '':
case '':
case '':
case '':
case '':
case '':
case '':
case '':
case '':
VAR16 = (VAR29) VAR7[VAR14+1];
switch (VAR7[VAR14+2])
{
case '':
VAR17 = VAR30;
if (VAR16 == 49)
sprintf(VAR12, "",VAR20);
else if (VAR16 == 50)
sprintf(VAR12, "",VAR20);
else if (VAR16 == 51)
sprintf(VAR12, "",VAR20);
else if (VAR16 == 52)
sprintf(VAR12, "",VAR20);
else if (VAR16 == 53)
sprintf(VAR12, "",VAR20);
else if (VAR16 == 54)
sprintf(VAR12, "",VAR20);
else if (VAR16 == 55)
sprintf(VAR12, "",VAR20);
else if (VAR16 == 56)
sprintf(VAR12, "",VAR20);
else if (VAR16 == 57)
sprintf(VAR12, "",VAR20);
VAR14 += 3;
strcpy(&VAR11[VAR15], VAR12);
VAR15 += strlen(VAR12);
break;
default:
VAR11[VAR15++] = VAR7[VAR14];
VAR11[VAR15++] = VAR7[VAR14+1];
VAR11[VAR15++] = VAR7[VAR14+2];
VAR14 += 3;
break;
}
break;
case '':
strcpy(&VAR11[VAR15], VAR21);
VAR15 += strlen(VAR21);
VAR14 += 2;
break;
case '':
VAR17 = VAR30;
FUN11(VAR12, "", VAR20);
strcpy(&VAR11[VAR15], VAR12);
VAR15 += strlen(VAR12);
VAR14 += 2;
break;
case '':
switch (VAR9)
{
case 0:
strcpy(&VAR11[VAR15], "");
break;
case 1:
strcpy(&VAR11[VAR15], "");
break;
case 2:
strcpy(&VAR11[VAR15], "");
break;
}
VAR15 += 1;
VAR14 += 2;
break;
case '':
{
VAR6 *VAR31 = FUN9(VAR6, 11);
FUN12(VAR31, 11, "", VAR25);
strcpy(&VAR11[VAR15], VAR31);

VAR14 += 2;
VAR15 += strlen(VAR31);

FUN13(VAR31);
break;
}
case '':
{
VAR6 *VAR31 = FUN9(VAR6, 3);
FUN12(VAR31, 3, "", VAR25);
strcpy(&VAR11[VAR15], VAR31);

VAR14 += 2;
VAR15 += strlen(VAR31);

FUN13(VAR31);
break;
}
case '':
{
VAR6 *VAR31 = FUN9(VAR6, 3);
FUN12(VAR31, 3, "", VAR25);
strcpy(&VAR11[VAR15], VAR31);

VAR14 += 2;
VAR15 += strlen(VAR31);

FUN13(VAR31);
break;
}
case '':
{
VAR6 *VAR31 = FUN9(VAR6, 500);
switch (VAR7[VAR14+2])
{
case '':
FUN12(VAR31, 500, "", VAR25);
break;
case '':
FUN12(VAR31, 500, "", VAR25);
break;
case '':
FUN12(VAR31, 500, "", VAR25);
break;
case '':
FUN12(VAR31, 500, "", VAR25);
break;
case '':
FUN12(VAR31, 500, "", VAR25);
break;
case '':
FUN12(VAR31, 500, "", VAR25);
break;
default:
*VAR31 = 0;

}
strcpy(&VAR11[VAR15], VAR31);

VAR14 += 3;
VAR15 += strlen(VAR31);

FUN13(VAR31);
break;
}
case '':
{
VAR6 *VAR31 = FUN9(VAR6, 50);
switch (VAR7[VAR14+2])
{
case '':
sprintf(VAR31, "", VAR24->VAR32);
break;
case '':
sprintf(VAR31, "", (int)(0.4999f + VAR24->VAR33));
break;
case '':
if (VAR24->VAR33 <= 1000)
sprintf(VAR31, "", 1.0f / VAR24->VAR33);
else
sprintf(VAR31, "", 1.0f / VAR24->VAR33);
break;
case '':
sprintf(VAR31, "", VAR24->VAR34);
break;
case '':
sprintf(VAR31, "", VAR24->VAR35);
break;
default:
*VAR31 = 0;
}
strcpy(&VAR11[VAR15], VAR31);

VAR14 += 3;
VAR15 += strlen(VAR31);

FUN13(VAR31);
break;
}

case '':
{
VAR6 *VAR31 = FUN9(VAR6, 9);
FUN12(VAR31, 9, "", VAR25);
strcpy(&VAR11[VAR15], VAR31);

VAR14 += 2;
VAR15 += strlen(VAR31);

FUN13(VAR31);
break;
}
case '':
{
strcpy(&VAR11[VAR15], VAR22);
VAR15 += strlen(VAR22);
VAR14 += 2;
break;
}
default:
VAR11[VAR15++] = VAR7[VAR14];
VAR11[VAR15++] = VAR7[VAR14+1];
VAR14 += 2;
break;
}
break;
default:
VAR11[VAR15++] = VAR7[VAR14++];
break;
}
}

VAR11[VAR15] = '';

if (VAR13)
FUN13(VAR13);

VAR13 = FUN14(VAR11);

VAR19 = FUN15(VAR13, VAR36);

if (VAR17 == VAR18)
VAR19 = VAR18;


VAR20++;
VAR14 = 0;
VAR15 = 0;

} while (VAR19 == VAR30);

FUN13(VAR21);
FUN13(VAR25);
FUN13(VAR22);
FUN16(VAR24);

return VAR13;
}