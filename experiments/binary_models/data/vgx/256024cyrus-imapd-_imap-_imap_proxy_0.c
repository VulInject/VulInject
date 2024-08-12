int FUN1(char *VAR1, int VAR2, unsigned VAR3,
void (*VAR4)(uint32_t VAR5, unsigned VAR6,
void *VAR7, void *VAR8),
void *VAR8)
{
VAR9 *VAR10 = !VAR2 ? FUN2(VAR1, NULL, 0) : NULL;
struct buf VAR11 = VAR12;
char VAR13[128];
char VAR14 = '';
int VAR15;

if (!VAR3) return VAR16;

FUN3(VAR13, sizeof(VAR13));
FUN4(VAR17->VAR18, "",
VAR13, VAR2 ? "" : "", VAR1);
if (VAR3 & VAR19) {
FUN4(VAR17->VAR18, "", VAR14, "");
VAR14 = '';
}
if (VAR3 & VAR20) {
FUN4(VAR17->VAR18, "", VAR14, "");
VAR14 = '';
}
if (VAR3 & VAR21) {
FUN4(VAR17->VAR18, "", VAR14, "");
VAR14 = '';
}
if (VAR3 & VAR22) {
FUN4(VAR17->VAR18, "", VAR14, "");
VAR14 = '';
}
FUN5(VAR17->VAR18, "");

for (;;) {
uint32_t VAR5 = 0, VAR23 = 0;
char *VAR24 = NULL, *VAR25 = NULL;
int32_t VAR26 = 0;


VAR15 = FUN6(VAR17->VAR27);
if (VAR15 != '') break;
VAR15 = FUN6(VAR17->VAR27);
if (VAR15 != '') {  VAR15 = VAR28; break; }


if (!FUN7(VAR15 = FUN6(VAR17->VAR27))) {
FUN4(VAR29, "", VAR15);
FUN8(VAR17, 0);
continue;
}


FUN9(VAR15, VAR17->VAR27);
VAR15 = FUN10(VAR17->VAR27, &VAR5);
if (VAR5 == 0 || VAR15 != '') {

VAR15 = VAR28; break;
}


VAR15 = FUN6(VAR17->VAR27);
if (!(VAR15 == '' || VAR15 == '') ||
(VAR10 && !FUN11(VAR10, VAR5))) {
FUN4(VAR29, "", VAR5, VAR15);
FUN8(VAR17, 0);
continue;
}

VAR15 = FUN12(VAR17->VAR27, "");
if (VAR15 == VAR28) {

break;
}

for (;;) {

switch (VAR15) {
case '': case '': 
VAR15 = FUN12(VAR17->VAR27, "");
if (VAR15 == '') VAR15 = FUN6(VAR17->VAR27);
if (VAR15 != '') {

FUN13(VAR17->VAR27, VAR15);
VAR15 = VAR28;
}
else VAR15 = FUN14(VAR17->VAR27, &VAR26);
if (VAR15 == '') VAR15 = FUN6(VAR17->VAR27);
if (VAR15 == '') VAR15 = FUN6(VAR17->VAR27);
if (VAR15 != '') VAR15 = VAR28;

if (VAR15 != VAR28) {

while (VAR26) {
int VAR30 = FUN15(VAR17->VAR27, &VAR11, VAR26);
if (!VAR30) break;

VAR26 -= VAR30;
}
FUN16(VAR5, VAR19, &VAR11, VAR8);
VAR15 = FUN6(VAR17->VAR27);
}
break;

case '': case '': 
VAR15 = FUN12(VAR17->VAR27, "");
if (VAR15 != '') { VAR15 = VAR28; }
else VAR15 = FUN6(VAR17->VAR27);
if (VAR15 != '') { VAR15 = VAR28; }
else {
VAR24 = FUN17(VAR17->VAR27, '');
FUN16(VAR5, VAR20, FUN18(VAR24), VAR8);
VAR15 = FUN6(VAR17->VAR27);
}
break;

case '': case '': 
VAR15 = FUN12(VAR17->VAR27, "");
if (VAR15 != '') { VAR15 = VAR28; }
else VAR15 = FUN6(VAR17->VAR27);
if (VAR15 != '') { VAR15 = VAR28; }
else {
VAR25 = FUN17(VAR17->VAR27, '');
FUN16(VAR5, VAR21, VAR25, VAR8);
VAR15 = FUN6(VAR17->VAR27);
}
break;

case '': case '': 
VAR15 = FUN12(VAR17->VAR27, "");
if (VAR15 != '') { VAR15 = VAR28; }
else {
VAR15 = FUN10(VAR17->VAR27, &VAR23);
FUN16(VAR5, VAR22, &VAR23, VAR8);
}
break;

default: 
VAR15 = VAR28;
break;
}

if (VAR15 == '') { VAR15 = FUN6(VAR17->VAR27); }
else if (VAR15 == '') break;
else { VAR15 = VAR28; break; }
}

if (VAR15 == '') VAR15 = FUN6(VAR17->VAR27);
if (VAR15 == '') VAR15 = FUN6(VAR17->VAR27);
if (VAR15 != '') {
VAR15 = VAR28;
break;
}


FUN16(VAR5, 0, NULL, VAR8);
FUN19(&VAR11);
}

FUN20(&VAR10);
FUN21(&VAR11);

if (VAR15 == VAR28) {
return VAR16;
}

FUN9(VAR15, VAR17->VAR27);


FUN22(VAR17, VAR13, 0);

return VAR31;
}