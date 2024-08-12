int main(int argc, char **argv)
{
opj_decompress_parameters VAR1;           

unsigned int VAR2, VAR3;
img_fol_t VAR4;
VAR5 *VAR6 = NULL;
int VAR7 = 0;
OPJ_FLOAT64 VAR8, VAR9 = 0;
OPJ_UINT32 VAR10 = 0;
OPJ_UINT32 VAR11;


FUN1(&VAR1);


memset(&VAR4, 0, sizeof(VAR12));


if (FUN2(argc, argv, &VAR1, &VAR4) == 1) {
VAR7 = 1;
goto VAR13;
}

VAR11 = VAR1.VAR14.VAR11;
if (getenv("") != NULL) {



VAR1.VAR14.VAR11 = 0;
}



if (VAR4.VAR15 == 1) {
unsigned int VAR16;
VAR2 = FUN3(VAR4.VAR17);
if (VAR2 == 0) {
fprintf(VAR18, "");
VAR7 = 1;
goto VAR13;
}
VAR6 = (VAR5*)calloc(1, sizeof(VAR5));
if (!VAR6) {
FUN4(&VAR1);
return VAR19;
}

VAR6->VAR20 = calloc((VAR21) VAR2, sizeof(char) * VAR22);
if (!VAR6->VAR20) {
VAR7 = 1;
goto VAR13;
}

VAR6->VAR23 = (char**) calloc((VAR21) VAR2, sizeof(char*));

if (!VAR6->VAR23) {
VAR7 = 1;
goto VAR13;
}
for (VAR16 = 0; VAR16 < VAR2; VAR16++) {
VAR6->VAR23[VAR16] = VAR6->VAR20 + (VAR21)VAR16 *
VAR22;
}

if (FUN5(VAR6, VAR4.VAR17) == 1) {
VAR7 = 1;
goto VAR13;
}

} else {
VAR2 = 1;
}


for (VAR3 = 0; VAR3 < VAR2 ; VAR3++)  {
VAR24* VAR25 = NULL;
VAR26 *VAR27 = NULL;              
VAR28* VAR29 = NULL;                
VAR30* VAR31 = NULL;

if (!VAR1.VAR32) {
fprintf(VAR18, "");
}

if (VAR4.VAR15 == 1) {
if (FUN6(VAR3, VAR6, &VAR4, &VAR1)) {
fprintf(VAR18, "");
FUN4(&VAR1);
continue;
}
}




VAR27 = FUN7(VAR1.VAR33, 1);
if (!VAR27) {
fprintf(VAR18, "",
VAR1.VAR33);
VAR7 = 1;
goto VAR13;
}




switch (VAR1.VAR34) {
case VAR35: { 

VAR29 = FUN8(VAR36);
break;
}
case VAR37: { 

VAR29 = FUN8(VAR38);
break;
}
case VAR39: { 

VAR29 = FUN8(VAR40);
break;
}
default:
fprintf(VAR18, "");
FUN4(&VAR1);
FUN9(VAR27);
continue;
}

if (VAR1.VAR32) {

FUN10(VAR29, VAR41, 00);
FUN11(VAR29, VAR41, 00);
FUN12(VAR29, VAR41, 00);
} else {

FUN10(VAR29, VAR42, 00);
FUN11(VAR29, VAR43, 00);
FUN12(VAR29, VAR44, 00);
}


VAR8 = FUN13();


if (!FUN14(VAR29, &(VAR1.VAR14))) {
fprintf(VAR18, "");
FUN9(VAR27);
FUN15(VAR29);
VAR7 = 1;
goto VAR13;
}


if (VAR1.VAR45 &&
!FUN16(VAR29, VAR46)) {
fprintf(VAR18, "");
FUN9(VAR27);
FUN15(VAR29);
VAR7 = 1;
goto VAR13;
}

if (VAR1.VAR47 >= 1 &&
!FUN17(VAR29, VAR1.VAR47)) {
fprintf(VAR18, "");
FUN9(VAR27);
FUN15(VAR29);
VAR7 = 1;
goto VAR13;
}


if (! FUN18(VAR27, VAR29, &VAR25)) {
fprintf(VAR18, "");
FUN9(VAR27);
FUN15(VAR29);
FUN19(VAR25);
VAR7 = 1;
goto VAR13;
}

if (VAR1.VAR48) {
if (! FUN20(VAR29,
VAR1.VAR48,
VAR1.VAR49,
VAR46)) {
fprintf(VAR18,
"");
FUN15(VAR29);
FUN9(VAR27);
FUN19(VAR25);
VAR7 = 1;
goto VAR13;
}
}

if (getenv("") != NULL) {



if (! FUN21(VAR29, VAR11)) {
fprintf(VAR18,
"");
FUN15(VAR29);
FUN9(VAR27);
FUN19(VAR25);
VAR7 = 1;
goto VAR13;
}
}

if (!VAR1.VAR50) {
if (getenv("") != NULL &&
VAR1.VAR51 == 0 &&
VAR1.VAR52 == 0 &&
VAR1.VAR53 == 0 &&
VAR1.VAR54 == 0) {



}

else if (!FUN22(VAR29, VAR25, (VAR55)VAR1.VAR51,
(VAR55)VAR1.VAR52, (VAR55)VAR1.VAR53,
(VAR55)VAR1.VAR54)) {
fprintf(VAR18, "");
FUN9(VAR27);
FUN15(VAR29);
FUN19(VAR25);
VAR7 = 1;
goto VAR13;
}


if (!(FUN23(VAR29, VAR27, VAR25) &&
FUN24(VAR29,   VAR27))) {
fprintf(VAR18, "");
FUN15(VAR29);
FUN9(VAR27);
FUN19(VAR25);
VAR7 = 1;
goto VAR13;
}
} else {
if (!(VAR1.VAR51 == 0 &&
VAR1.VAR52 == 0 &&
VAR1.VAR53 == 0 &&
VAR1.VAR54 == 0)) {
if (!(VAR1.VAR32)) {
fprintf(VAR18, "");
}
}

if (!FUN25(VAR29, VAR27, VAR25, VAR1.VAR56)) {
fprintf(VAR18, "");
FUN15(VAR29);
FUN9(VAR27);
FUN19(VAR25);
VAR7 = 1;
goto VAR13;
}
if (!(VAR1.VAR32)) {
fprintf(VAR57, "", VAR1.VAR56);
}
}

VAR9 += FUN13() - VAR8;
VAR10++;


FUN9(VAR27);

if (VAR25->VAR58 != VAR59
&& VAR25->VAR48 == 3 && VAR25->VAR60[0].VAR61 == VAR25->VAR60[0].VAR62
&& VAR25->VAR60[1].VAR61 != 1) {
VAR25->VAR58 = VAR59;
} else if (VAR25->VAR48 <= 2) {
VAR25->VAR58 = VAR63;
}

if (VAR25->VAR58 == VAR59) {
FUN26(VAR25);
} else if ((VAR25->VAR58 == VAR64) &&
(VAR1.VAR65 != VAR66)) {
FUN27(VAR25);
} else if (VAR25->VAR58 == VAR67) {
FUN28(VAR25);
}

if (VAR25->VAR68) {
if (VAR25->VAR69) {
FUN29(VAR25);
} else {
FUN30(VAR25);
}
free(VAR25->VAR68);
VAR25->VAR68 = NULL;
VAR25->VAR69 = 0;
}



if (VAR1.VAR70 != NULL) {
OPJ_UINT32 VAR71;
for (VAR71 = 0; VAR71 < VAR25->VAR48; ++VAR71) {
OPJ_UINT32 VAR72 = VAR71;
OPJ_UINT32 VAR73;

if (VAR72 >= VAR1.VAR74) {
VAR72 = VAR1.VAR74 - 1U;
}

VAR73 = VAR1.VAR70[VAR72].VAR73;
if (VAR73 == 0) {
VAR73 = VAR25->VAR60[VAR71].VAR73;
}

switch (VAR1.VAR70[VAR72].VAR75) {
case VAR76:
FUN31(&(VAR25->VAR60[VAR71]), VAR73);
break;
case VAR77:
FUN32(&(VAR25->VAR60[VAR71]), VAR73);
break;
default:
break;
}

}
}



if (VAR1.VAR78) {
VAR25 = FUN33(VAR25);
if (VAR25 == NULL) {
fprintf(VAR18,
"");
FUN15(VAR29);
VAR7 = 1;
goto VAR13;
}
}



if (VAR1.VAR79) {
switch (VAR25->VAR58) {
case VAR80:
break;
case VAR63:
VAR25 = FUN34(VAR25);
break;
default:
fprintf(VAR18,
"");
FUN19(VAR25);
VAR25 = NULL;
break;
}
if (VAR25 == NULL) {
fprintf(VAR18, "");
FUN15(VAR29);
VAR7 = 1;
goto VAR13;
}
}



switch (VAR1.VAR65) {
case VAR81:          
if (FUN35(VAR25, VAR1.VAR82, VAR1.VAR83)) {
fprintf(VAR18, "", VAR1.VAR82);
VAR7 = 1;
} else if (!(VAR1.VAR32)) {
fprintf(VAR57, "", VAR1.VAR82);
}
break;

case VAR84:          
if (FUN36(VAR25, VAR1.VAR82)) {
fprintf(VAR18, "", VAR1.VAR82);
VAR7 = 1;
} else if (!(VAR1.VAR32)) {
fprintf(VAR57, "", VAR1.VAR82);
}
break;

case VAR85:          
if (FUN37(VAR25, VAR1.VAR82)) {
fprintf(VAR18, "", VAR1.VAR82);
VAR7 = 1;
} else if (!(VAR1.VAR32)) {
fprintf(VAR57, "", VAR1.VAR82);
}
break;
case VAR66:          
if (FUN38(VAR25, VAR1.VAR82)) {
fprintf(VAR18, "", VAR1.VAR82);
VAR7 = 1;
} else if (!(VAR1.VAR32)) {
fprintf(VAR57, "", VAR1.VAR82);
}
break;
case VAR86:          
if (FUN39(VAR25, VAR1.VAR82)) {
fprintf(VAR18,
"",
VAR1.VAR82);
VAR7 = 1;
} else if (!(VAR1.VAR32)) {
fprintf(VAR57, "", VAR1.VAR82);
}
break;

case VAR87:         
if (FUN40(VAR25, VAR1.VAR82)) {
fprintf(VAR18,
"",
VAR1.VAR82);
VAR7 = 1;
} else if (!(VAR1.VAR32)) {
fprintf(VAR57, "", VAR1.VAR82);
}
break;

case VAR88:          
if (FUN41(VAR25, VAR1.VAR82)) {
fprintf(VAR18, "",
VAR1.VAR82);
VAR7 = 1;
} else if (!(VAR1.VAR32)) {
fprintf(VAR57, "", VAR1.VAR82);
}
break;
case VAR89:          
if (FUN42(VAR25, VAR1.VAR82)) {
fprintf(VAR18, "",
VAR1.VAR82);
VAR7 = 1;
} else if (!(VAR1.VAR32)) {
fprintf(VAR57, "", VAR1.VAR82);
}
break;

default:
fprintf(VAR18, "", VAR1.VAR82);
VAR7 = 1;
}


if (VAR29) {
FUN15(VAR29);
}



FUN19(VAR25);


FUN43(&VAR31);

if (VAR7) {
(void)remove(VAR1.VAR82);    
}
}
VAR13:
FUN4(&VAR1);
if (VAR7 && VAR4.VAR17) {
free(VAR4.VAR17);
}
if (VAR6) {
if (VAR6->VAR23) {
free(VAR6->VAR23);
}
if (VAR6->VAR20) {
free(VAR6->VAR20);
}
free(VAR6);
}
if (VAR10 && !VAR7 && !(VAR1.VAR32)) {
fprintf(VAR57, "",
(int)((VAR9 * 1000.0) / (VAR90)VAR10));
}
return VAR7 ? VAR19 : VAR91;
}