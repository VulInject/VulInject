static int FUN1(struct VAR1 *VAR2, struct VAR3 *VAR3,
struct VAR4 *VAR4, int VAR5)
{
void *VAR6;
int VAR7 = 0, VAR8;
unsigned int VAR9, VAR10;
struct VAR11 *VAR12;
loff_t VAR13 = VAR3->VAR13;

FUN2("",
VAR3->VAR14, VAR4->VAR15, VAR13);

VAR6 = FUN3(VAR4);

VAR9 = VAR4->VAR15 << VAR16;
VAR10 = (VAR13 + VAR17 - 1) >> VAR18;
if (VAR9 >= VAR10) {

memset(VAR6, 0, VAR19);
goto VAR20;
}

VAR12 = FUN4(VAR21, VAR22);
if (!VAR12)
return -VAR23;

VAR8 = 0;
while (1) {
int VAR24;

if (VAR9 >= VAR10) {

VAR7 = -VAR25;
memset(VAR6, 0, VAR17);
} else {

if (((VAR9 + 1) == VAR10) || VAR5) {
void *VAR26;
int VAR27;


VAR26 = FUN5(VAR17);
if (!VAR26) {
FUN6("",
VAR28);
VAR7 = -VAR23;
break;
}


VAR24 = FUN7(VAR3, VAR26, VAR9, VAR12);
if (VAR24) {
VAR7 = VAR24;
if (VAR7 != -VAR25) {
free(VAR26);
break;
}
}

if (VAR5)
VAR27 = VAR5;
else if (VAR24)
VAR27 = VAR17;
else
VAR27 = FUN8(VAR12->VAR29);


memcpy(VAR6, VAR26, VAR27);

free(VAR26);
} else {
VAR24 = FUN7(VAR3, VAR6, VAR9, VAR12);
if (VAR24) {
VAR7 = VAR24;
if (VAR7 != -VAR25)
break;
}
}
}
if (++VAR8 >= VAR30)
break;
VAR9 += 1;
VAR6 += VAR17;
}
if (VAR7) {
if (VAR7 == -VAR25) {

FUN2("");
goto VAR31;
}
FUN9(VAR2, "",
VAR4->VAR15, VAR3->VAR14, VAR7);
goto VAR32;
}

VAR31:
FUN10(VAR12);
VAR20:
return 0;

VAR32:
FUN10(VAR12);
return VAR7;
}