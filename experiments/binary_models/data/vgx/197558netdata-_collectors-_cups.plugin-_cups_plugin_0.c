int main(int argc, char **argv) {
VAR1 = VAR2;
FUN1();




VAR3 = "";


VAR4 = 0;


VAR5 = 100;
VAR6 = 3600;

FUN2(argc, argv);

VAR7 = 0;

VAR8 = FUN3(VAR9);




if (VAR10)
fprintf(VAR2, "");

time_t VAR11 = FUN4();
size_t VAR12 = 0;
usec_t VAR13 = VAR14 * VAR15;

heartbeat_t VAR16;
FUN5(&VAR16);
for (VAR12 = 0; 1; VAR12++)
{
FUN6(&VAR16, VAR13);

if (FUN7(VAR17))
{
break;
}

FUN8();

VAR18 *VAR19;
VAR20 = FUN9(VAR21, &VAR19);

if(FUN7(VAR20 == 0)) {

FUN10(VAR21);
VAR21 = FUN11(FUN12(), FUN13(), NULL, VAR22, FUN14(), 0, VAR14 * 1000, NULL);
if(VAR21 == NULL) {
FUN15("");
FUN16(1);
}
}

VAR18 *VAR23 = VAR19;
int VAR24 = 0;
while (VAR24 < VAR20) {
if (VAR24 != 0) {
VAR23++;
}
VAR24++;

const char *VAR25 = FUN17("", VAR23->VAR26, VAR23->VAR27);
if (!VAR25) {
if(VAR10)
fprintf(VAR2, "", VAR23->VAR28);
continue;
}

const char *VAR29 = FUN17("", VAR23->VAR26, VAR23->VAR27);
if (VAR29 && !strcmp(VAR29, "")) {
VAR30++;
}

const char *VAR31 = FUN17("", VAR23->VAR26, VAR23->VAR27);
if (VAR31 && !strcmp(VAR31, "")) {
VAR32++;
}

int VAR33 = FUN18("", VAR23->VAR26, VAR23->VAR27);
switch (VAR33) {
case 3:
VAR34++;
break;
case 4:
VAR35++;
break;
case 5:
VAR36++;
break;
case VAR37:
if(VAR10)
fprintf(VAR2, "", VAR23->VAR28);
break;
default:
FUN15("", VAR33);
break;
}


struct VAR38 *VAR39 = FUN19(VAR23->VAR28);
VAR39->VAR40 = 1;
}
FUN20(VAR20, VAR19);

if (FUN7(VAR17))
break;

VAR41 *VAR42, *VAR43;
int VAR44 = FUN21(VAR21, &VAR42, NULL, 0, VAR45);
int VAR46;
for (VAR46 = VAR44, VAR43 = VAR42; VAR46 > 0; VAR46--, VAR43++) {
struct VAR38 *VAR39 = FUN19(VAR43->VAR47);
VAR39->VAR40 = 1;

switch (VAR43->VAR48) {
case VAR49:
VAR39->VAR50++;
VAR39->VAR51 += VAR43->VAR52;
VAR53.VAR50++;
VAR53.VAR51 += VAR43->VAR52;
break;
case VAR54:
VAR39->VAR55++;
VAR39->VAR56 += VAR43->VAR52;
VAR53.VAR55++;
VAR53.VAR56 += VAR43->VAR52;
break;
case VAR57:
VAR39->VAR58++;
VAR39->VAR59 += VAR43->VAR52;
VAR53.VAR58++;
VAR53.VAR59 += VAR43->VAR52;
break;
default:
FUN15("", VAR43->VAR48);
break;
}
}
FUN22(VAR44, VAR42);

FUN23(VAR8, VAR60, NULL);

static int VAR61 = 0;
if (FUN7(!VAR61))
{
VAR61 = 1;
FUN24("", VAR14);
FUN24("");
FUN24("");
FUN24("");

FUN24("", VAR14);
FUN24("");
FUN24("");
FUN24("");

FUN24("", VAR14);
FUN24("");
FUN24("");
FUN24("");

FUN24("", VAR14);
FUN24("");
FUN24("");
FUN24("");
}

FUN24(
""
""
""
""
"",
VAR34, VAR35, VAR36);
FUN24(
""
""
""
""
"",
VAR20, VAR30, VAR32);
FUN24(
""
""
""
""
"",
VAR53.VAR50, VAR53.VAR55, VAR53.VAR58);
FUN24(
""
""
""
""
"",
VAR53.VAR51, VAR53.VAR56, VAR53.VAR59);

FUN25(VAR62);

if (FUN7(VAR17))
break;


if (!FUN4() - VAR11 > 14400)
break;
}

FUN10(VAR21);
FUN26("");
}