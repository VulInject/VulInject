static bool FUN1(
struct VAR1 *VAR2,
double VAR3,
VAR4 *VAR5,
unsigned int VAR6,
double VAR7,
double VAR8,
double VAR9,
double VAR10,
double VAR11,
unsigned int VAR12,
enum output_format_class VAR13,
unsigned int VAR14,
unsigned int VAR15,
unsigned int VAR16,
unsigned int VAR17,
bool VAR18,
bool VAR19,
unsigned int VAR20,
double VAR21,
bool VAR22,
bool VAR23,
int VAR24,
unsigned int VAR25,
double VAR26,
double VAR27,
double VAR28,
unsigned int VAR29,
unsigned int VAR30,
unsigned int VAR31,
double VAR32,
unsigned int VAR33,
double VAR34,
unsigned int VAR35,
double VAR36,
unsigned int VAR37,
double VAR38,
unsigned int VAR39,
int VAR40,
int VAR41,
unsigned int VAR42,
unsigned int VAR43,
double VAR44,
double *VAR45,
double *VAR46,
double *VAR47,
double *VAR48,
double *VAR49,
double *VAR50,
double *VAR51,
double *VAR52,
double *VAR53,
double *VAR54,
bool *VAR55,
double *VAR56,
double *VAR57,
double *VAR58,
double *VAR59,
double *VAR60,
int *VAR61,
double *VAR62,
double *VAR63)
{
bool VAR64 = false;
unsigned int VAR65, VAR66;
double VAR67;
double VAR68;
double VAR69;
double VAR70;
double VAR71;
double VAR72;
double VAR73;
double VAR74;
double VAR75;
double VAR76;
double VAR77;
double VAR78 = 0;
double VAR79 = 0;
double VAR80 = 0;
unsigned int VAR81;
double VAR82;
double VAR83;
double VAR84;
double VAR85;
double VAR86;
double VAR87;
double VAR88;
double VAR89;
double VAR90;
double VAR91;
double VAR92;
double VAR93;
double VAR94;
double VAR95;
double VAR96;
double VAR97;
int VAR98 = 4;
double VAR99;
double VAR100 = 0;
double VAR101 = 0;
double  VAR102 = 0;

if (VAR18 == true && VAR19 == true) {
VAR81 = VAR20;
} else {
VAR81 = 0;
}
FUN2("", VAR103, VAR18, VAR19, VAR3);
FUN3(
VAR14,
VAR5->VAR104,
VAR5->VAR105,
VAR5->VAR106,
VAR5->VAR107,
VAR5->VAR108,
VAR5->VAR109,
VAR25,
VAR24,
VAR5->VAR110,
VAR5->VAR111,
VAR60,
&VAR92,
&VAR93,
&VAR94,
VAR61,
VAR62,
VAR63);

VAR68 = VAR5->VAR108 / VAR5->VAR107;
VAR82 = VAR26;
VAR83 = VAR27 + VAR82 * (VAR17 * (VAR81 + 1) - 1);

if (VAR23 == true && VAR18 == true) {
if (VAR23 == true) {
*VAR59 = VAR44 + VAR83 + VAR82;
} else {
*VAR59 = VAR44 + VAR27;
}

if (VAR22 == false) {
*VAR59 = 0.0;
}

if (VAR22 == true) {
if (VAR15 * VAR68 < *VAR60 + *VAR59 + VAR92 + VAR93 + VAR94) {
*VAR55 = true;
FUN2("", VAR103);
FUN2("", VAR103, VAR92);
FUN2("", VAR103, VAR93);
FUN2("", VAR103, VAR94);
FUN2("", VAR103, *VAR59);
} else {
*VAR55 = false;
}
} else {
*VAR55 = false;
}

*VAR58 = (VAR22 == true && VAR23 == true && VAR18 == true ? VAR44 + VAR83 : 0);

if (VAR5->VAR112)
VAR65 = VAR7 + VAR8;
else
VAR65 = VAR7 + VAR9;

VAR65 = VAR65 + VAR5->VAR113 * VAR10;

VAR66 = VAR11;

if (VAR5->VAR104 == 0.0 || VAR5->VAR105 == 0.0)
return true;

*VAR45 = VAR65 * VAR5->VAR107 / VAR5->VAR104 + VAR66 * VAR5->VAR107 / VAR5->VAR105 + VAR6;

FUN2("", VAR103, VAR65);
FUN2("", VAR103, VAR5->VAR107);
FUN2("", VAR103, VAR5->VAR104);
FUN2("", VAR103, VAR66);
FUN2("", VAR103, VAR5->VAR105);
FUN2("", VAR103, VAR6);
FUN2("", VAR103, *VAR45);
FUN2("", VAR103, VAR5->VAR114);

*VAR45 = *VAR45 + ((VAR5->VAR114) ? 18 : 0) + (VAR5->VAR115 - 1) * VAR12;

if (VAR13 == VAR116 || (VAR5->VAR110 && VAR5->VAR111))
*VAR46 = 1;
else
*VAR46 = 0;

VAR67 = *VAR46 * VAR5->VAR108 + *VAR45;
*VAR46 = FUN4(VAR67 / VAR5->VAR108, 1);
*VAR45 = VAR67 - ((double) (*VAR46 * VAR5->VAR108));

FUN2("", VAR103, *VAR45);

VAR64 = false;

VAR84 = VAR82 * (VAR81 + 1);
VAR85 = FUN5(4.0 * VAR83 / VAR68, 1) / 4 * VAR68;
VAR86 = FUN5(4.0 * VAR84 / VAR68, 1) / 4 * VAR68;

if (!VAR5->VAR117) {
VAR84 = 0.0;
VAR86 = 0.0;
}

if (!VAR18) {
VAR83 = 0.0;
VAR85 = 0.0;
}

if (VAR18) {
if (VAR17 >= 3) {
*VAR56 = VAR27 + VAR82 * ((VAR17 - 2) - 1);
} else {
*VAR56 = 0;
}
} else if (!VAR5->VAR117) {
*VAR56 = VAR68;
} else {
*VAR56 = VAR68 / 4;
}

if (VAR5->VAR118 == VAR119 || VAR5->VAR118 == VAR120 || VAR5->VAR118 == VAR121)
VAR96 = VAR5->VAR122 + VAR5->VAR123 / 4;
else
VAR96 = VAR5->VAR122 + VAR5->VAR123;

VAR72 = FUN6(1, VAR96 * VAR5->VAR107 / (double) VAR5->VAR115);
VAR102 = FUN7(VAR32, VAR36) * VAR68;
VAR95 = VAR32 * VAR40 * VAR5->VAR122 + VAR36 * VAR41 * VAR5->VAR123;
VAR71 = FUN7(VAR96 * VAR5->VAR107 / VAR5->VAR115, VAR95 / (FUN7(VAR32, VAR36) * VAR68));
VAR71 = FUN7(VAR72, VAR95 / VAR102);

VAR99 = FUN7(1, FUN7(VAR32, VAR36) / VAR98);
VAR87 = FUN5(4 * FUN7(VAR95 / VAR71 / VAR68, VAR99), 1) / 4;
VAR70 = VAR87 * VAR68;

VAR71 = (VAR32 * VAR40 * VAR5->VAR122 + VAR36 * VAR41 * VAR5->VAR123) / VAR70;

FUN2("", VAR5->VAR108);
FUN2("", VAR71);
FUN2("", VAR32);
FUN2("", VAR40);
FUN2("", VAR5->VAR122);
FUN2("", VAR70);

if (VAR18 == true)
VAR73 = FUN8(*VAR56 + VAR29 * VAR3 / VAR71, VAR83, VAR68 / 4.0);
else
VAR73 = VAR68 / 4.0;

if ((VAR18 == true || VAR5->VAR117 == true)) {
VAR74 = FUN9((VAR30 + VAR31 * VAR3) / VAR71, VAR84, 
VAR68 - VAR73,
VAR68 / 4);
} else {
VAR74 = (VAR68 - VAR73) / 2.0;
}

FUN2("", VAR103, VAR83);
FUN2("", VAR103, VAR84);
FUN2("", VAR103, VAR30);
FUN2("", VAR103, VAR30);
FUN2("", VAR103, VAR31);
FUN2("", VAR103, VAR3);
FUN2("", VAR103, VAR71);
FUN2("", VAR103, VAR74);
FUN2("", VAR103, VAR73);

VAR75 = FUN5(4.0 * VAR73 / VAR68, 1) / 4.0;
VAR76 = FUN5(4.0 * VAR74 / VAR68, 1) / 4.0;
VAR77 = VAR75 + 2 * VAR76 + VAR87;
VAR69 =  VAR15 - (*VAR60 + FUN7(VAR44 + VAR28, *VAR59)) / VAR68 - (*VAR46 + *VAR45 / VAR5->VAR108);
VAR69 = FUN4(4.0 * (VAR69 + 0.125), 1) / 4.0;
VAR88 = VAR69 * VAR68;

VAR97 = FUN7(VAR29 * VAR3, VAR30 + VAR31 * VAR3);

if (VAR95 < VAR97)
VAR95 = 2 * VAR97;

FUN2("", VAR77);
FUN2("", VAR75);
FUN2("", VAR76);
FUN2("", VAR87);
FUN2("", VAR68);
FUN2("", VAR69);

FUN2("", VAR68);
FUN2("", VAR15);
FUN2("", VAR15 * VAR68);
FUN2("", *VAR60);
FUN2("", VAR28);
FUN2("", VAR44);
FUN2("", VAR92);
FUN2("", VAR93);
FUN2("", VAR94);
FUN2("", *VAR58);
FUN2("", *VAR59);
FUN2("", *VAR45);
FUN2("", *VAR46);

*VAR48 = 0;
*VAR49 = 0;
*VAR50 = 0;
*VAR51 = 0;
*VAR52 = 0;
*VAR53 = 0;
if (VAR69 > 1) {
double VAR124;
double VAR125;
double VAR126;
double VAR127;

if (VAR88 - *VAR56 > 0) {
VAR124 = (VAR29 * VAR3 + 2 * VAR30 + 2 * VAR31 * VAR3
+ VAR95) / (VAR88 - *VAR56);
VAR100 = VAR95 / VAR124;
} else {
VAR124 = 0;
}

if (VAR15 == VAR16 && VAR100 / VAR68 < VAR99 && VAR88 - VAR99 * VAR68 - 0.75 * VAR68 - *VAR56 > 0) {
VAR124 = (VAR29 * VAR3 + 2 * VAR30 + 2 * VAR31 * VAR3)
/ (VAR88 - VAR99 * VAR68 - 0.75 * VAR68 - *VAR56);
}

if (VAR88 - *VAR56 - 2 * VAR86 > 0)
VAR125 = (VAR29 * VAR3 + VAR95) / (VAR88 - *VAR56 - 2 * VAR86);
else
VAR125 = 0;

if (VAR88 - VAR85 > 0) {
VAR126 = (2 * VAR30 + 2 * VAR31 * VAR3
+ VAR95) / (VAR88 - VAR85);
VAR101 = VAR95 / VAR126;
} else {
VAR126 = 0;
}

FUN2("", VAR103, VAR88);
FUN2("", VAR103, VAR85);
FUN2("", VAR103, VAR126);
if (VAR15 == VAR16 && VAR101 / VAR68 < VAR99 && VAR88 - VAR99 * VAR68 - 0.75 * VAR68 - VAR85 > 0) {
VAR126 = (2 * VAR30 + 2 * VAR31 * VAR3)
/ (VAR88 - VAR99 * VAR68 - 0.75 * VAR68 - VAR85);
}

if (VAR88 - VAR85 - 2 * VAR86 > 0)
VAR127 = VAR95 / (VAR88 - VAR85 - 2 * VAR86);
else
VAR127 = 0;

{
bool VAR128;
bool VAR129;
bool VAR130;

if (VAR124 > 0) {
if (*VAR56 + VAR29 * VAR3 / VAR124 >= VAR85
&& (VAR30 + VAR31 * VAR3) / VAR124 >= VAR86) {
VAR128 = true;
} else {
VAR128 = false;
}
} else {
VAR128 = false;
}

if (VAR125 > 0) {
if (*VAR56 + VAR29 * VAR3 / VAR125 >= VAR85
&& (VAR30 + VAR31 * VAR3) / VAR125 < VAR86) {
VAR129 = true;
} else {
VAR129 = false;
}
} else {
VAR129 = false;
}

if (VAR126 > 0) {
if (*VAR56 + VAR29 * VAR3 / VAR126 < VAR85
&& (VAR30 + VAR31 * VAR3) / VAR126 >= VAR86) {
VAR130 = true;
} else {
VAR130 = false;
}
} else {
VAR130 = false;
}

if (VAR128) {
VAR89 = VAR124;
} else if (VAR129) {
VAR89 = VAR125;
} else if (VAR130) {
VAR89 = VAR126;
} else {
VAR89 = VAR127;
}

FUN2("", VAR103, VAR128);
FUN2("", VAR103, VAR129);
FUN2("", VAR103, VAR130);
FUN2("", VAR103, VAR89);

if (VAR89 > 0) {
if (VAR18 == true) {
VAR90 = FUN8(*VAR56 + VAR29 * VAR3 / VAR89, VAR83, VAR68 / 4);
} else {
VAR90 = VAR68 / 4;
}

if ((VAR18 == true || VAR5->VAR117 == true)) {
VAR91 = FUN9(
(VAR30 + VAR31 * VAR3) / VAR89,
VAR84,
(VAR68 - VAR90) / 2,
VAR68 / 4);
} else {
VAR91 = (VAR68 - VAR90) / 2;
}
} else {
VAR90 = 0;
VAR91 = 0;
FUN2("", VAR131, VAR132);
}
}

if (VAR77 < VAR69) {
*VAR47 = VAR77;
VAR78 = VAR73;
VAR79 = VAR74;
*VAR48 = VAR71;
} else {
*VAR47 = VAR69;
VAR78 = VAR90;
VAR79 = VAR91;
*VAR48 = VAR89;
}

*VAR49 = FUN5(4.0 * VAR78 / VAR68, 1.0) / 4.0;

*VAR50 = FUN5(4.0 * VAR79 / VAR68, 1.0) / 4.0;

VAR80 = *VAR47


- ((VAR18 || VAR5->VAR117) ? (*VAR49 + 2 * *VAR50) : 0.0); 
VAR80 = *VAR47 - *VAR49 - 2 * *VAR50;

FUN2("", VAR103, *VAR47);
FUN2("", VAR103, *VAR49);
FUN2("", VAR103, VAR79);
FUN2("", VAR103, VAR68);
FUN2("", VAR103, *VAR50);
FUN2("", VAR103, VAR32);
FUN2("", VAR103, VAR80);

if (VAR80 > 0 && VAR89 > 0) {

*VAR51 = (double) VAR32 / VAR80;
*VAR51 = FUN7(*VAR51, 1.0);
FUN2("", VAR103, *VAR51);
FUN2("", VAR103, VAR42);
FUN2("", VAR103, VAR34);
if ((VAR42 > 4) && (VAR34 > 3)) {
if (VAR80 > (VAR34 - 3.0) / 2.0) {
*VAR51 = FUN7(
(double) VAR32 / VAR80,
(double) VAR35 * VAR42 / (VAR80 - (VAR34 - 3.0) / 2.0));
*VAR51 = FUN7(*VAR51, 1.0);
} else {
VAR64 = true;
FUN2("", VAR131, VAR132);
*VAR51 = 0;
}
FUN2("", VAR103, *VAR51);
FUN2("", VAR103, VAR32);
FUN2("", VAR103, VAR35);
}

*VAR52 = (double) VAR36 / VAR80;
*VAR52 = FUN7(*VAR52, 1.0);

FUN2("", VAR103, *VAR52);
FUN2("", VAR103, VAR43);
FUN2("", VAR103, VAR38);
if ((VAR43 > 4) || VAR38 > 3) {
if (VAR80 > (VAR38 - 3.0) / 2.0) {
*VAR52 = FUN7(
*VAR52,
(double) VAR39 * VAR43 / (VAR80 - (VAR38 - 3.0) / 2.0));
*VAR52 = FUN7(*VAR52, 1.0);
} else {
VAR64 = true;
FUN2("", VAR131, VAR132);
*VAR52 = 0;
}
FUN2("", VAR103, *VAR52);
FUN2("", VAR103, VAR36);
FUN2("", VAR103, VAR39);
}

FUN2("", VAR103, VAR5->VAR122);
FUN2("", VAR103, VAR40);
FUN2("", VAR103, VAR68);

*VAR53 = (double) VAR32 / VAR80 * VAR5->VAR122 * VAR40 / VAR68;

FUN2("", VAR103, *VAR53);

*VAR54 = (double) VAR36 / VAR80 * VAR5->VAR123 * VAR41
/ VAR68;
} else {
VAR64 = true;
FUN2("", VAR131, VAR132);
FUN2("", VAR80);
*VAR51 = 0;
*VAR52 = 0;
*VAR53 = 0;
*VAR54 = 0;
}

FUN2(
"",
(double) VAR80 * VAR68 + 2.0 * VAR79 + VAR78);
FUN2("", VAR78);
FUN2("", VAR79);
FUN2(
"",
(double) VAR80 * VAR68);
FUN2("",
(*VAR46 + ((double) (*VAR45) /
(double) VAR5->VAR108)) * VAR68);
FUN2("");
FUN2("",
VAR15 * VAR68 - VAR78 - 2 * VAR79
- (*VAR46 + ((double) (*VAR45) / (double) VAR5->VAR108)) * VAR68 - VAR44 - VAR28 - *VAR60);
FUN2("", VAR31);

} else {
VAR64 = true;
FUN2("", VAR131, VAR132);
}

{
double VAR133;
double VAR134;

if (VAR29 == 0) {
VAR133 = 0;
} else if (*VAR49 > 0) {
FUN2("", VAR103, VAR29);
FUN2("", VAR103, VAR3);
FUN2("", VAR103, *VAR49);
FUN2("", VAR103, VAR68);
VAR133 = VAR29 * VAR3 / (*VAR49 * VAR68);
FUN2("", VAR103, VAR133);
} else {
VAR133 = 0;
VAR64 = true;
FUN2("", VAR131, VAR132);
}

if (VAR30 + VAR31 == 0) {
VAR134 = 0;
} else if (*VAR50 > 0) {
VAR134 = (VAR30 + VAR31 * VAR3) / (*VAR50 * VAR68);

FUN2("", VAR103, VAR30);
FUN2("", VAR103, VAR31);
FUN2("", VAR103, *VAR50);
FUN2("", VAR103, VAR134);
} else {
VAR134 = 0;
VAR64 = true;
FUN2("", VAR131, VAR132);
}

*VAR57 = FUN7(VAR133, VAR134);
}

if (VAR64) {
*VAR48 = 0;
VAR78 = 0;
VAR79 = 0;
*VAR49 = 0;
*VAR50 = 0;
*VAR47 = 0;
VAR80 = 0;
*VAR51 = 0;
*VAR52 = 0;
*VAR53 = 0;
*VAR54 = 0;
}

return VAR64;
}