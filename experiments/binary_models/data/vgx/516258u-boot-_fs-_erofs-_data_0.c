static int FUN1(struct VAR1 *VAR2, char *VAR3,
erofs_off_t VAR4, erofs_off_t VAR5)
{
erofs_off_t VAR6, VAR7, VAR8;
struct erofs_map_blocks VAR9 = {
.VAR10 = VAR11,
};
struct erofs_map_dev VAR12;
bool VAR13;
unsigned int VAR14 = 0;
char *VAR15 = NULL;
int VAR16 = 0;

VAR6 = VAR5 + VAR4;
while (VAR6 > VAR5) {
VAR9.VAR17 = VAR6 - 1;

VAR16 = FUN2(VAR2, &VAR9, 0);
if (VAR16)
break;


VAR12 = (struct VAR18) {
.VAR19 = VAR9.VAR19,
};
VAR16 = FUN3(&VAR20, &VAR12);
if (VAR16) {
FUN4(1);
break;
}


if (VAR6 < VAR9.VAR17 + VAR9.VAR21) {
VAR7 = VAR6 - VAR9.VAR17;
VAR13 = true;
} else {
FUN4(VAR6 != VAR9.VAR17 + VAR9.VAR21);
VAR7 = VAR9.VAR21;
VAR13 = !(VAR9.VAR22 & VAR23);
}

if (VAR9.VAR17 < VAR5) {
VAR8 = VAR5 - VAR9.VAR17;
VAR6 = VAR5;
} else {
VAR8 = 0;
VAR6 = VAR9.VAR17;
}

if (!(VAR9.VAR22 & VAR24)) {
memset(VAR3 + VAR6 - VAR5, 0, VAR7);
VAR6 = VAR9.VAR17;
continue;
}

if (VAR9.VAR25 > VAR14) {
VAR14 = VAR9.VAR25;
VAR15 = realloc(VAR15, VAR14);
if (!VAR15) {
VAR16 = -VAR26;
break;
}
}
VAR16 = FUN5(VAR12.VAR27, VAR15, VAR12.VAR19, VAR9.VAR25);
if (VAR16 < 0)
break;

VAR16 = FUN6(&(struct VAR28) {
.VAR29 = VAR15,
.VAR30 = VAR3 + VAR6 - VAR5,
.VAR31 = VAR8,
.VAR32 = VAR9.VAR25,
.VAR33 = VAR7,
.VAR34 = VAR9.VAR35,
.VAR36 = VAR13
});
if (VAR16 < 0)
break;
}
if (VAR15)
free(VAR15);
return VAR16 < 0 ? VAR16 : 0;
}