int
main(int argc, char *argv[])
{
VAR1 *VAR2;
struct tms VAR3;
struct rlimit VAR4;
int VAR5 = -1;
int VAR6;
int VAR7;
int VAR8;
int VAR9 = VAR10;
int VAR11 = VAR10;
VAR12 *VAR13 = NULL;
const VAR14 *VAR15;
const VAR16 *VAR17;
int VAR18;


VAR19 = NULL;
VAR20 = NULL;


while ((VAR7 = open("", VAR21)) >= 0 && VAR7 < 2)
;
if (VAR7 > 2)
(void) close(VAR7);

VAR22 = FUN1(&VAR3);	


VAR23 = FUN2(VAR24);


if ((VAR25 = strrchr(argv[0], '')) != NULL)
VAR25++;
else
VAR25 = argv[0];


(void) FUN3(&VAR26, VAR27, NULL);
(void) FUN3(&VAR28, VAR27, NULL);
(void) FUN4(&VAR29, VAR27, NULL);
if (FUN5(&VAR30, VAR31) == VAR32)
FUN6("", NULL);
VAR2 = FUN7();

VAR33 = FUN8();
VAR34 = FUN9();
VAR35 = FUN10();
VAR36 = FUN11();
VAR37 = FUN12();

FUN13(&VAR38);	
FUN14(&VAR39);	
FUN14(&VAR40);	

FUN13(&VAR41);	

FUN13(&VAR42);	
FUN15(&VAR42, VAR43);	

FUN14(&VAR44);	
FUN14(&VAR45);

FUN14(&VAR46);	
FUN14(&VAR47);	
FUN14(&VAR48);	

(void) FUN16(&VAR49);	
(void) FUN17(&VAR50);	

while ((VAR6 = getopt(argc, argv, VAR51)) != VAR52) {
switch (VAR6) {
case '':		
VAR53 = VAR54;
break;
case '':		
VAR55 = VAR56;
break;
case '':		
VAR57 = VAR56;
break;
case '':		
VAR58 = VAR56;
VAR59 = VAR56;	
break;
case '':		
VAR60 = VAR56;
break;
case '':		
VAR61 = VAR56;
break;
case '':		
VAR59 = VAR56;
break;
case '':		
VAR62 = VAR56;
break;
case '':		
VAR63 = VAR56;
break;
case '':		
VAR64 = VAR56;
break;
case '':		
VAR65 = VAR56;
break;
case '':
VAR66 = VAR56;	
break;
case '':		
if (FUN18(VAR67, &VAR38, &VAR68))
VAR11 = VAR56;
break;
case '':		
if (FUN18(VAR67, &VAR46, &VAR69))
VAR11 = VAR56;
break;
case '':		
if (FUN18(VAR67, &VAR39, &VAR70))
VAR11 = VAR56;
break;
case '':		
if (FUN18(VAR67, &VAR40, &VAR71))
VAR11 = VAR56;
break;
case '':		
if (FUN19(VAR2, VAR67, &VAR41, &VAR72))
VAR11 = VAR56;
break;
case '':		
if (FUN19(VAR2, VAR67, &VAR47, &VAR73))
VAR11 = VAR56;
break;
case '':		
if (FUN20(VAR67, &VAR42, &VAR74))
VAR11 = VAR56;
break;
case '':		
if (FUN20(VAR67, &VAR48, &VAR75))
VAR11 = VAR56;
break;
case '':		
if (FUN21(VAR67, 0))
VAR11 = VAR56;
break;
case '':		
if (FUN21(VAR67, 1))
VAR11 = VAR56;
break;
case '':		
if (FUN22(VAR67, &VAR44))
VAR11 = VAR56;
break;
case '':		
if (FUN22(VAR67, &VAR45))
VAR11 = VAR56;
break;
case '':		
VAR76 = VAR56;
if (VAR5 >= 0)
(void) close(VAR5);
if ((VAR5 = FUN23(VAR67)) < 0) {
FUN24(VAR67);
VAR11 = VAR56;
}
break;
default:
VAR9 = VAR56;
break;
}
}

if (VAR11)
FUN25(2);


if (VAR60 || VAR61)
FUN26(&VAR38, VAR77);


FUN27(&VAR38, &VAR46);
FUN27(&VAR41, &VAR47);
FUN27(&VAR42, &VAR48);

argc -= VAR78;
argv += VAR78;


if (VAR55 && argc > 0) {
VAR13 = FUN28(argc * sizeof (VAR12),
"");
while (argc-- > 0)
FUN29(*argv++, VAR13);
}

if (VAR9 || (argc <= 0 && VAR79 <= 0)) {
(void) fprintf(VAR80,
"",
VAR25);
(void) fprintf(VAR80,
"");
(void) fprintf(VAR80,
"");
FUN25(2);
}

if (argc > 0) {		
int VAR81;
char VAR82[VAR83];

VAR84 = FUN30(argv[0], &argv[0], &VAR81, VAR82, sizeof (VAR82));
if (VAR84 == NULL) {
switch (VAR81) {
case VAR85:
(void) fprintf(VAR80,
""
"",
VAR25, VAR82);
break;
case VAR86:
(void) fprintf(VAR80,
""
"",
VAR25, VAR82);
break;
case VAR87:
(void) fprintf(VAR80,
"",
VAR25, argv[0]);
break;
case VAR88:
(void) fprintf(VAR80,
"",
VAR25, argv[0]);
break;
case VAR89:
break;
default:
(void) fprintf(VAR80, "",
VAR25, FUN31(VAR81));
break;
}
FUN25(2);
}
if (VAR57 || VAR90 != NULL)
(void) FUN32(VAR84, VAR91);
else
(void) FUN33(VAR84, VAR91);
VAR15 = FUN34(VAR84);
VAR17 = &VAR15->VAR92;
VAR2->VAR93 = VAR17;
VAR94 = VAR15->VAR95;
VAR96 = VAR15->VAR97;
FUN35(VAR2, 0);
(void) FUN36(VAR2, 1);
VAR2->VAR98 = 0;
if (!VAR58 && FUN37(&VAR38, VAR77)) {
VAR2->VAR99 = FUN38(VAR2->VAR99,
strlen(VAR2->VAR100) + 1, NULL);
(void) strcpy(VAR2->VAR101, VAR2->VAR102);
(void) strcpy(VAR2->VAR99, VAR2->VAR100);
VAR2->VAR98 += strlen(VAR2->VAR100);
VAR2->VAR103 = VAR2->VAR93->VAR104;
VAR2->VAR105 = 0;
*VAR2->VAR100 = '';
}
VAR2->VAR106 = VAR15->VAR107;
VAR2->VAR108 = VAR15->VAR109;
}


VAR4.VAR110 = 1024 * 1024;
VAR4.VAR111 = 1024 * 1024;
if ((VAR33 != 0 || FUN39(VAR112, &VAR4) != 0) &&
FUN40(VAR112, &VAR4) == 0) {

VAR4.VAR110 = VAR4.VAR111;
(void) FUN39(VAR112, &VAR4);
}
(void) FUN41(-1, -1);

FUN42(VAR5);		
VAR113 = FUN43(1);

if (FUN44(VAR114, (char *)NULL, VAR115, VAR116) != 0)
FUN6("", NULL);


if (VAR96 && (VAR76 || !VAR113)) {	
(void) FUN45(VAR117, VAR118);
(void) FUN45(VAR119, VAR118);
(void) FUN45(VAR120, VAR118);
} else {				
if (FUN45(VAR117, VAR118) == VAR121)
(void) FUN45(VAR117, VAR122);
if (FUN45(VAR119, VAR118) == VAR121)
(void) FUN45(VAR119, VAR122);
if (FUN45(VAR120, VAR118) == VAR121)
(void) FUN45(VAR120, VAR122);
}
(void) FUN45(VAR123, VAR122);
(void) FUN45(VAR124, VAR122);
(void) FUN45(VAR125, VAR122);
(void) FUN45(VAR126, VAR122);


(void) FUN45(VAR127, VAR118);



VAR18 = (VAR57 || VAR90 != NULL || VAR79 > 1);
VAR128 = (void *)FUN46(NULL, sizeof (struct VAR129),
VAR130|VAR131,
VAR132 | (VAR18? VAR133 : VAR134),
-1, (VAR135)0);
if (VAR128 == VAR136)
FUN6("", "");
VAR7 = VAR18? VAR137 : VAR27;
(void) FUN3(&VAR128->VAR138, VAR7, NULL);
(void) FUN3(&VAR128->VAR139, VAR7, NULL);
(void) FUN3(&VAR128->VAR140, VAR7, NULL);
(void) FUN4(&VAR128->VAR141, VAR7, NULL);



if (VAR57 && VAR58) {
char *VAR142 = FUN47("", "");
VAR143 = open(VAR142, VAR144|VAR145|VAR146|VAR21, 0600);
if (VAR143 == -1)
FUN6("", NULL);
if (unlink(VAR142) == -1)
FUN6("", NULL);
free(VAR142);
VAR142 = NULL;
}

if (VAR96) {
FUN48();
FUN49(VAR96, NULL);
FUN50(VAR2, VAR56, VAR10);
} else {		
int VAR147 = VAR10;

VAR7 = 0;
while (VAR7 < VAR79) {		
if (FUN51(VAR2, &VAR13[VAR7++])) {
VAR15 = FUN34(VAR84);
VAR17 = &VAR15->VAR92;
VAR147 = VAR56;
break;
}
}
if (!VAR147)
FUN6(NULL, NULL);
FUN48();
while (VAR7 < VAR79) {		
VAR12 *VAR148 = &VAR13[VAR7++];

(void) FUN52(&VAR26);
switch (FUN53()) {
case -1:
(void) fprintf(VAR80,
"",
VAR25, (int)VAR148->VAR149);

default:
(void) FUN54(&VAR26);
continue;	

case 0:			
(void) FUN54(&VAR26);
FUN55(VAR84);
VAR150 = VAR56;
if (FUN51(VAR2, VAR148)) {
VAR15 = FUN34(VAR84);
VAR17 = &VAR15->VAR92;
FUN48();
break;
}
FUN25(2);
}
break;
}
free(VAR13);
}



if (VAR36 != VAR34)
(void) FUN56(VAR34);
if (VAR35 != VAR33)
(void) setuid(VAR33);

if (!VAR96 && VAR60 && FUN37(&VAR38, VAR77)) {
FUN57(VAR2);
FUN58();
}

if (VAR96 && FUN59(VAR84) != VAR151)	
if (!(VAR152 | VAR153))
FUN6("", NULL);

VAR154 = VAR38;		


FUN26(&VAR154, VAR155);
FUN26(&VAR154, VAR156);
FUN26(&VAR154, VAR157);
FUN26(&VAR154, VAR77);
FUN26(&VAR154, VAR158);
FUN26(&VAR154, VAR159);
FUN26(&VAR154, VAR160);
FUN26(&VAR154, VAR161);
FUN26(&VAR154, VAR162);
FUN26(&VAR154, VAR163);
FUN26(&VAR154, VAR164);


if (!FUN60(&VAR44)) {
FUN26(&VAR154, VAR165);
FUN26(&VAR154, VAR166);
FUN26(&VAR154, VAR167);
FUN26(&VAR154, VAR168);
FUN26(&VAR154, VAR169);
FUN26(&VAR154, VAR170);
FUN26(&VAR154, VAR171);
}
if (!FUN60(&VAR45)) {
FUN26(&VAR154, VAR172);
FUN26(&VAR154, VAR173);
FUN26(&VAR154, VAR174);
FUN26(&VAR154, VAR175);
FUN26(&VAR154, VAR176);
FUN26(&VAR154, VAR177);
FUN26(&VAR154, VAR178);
}

if (VAR58 || VAR66) {
FUN61(VAR84, &VAR154);
}
FUN62(VAR84, &VAR154);


if (FUN37(&VAR38, VAR179)) {
(void) FUN63(VAR84, VAR179, VAR56);
(void) FUN64(VAR84, VAR179, VAR10);
FUN15(&VAR154, VAR179);
}


(void) FUN63(VAR84, VAR77, VAR56);


(void) FUN63(VAR84, VAR155, VAR56);
(void) FUN63(VAR84, VAR157, VAR56);
(void) FUN63(VAR84, VAR164, VAR56);
(void) FUN64(VAR84, VAR155, VAR10);
(void) FUN64(VAR84, VAR157, VAR10);
(void) FUN64(VAR84, VAR164, VAR10);

FUN65(VAR84, &VAR41);	
FUN66(VAR84, &VAR42);	


if (VAR90 != NULL) {

(void) FUN67(VAR84, VAR180, VAR56);
(void) FUN67(VAR84, VAR181, VAR56);


(void) FUN32(VAR84, VAR182);


if ((VAR17->VAR183 != VAR184 &&
VAR17->VAR183 != VAR185) ||
VAR17->VAR186 != VAR77) {
FUN68();
FUN69();
}
}


(void) FUN32(VAR84, VAR187);


FUN70(VAR84);


VAR8 = VAR96? VAR10 : VAR56;
if (!VAR96 &&
((FUN59(VAR84) == VAR151 && VAR17->VAR183 == VAR188) ||
(VAR17->VAR189 & VAR190)))
VAR8 = VAR10;

FUN71(VAR8);
return (0);
}