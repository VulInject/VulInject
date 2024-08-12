int
main(int argc, char **argv)
{



struct VAR1	*VAR2;	
struct VAR1	*VAR3;	
struct VAR1	*VAR4;		
struct VAR1	*VAR5;	
struct VAR6	*VAR7;	
struct VAR6	*VAR8; 
struct VAR6	*VAR9; 
struct VAR6	*VAR10; 
struct VAR11	*VAR12;		
struct VAR13	*VAR14;		
char	*VAR15;		
char	**VAR16;		
char	*VAR17 = NULL;	
char	*VAR18 = NULL;	
int	VAR19;		
int	VAR20;		
int	VAR21;	
int	VAR22;		
int	VAR23 = 0;	
int	VAR24;		
int	VAR25;		



FUN1(argv[0]);


VAR19 = VAR26;
VAR20 = VAR26;
VAR21 = VAR26;
VAR27 = 0;
while (!VAR21 && ((VAR25 = getopt(argc, argv, "")) != VAR28)) {


switch (VAR25) {

case '':
if (VAR19)
VAR21 = VAR29;
else {
VAR19 = VAR29;
VAR17 = VAR30;
}
break;

case '':
if (VAR20)
VAR21 = VAR29;
else {
VAR20 = VAR29;
VAR18 = VAR30;
}
break;

default:
VAR21 = VAR29;
}
}


if (VAR21 || (VAR31 != argc)) {
FUN2(VAR32, VAR33, VAR34, VAR35);
FUN3(1);
}



VAR2 = NULL;
if (VAR19) {


VAR23 = 0;


if ((VAR15 = strtok(VAR17, "")) != NULL) {
VAR3 = (struct VAR1 *)
FUN4(sizeof (struct VAR1));
VAR3->VAR36 = VAR15;
VAR3->VAR37 = VAR26;
VAR3->VAR38 = NULL;
VAR23++;
VAR2 = VAR3;
VAR4 = VAR3;


while ((VAR15 = strtok(NULL, "")) != NULL) {


VAR5 = VAR2;
VAR24 = 0;
while (VAR5 &&
(VAR24 = strcmp(VAR15, VAR5->VAR36)))
VAR5 = VAR5->VAR38;
if (VAR24 != 0) {


VAR3 = (struct VAR1 *)
FUN4(sizeof (struct VAR1));
VAR3->VAR36 = VAR15;
VAR3->VAR37 = VAR26;
VAR3->VAR38 = NULL;
VAR23++;
VAR4->VAR38 = VAR3;
VAR4 = VAR3;
}
}
}
}


VAR7 = NULL;
if (VAR20) {

if ((VAR15 = strtok(VAR18, "")) != NULL) {


VAR8 = (struct VAR6 *)
FUN4(sizeof (struct VAR6));
VAR8->VAR39 = VAR15;
VAR8->VAR37 = VAR26;
VAR8->VAR38 = NULL;
VAR7 = VAR8;
VAR9 = VAR8;



while ((VAR15 = strtok(NULL, "")) != NULL) {


VAR10 = VAR7;
VAR24 = 0;
while (VAR10 &&
(VAR24 = strcmp(VAR15, VAR10->VAR39)))
VAR10 = VAR10->VAR38;


if (VAR24 != 0) {
VAR8 = (struct VAR6 *)
FUN4(sizeof (struct VAR6));
VAR8->VAR39 = VAR15;
VAR8->VAR37 = VAR26;
VAR8->VAR38 = NULL;
VAR9->VAR38 = VAR8;
VAR9 = VAR8;
}
}
}
}





FUN5();
if (VAR19) {


while ((VAR14 = FUN6()) != NULL) {


for (VAR3 = VAR2; (VAR23 > 0) && VAR3;
VAR3 = VAR3->VAR38) {

if (VAR3->VAR37 == VAR26) {


if (strcmp(VAR14->VAR40,
VAR3->VAR36) == 0) {


VAR3->VAR37 = VAR29;
VAR23--;
VAR3->VAR41 = VAR14->VAR42;
if (FUN7(VAR3->VAR41))
for (VAR16 = VAR14->VAR43;
*VAR16; VAR16++)
FUN8(*VAR16);
}
}
}
}


VAR4 = NULL;
for (VAR3 = VAR2; VAR3; VAR3 = VAR3->VAR38) {
if (!VAR3->VAR37) {
FUN2(VAR44, VAR33, VAR34,
"", VAR3->VAR36);
if (!VAR4)
VAR2 = VAR3->VAR38;
else
VAR4->VAR38 = VAR3->VAR38;
} else if (FUN9(VAR3->VAR41)) {
FUN2(VAR44, VAR33, VAR34,
"", VAR3->VAR36);
if (!VAR4)
VAR2 = VAR3->VAR38;
else
VAR4->VAR38 = VAR3->VAR38;
} else
VAR4 = VAR3;
}
}



FUN10();



while ((VAR12 = FUN11()) != NULL) {


VAR22 = VAR26;




if (VAR20) {
for (VAR8 = VAR7; !VAR22 && VAR8;
VAR8 = VAR8->VAR38) {
if (strcmp(VAR12->VAR45,
VAR8->VAR39) == 0) {
VAR8->VAR37 = VAR29;
if (FUN12(VAR12->VAR46))
FUN13(VAR12);
else
FUN2(VAR44, VAR33,
VAR34,
"",
VAR8->VAR39);
VAR22 = VAR29;
}
}
}




if (FUN12(VAR12->VAR46)) {

if (!VAR22 && VAR19) {
for (VAR3 = VAR2; !VAR22 && VAR3;
VAR3 = VAR3->VAR38)
if (VAR12->VAR47 == VAR3->VAR41) {
FUN13(VAR12);
VAR22 = VAR29;
}
if (!VAR22 && FUN14(VAR12->VAR45)) {
FUN13(VAR12);
VAR22 = VAR29;
}
}




if (!VAR20 && !VAR19)
FUN13(VAR12);
}
}


if (VAR20)
for (VAR8 = VAR7; VAR8; VAR8 = VAR8->VAR38)
if (!VAR8->VAR37)
FUN2(VAR44, VAR33, VAR34,
"", VAR8->VAR39);



FUN15();


return (0);
}