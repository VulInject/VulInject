static void
FUN1(char *VAR1, int VAR2)
{
char *VAR3[5];               
int VAR4, VAR5, VAR6;
struct VAR7 *VAR8;

if (VAR1[0] == '')
VAR1++;           

while (*VAR1 && *VAR1 <= '')
VAR1++;           
if (!VAR1[0])
return;        
if (VAR2 && FUN2 (VAR1, "", 7)) 
return;
if (!FUN2 (VAR1, "", 7))
VAR1 += 7;        
VAR9 = 1;
while (*VAR1 && *VAR1 <= '')
VAR1++;
VAR10 = VAR1;
while (*VAR10) {

for (VAR4 = 0; VAR4 < 5;) {

if (*VAR10 == 0)
break;     
VAR3[VAR4] = FUN3 ();
if (strcmp (VAR3[VAR4], "") == 0)
break;     
VAR4++;
}


if (VAR4 > 4)
FUN4 ("");
if (VAR4 < 3)
FUN4 ("");
if (VAR4 == 3 && strcmp (VAR3[1], "") == 0) {
if (!VAR11)
continue;
if (VAR11 == 2 && strcmp (VAR3[0], "") != 0) {
VAR8 = FUN5 (VAR3[0]);
if (VAR8) VAR8->VAR12 = 1;
}
FUN6 (VAR3[0], VAR3[2]);
} else if (VAR4 == 3 && strcmp (VAR3[1], "") == 0) {
if (!VAR11)
continue;
if (VAR11 == 2)
FUN4 ("");
FUN7 (VAR3[0], VAR3[2]);
} else if (VAR4 == 3 && strcmp (VAR3[0], VAR13) == 0 &&
strcmp (VAR3[1], "") == 0) {

if (VAR11)
continue;
if (VAR11 == 2)
FUN4 ("");
if (VAR14 != -1)
FUN4 ("");
if (sscanf (VAR3[2], "", &VAR6) == 1) {

if (VAR6 < 0 || VAR6 > 255)
FUN4 ("");
else
FUN8 (VAR6);
} else {     
for (VAR6 = 0; VAR6 < 256; VAR6++)
if (!strcmp (VAR15->VAR16[VAR6], VAR3[2]))
break;
if (VAR6<256) VAR17 = FUN9(VAR3[2]);
else {
if (strcmp ("", VAR3[2])) VAR18
("");
VAR6 = -1;
VAR17 = FUN9(VAR13);
}
FUN8 (VAR6);
}
} else if (VAR4 == 4) {        
int VAR19 = -1;

if (!VAR11)
continue;
if (VAR11 == 2)
FUN4 ("");
for (VAR5 = 0; VAR20[VAR5]; VAR5++)
if (strcmp (VAR3[2], VAR20[VAR5]) == 0) {
VAR19 = VAR5;
break;
}
if (VAR19 < 0)
FUN4 ("");
if (!strcmp (VAR3[0], VAR13))
VAR8 = VAR21;
else
VAR8 = FUN5 (VAR3[0]);
if (VAR8) {
struct VAR22 *VAR22;

if (FUN5 (VAR3[1]))       
FUN6 (VAR3[0], VAR3[1]);
if (strcmp (VAR3[3], VAR13) == 0)
FUN4 ("");
for (VAR22 = VAR8->VAR23; VAR22; VAR22 = VAR22->VAR24)
if (strcmp (VAR22->VAR25, VAR3[1]) == 0)
break; 
if (VAR22 == 0) {
VAR22 = FUN10 ();
VAR22->VAR25 = FUN9 (VAR3[1]);
VAR22->VAR24 = VAR8->VAR23;
VAR8->VAR23 = VAR22;
}
VAR22->VAR26 = FUN9 (VAR3[3]);
VAR22->VAR19 = VAR19;
if (strcmp (VAR3[1], VAR13) == 0) {
VAR22->VAR27 = 1;
if (strcmp (VAR3[0], VAR13) == 0)
FUN4 ("");
} else
VAR22->VAR27 = 0;
}
} else
FUN4 ("");
}
}