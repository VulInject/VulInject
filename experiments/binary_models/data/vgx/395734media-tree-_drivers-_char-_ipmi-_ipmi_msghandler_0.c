static int FUN1(ipmi_user_t          VAR1,
ipmi_smi_t           VAR2,
struct VAR3     *VAR4,
long                 VAR5,
struct VAR6 *VAR7,
void                 *VAR8,
void                 *VAR9,
struct VAR10 *VAR11,
int                  VAR12,
unsigned char        VAR13,
unsigned char        VAR14,
int                  VAR15,
unsigned int         VAR16)
{
int                      VAR17 = 0;
struct VAR18      *VAR19;
struct VAR10     *VAR20;
unsigned long            VAR21;


if (VAR11)
VAR20 = VAR11;
else {
VAR20 = FUN2();
if (VAR20 == NULL)
return -VAR22;
}
VAR20->VAR8 = VAR8;

if (VAR9)
VAR19 = (struct VAR18 *) VAR9;
else {
VAR19 = FUN3();
if (VAR19 == NULL) {
FUN4(VAR20);
return -VAR22;
}
}

FUN5();
if (VAR2->VAR23) {
VAR17 = -VAR24;
goto VAR25;
}

VAR20->VAR1 = VAR1;
if (VAR1)
FUN6(&VAR1->VAR26);
VAR20->VAR5 = VAR5;

VAR20->VAR7 = *VAR7;

if (VAR4->VAR27 == VAR28) {
struct VAR29 *VAR30;

if (VAR7->VAR31 & 1) {

VAR17 = -VAR32;
goto VAR25;
}

VAR30 = (struct VAR29 *) VAR4;
if (VAR30->VAR33 > 3) {
FUN7(VAR2, VAR34);
VAR17 = -VAR32;
goto VAR25;
}

memcpy(&VAR20->VAR4, VAR30, sizeof(*VAR30));

if ((VAR7->VAR31 == VAR35)
&& ((VAR7->VAR36 == VAR37)
|| (VAR7->VAR36 == VAR38)
|| (VAR7->VAR36 == VAR39))) {

FUN7(VAR2, VAR34);
VAR17 = -VAR32;
goto VAR25;
}

if (((VAR7->VAR31 == VAR35)
&& ((VAR7->VAR36 == VAR40)
|| (VAR7->VAR36 == VAR41)))
|| (VAR7->VAR31 == VAR42)) {
FUN8(&VAR2->VAR43, VAR21);
VAR2->VAR44
= VAR45;
if (!VAR2->VAR46
&& !VAR2->VAR47) {
VAR2->VAR47 = true;
FUN9(VAR2);
}
FUN10(&VAR2->VAR43,
VAR21);
}

if ((VAR7->VAR48 + 2) > VAR49) {
FUN7(VAR2, VAR34);
VAR17 = -VAR50;
goto VAR25;
}

VAR19->VAR51[0] = (VAR7->VAR31 << 2) | (VAR30->VAR33 & 0x3);
VAR19->VAR51[1] = VAR7->VAR36;
VAR19->VAR5 = VAR5;
VAR19->VAR52 = VAR20;
if (VAR7->VAR48 > 0)
memcpy(&(VAR19->VAR51[2]), VAR7->VAR51, VAR7->VAR48);
VAR19->VAR53 = VAR7->VAR48 + 2;
FUN7(VAR2, VAR54);
} else if (FUN11(VAR4) || FUN12(VAR4)) {
struct VAR55 *VAR56;
unsigned char         VAR57;
long                  VAR58;
int                   VAR59 = 0;

if (VAR4->VAR60 >= VAR61) {
FUN7(VAR2, VAR34);
VAR17 = -VAR32;
goto VAR25;
}

if (VAR2->VAR62[VAR4->VAR60].VAR63
!= VAR64) {
FUN7(VAR2, VAR34);
VAR17 = -VAR32;
goto VAR25;
}

if (VAR15 < 0) {
if (VAR4->VAR27 == VAR65)
VAR15 = 0; 
else
VAR15 = 4;
}
if (VAR4->VAR27 == VAR65) {

VAR4->VAR27 = VAR66;
VAR59 = 1;
}



if (VAR16 == 0)
VAR16 = 1000;


if ((VAR7->VAR48 + 10 + VAR59) > VAR49) {
FUN7(VAR2, VAR34);
VAR17 = -VAR50;
goto VAR25;
}

VAR56 = (struct VAR55 *) VAR4;
if (VAR56->VAR33 > 3) {
FUN7(VAR2, VAR34);
VAR17 = -VAR32;
goto VAR25;
}

memcpy(&VAR20->VAR4, VAR56, sizeof(*VAR56));

if (VAR20->VAR7.VAR31 & 0x1) {

FUN7(VAR2, VAR67);
FUN13(VAR19, VAR7, VAR56, VAR5,
VAR5, VAR59,
VAR13, VAR14);


VAR19->VAR52 = VAR20;
} else {


FUN8(&(VAR2->VAR68), VAR21);


VAR17 = FUN14(VAR2,
VAR20,
VAR16,
VAR15,
VAR59,
&VAR57,
&VAR58);
if (VAR17) {

FUN10(&(VAR2->VAR68),
VAR21);
goto VAR25;
}

FUN7(VAR2, VAR69);


FUN13(VAR19, VAR7, VAR56,
FUN15(VAR57, VAR58),
VAR57, VAR59,
VAR13, VAR14);


memcpy(VAR20->VAR70, VAR19->VAR51,
VAR19->VAR53);
VAR20->VAR7.VAR51 = VAR20->VAR70;
VAR20->VAR7.VAR48 = VAR19->VAR53;


FUN10(&(VAR2->VAR68), VAR21);
}
} else if (FUN16(VAR4)) {
struct VAR71  *VAR72;
unsigned char         VAR57;
long                  VAR58;

if (VAR4->VAR60 >= VAR61) {
FUN7(VAR2, VAR34);
VAR17 = -VAR32;
goto VAR25;
}

if ((VAR2->VAR62[VAR4->VAR60].VAR63
!= VAR73)
&& (VAR2->VAR62[VAR4->VAR60].VAR63
!= VAR74)) {
FUN7(VAR2, VAR34);
VAR17 = -VAR32;
goto VAR25;
}

VAR15 = 4;


if (VAR16 == 0)
VAR16 = 1000;


if ((VAR7->VAR48 + 12) > VAR49) {
FUN7(VAR2, VAR34);
VAR17 = -VAR50;
goto VAR25;
}

VAR72 = (struct VAR71 *) VAR4;
if (VAR72->VAR33 > 3) {
FUN7(VAR2, VAR34);
VAR17 = -VAR32;
goto VAR25;
}

memcpy(&VAR20->VAR4, VAR72, sizeof(*VAR72));

if (VAR20->VAR7.VAR31 & 0x1) {

FUN7(VAR2, VAR75);
FUN17(VAR19, VAR7, VAR72, VAR5,
VAR5, VAR14);


VAR19->VAR52 = VAR20;
} else {


FUN8(&(VAR2->VAR68), VAR21);


VAR17 = FUN14(VAR2,
VAR20,
VAR16,
VAR15,
0,
&VAR57,
&VAR58);
if (VAR17) {

FUN10(&(VAR2->VAR68),
VAR21);
goto VAR25;
}

FUN7(VAR2, VAR76);


FUN17(VAR19, VAR7, VAR72,
FUN15(VAR57, VAR58),
VAR57, VAR14);


memcpy(VAR20->VAR70, VAR19->VAR51,
VAR19->VAR53);
VAR20->VAR7.VAR51 = VAR20->VAR70;
VAR20->VAR7.VAR48 = VAR19->VAR53;


FUN10(&(VAR2->VAR68), VAR21);
}
} else {

FUN7(VAR2, VAR34);
VAR17 = -VAR32;
goto VAR25;
}

{
int VAR77;
for (VAR77 = 0; VAR77 < VAR19->VAR53; VAR77++)
FUN18("", VAR19->VAR51[VAR77]);
FUN18("");
}

FUN19(VAR2, VAR2->VAR78, VAR19, VAR12);
FUN20();

return 0;

VAR25:
FUN20();
FUN21(VAR19);
FUN4(VAR20);
return VAR17;
}