static VAR1 FUN1(struct VAR2 *VAR3,
struct VAR4 *VAR5,
const char *VAR6, size_t VAR7)
{
struct VAR8 *VAR8 = FUN2(VAR3);
struct VAR9 *VAR10 = FUN3(VAR5);
char VAR11[20];
size_t VAR12;
int VAR13, VAR14;
unsigned int VAR15, VAR16 = 0;
unsigned int VAR17 = VAR18;

VAR11[sizeof(VAR11) - 1] = '';
strncpy(VAR11, VAR6, sizeof(VAR11) - 1);
VAR12 = strlen(VAR11);

if (VAR12 && VAR11[VAR12 - 1] == '')
VAR11[VAR12 - 1] = '';

VAR13 = FUN4(VAR11, 10, &VAR15);
if (VAR13)
return VAR13;

for (VAR14 = 3; VAR14 >= 0; VAR14--) {
unsigned int VAR19;

VAR19 = FUN5(VAR10->VAR20[VAR14].VAR21 - VAR15);
if (VAR19 < VAR17) {
VAR17 = VAR19;
VAR16 = VAR10->VAR20[VAR14].VAR16;
}

if (!VAR19)
break;
}

VAR16 <<= FUN6(VAR10->VAR22) - 1;
VAR13 = FUN7(VAR8->VAR23->VAR24,
VAR25,
VAR10->VAR22, VAR16);
if (VAR13 != 0)
return -VAR26;

return VAR7;
}

static struct dev_ext_attribute VAR27 = {
.VAR5	= FUN8(VAR28, 0644, VAR29, VAR30),
.VAR31	= &VAR32,
};