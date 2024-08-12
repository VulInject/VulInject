static int FUN1(const void *VAR1, int VAR2, int VAR3,
const void *VAR4, int VAR5,
char **VAR6)
{
static char * const VAR7[] = {
VAR8,
VAR9,
VAR10,
VAR11,
};

const char *VAR12, *VAR13, *VAR14;
struct image_sign_info VAR15;
const VAR16 *VAR17;
const char *VAR18;
VAR19 *VAR20;
int VAR21;
bool VAR22;
int VAR23;
int VAR24, VAR25;
char VAR26[200];
int VAR27;

VAR18 = FUN2(VAR1, VAR3, NULL);
FUN3("", VAR28, VAR4,
FUN2(VAR1, VAR2, NULL),
FUN2(VAR4, VAR5, NULL));
*VAR6 = NULL;
if (FUN4(&VAR15, VAR1, VAR2, VAR4,
VAR5, VAR6))
return -1;

if (FUN5(VAR1, VAR2, &VAR20,
&VAR21)) {
*VAR6 = "";
return -1;
}


VAR12 = FUN6(VAR1, VAR2, "", &VAR25);
VAR13 = VAR12 ? VAR12 + VAR25 : VAR12;
for (VAR14 = VAR12, VAR27 = 0; VAR14 < VAR13; VAR14++)
if (!*VAR14)
VAR27++;
if (!VAR27) {
*VAR6 = "";
return -1;
}

if (VAR12 && VAR25 > 0 && VAR12[VAR25 - 1] != '') {
*VAR6 = "";
return -1;
}


if (VAR27 > VAR29) {
*VAR6 = "";
return -1;
}


char *VAR30[VAR27];

FUN3("", VAR27);
VAR22 = false;
for (VAR14 = VAR12, VAR24 = 0; VAR14 < VAR13; VAR14 += strlen(VAR14) + 1, VAR24++) {
FUN3("", VAR14);
VAR30[VAR24] = (char *)VAR14;
if (!FUN7(VAR31, VAR14, strlen(VAR31)) &&
VAR14[sizeof(VAR31) - 1] == '' &&
!strcmp(VAR14 + sizeof(VAR31), VAR18)) {
FUN3("", VAR18);
VAR22 = true;
}
}
if (!VAR22) {
*VAR6 = "";
return -1;
}


VAR23 = 20 + VAR27 * 7;
struct fdt_region VAR32[VAR23];


VAR27 = FUN8(VAR1, VAR30, VAR27,
VAR7, FUN9(VAR7),
VAR32, VAR23 - 1,
VAR26, sizeof(VAR26), 0);
if (VAR27 < 0) {
*VAR6 = "";
return -1;
}
if (VAR27 == 0) {
*VAR6 = "";
return -1;
}
if (VAR27 >= VAR23 - 1) {
*VAR6 = "";
return -1;
}


VAR17 = FUN6(VAR1, VAR2, "", NULL);
if (VAR17) {

VAR32[VAR27].VAR33 = FUN10(VAR1);
VAR32[VAR27].VAR34 = FUN11(VAR17[1]);
VAR27++;
}


struct image_region VAR35[VAR27];

FUN12(VAR1, VAR32, VAR27, VAR35);
if (VAR15.VAR36->FUN13(&VAR15, VAR35, VAR27, VAR20,
VAR21)) {
*VAR6 = "";
return -1;
}

return 0;
}