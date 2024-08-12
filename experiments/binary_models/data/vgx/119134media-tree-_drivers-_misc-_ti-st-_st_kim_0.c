static long FUN1(struct VAR1 *VAR2)
{
long VAR3 = 0;
long VAR4 = 0;
unsigned char *VAR5 = NULL;
unsigned char *VAR6 = NULL;
unsigned char VAR7[40] = { 0 };	
int VAR8;
int VAR9;
unsigned long VAR10;

VAR3 = FUN2(VAR2, VAR7);
if (VAR3 != 0) {
FUN3("");
return VAR3;
}
VAR3 =
FUN4(&VAR2->VAR11, VAR7,
&VAR2->VAR12->VAR13);
if (FUN5((VAR3 != 0) || (VAR2->VAR11->VAR14 == NULL) ||
(VAR2->VAR11->VAR15 == 0))) {
FUN3("", VAR3,
VAR7);
return -VAR16;
}
VAR5 = (void *)VAR2->VAR11->VAR14;
VAR4 = VAR2->VAR11->VAR15;

VAR5 += sizeof(struct VAR17);
VAR4 -= sizeof(struct VAR17);

while (VAR4 > 0 && VAR5) {
FUN6("",
((struct VAR18 *)VAR5)->VAR15,
((struct VAR18 *)VAR5)->VAR19);

switch (((struct VAR18 *)VAR5)->VAR19) {
case VAR20:	
FUN6("");
VAR6 = &(((struct VAR18 *)VAR5)->VAR14[0]);
if (VAR21
(((struct VAR22 *)VAR6)->VAR23 ==
0xFF36)) {

FUN7(""
"");
FUN8(&VAR5, &VAR4);
break;
}

VAR9 = ((struct VAR18 *)VAR5)->VAR15;
VAR10 = VAR24 + FUN9(VAR25);
do {
VAR8 =
FUN10(VAR2->VAR26);
if (VAR8 < 0) {
FUN3(""
"");
FUN11(VAR2->VAR11);
return VAR8;
}
FUN12(1); 
} while ((VAR8 < VAR9) &&
FUN13(VAR24, VAR10));


if (FUN14(VAR24, VAR10)) {
FUN3(""
"");
FUN11(VAR2->VAR11);
return -VAR27;
}

FUN15(&VAR2->VAR28);


VAR3 = FUN16(VAR2->VAR26,
((struct VAR29 *)VAR6)->VAR14,
((struct VAR18 *)VAR5)->VAR15);
if (FUN5(VAR3 < 0)) {
FUN11(VAR2->VAR11);
return VAR3;
}

if (VAR3 != VAR9) {
FUN3(""
""
"");
FUN11(VAR2->VAR11);
return -VAR30;
}
break;
case VAR31:  
FUN6("");
VAR3 = FUN17(
&VAR2->VAR28,
FUN9(VAR32));
if (VAR3 <= 0) {
FUN3("");

FUN11(VAR2->VAR11);
return VAR3 ? -VAR33 : -VAR27;
}
FUN15(&VAR2->VAR28);
break;
case VAR34:	
FUN18("");
VAR6 = &(((struct VAR18 *)VAR5)->VAR14[0]);
FUN12(((struct VAR35 *)VAR6)->VAR36);
break;
}
VAR4 =
VAR4 - (sizeof(struct VAR18) +
((struct VAR18 *)VAR5)->VAR15);
VAR5 =
VAR5 + sizeof(struct VAR18) +
((struct VAR18 *)VAR5)->VAR15;
}

FUN11(VAR2->VAR11);
return 0;
}