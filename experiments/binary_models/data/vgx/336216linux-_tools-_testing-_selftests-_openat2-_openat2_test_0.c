void FUN1(void)
{
int VAR1[] = { 0, 1, 2, 3, 4, 5, 6, 7, 8, 9, 11, 17, 87 };

struct struct_test VAR2[] = {

{ .VAR3 = "",
.VAR4.VAR5.VAR6 = VAR7,
.VAR8 = sizeof(struct VAR9) },

{ .VAR3 = "",
.VAR4.VAR5.VAR6 = VAR7,
.VAR8 = sizeof(struct VAR10) },




{ .VAR3 = "",
.VAR4.VAR5.VAR6 = VAR7, .VAR8 = 0, .VAR11 = -VAR12 },
{ .VAR3 = "",
.VAR4.VAR5.VAR6 = VAR7,
.VAR8 = VAR13 - 1, .VAR11 = -VAR12 },


{ .VAR3 = "",
.VAR4.VAR5.VAR6 = VAR7, .VAR4.VAR14 = 0xdeadbeef,
.VAR8 = sizeof(struct VAR10), .VAR11 = -VAR15 },
{ .VAR3 = "",
.VAR4.VAR5.VAR6 = VAR7, .VAR4.VAR16 = 0xfeedcafe,
.VAR8 = sizeof(struct VAR10), .VAR11 = -VAR15 },
{ .VAR3 = "",
.VAR4.VAR5.VAR6 = VAR7, .VAR4.VAR17 = 0xabad1dea,
.VAR8 = sizeof(struct VAR10), .VAR11 = -VAR15 },
};

FUN2(FUN3(VAR1) != VAR18);
FUN2(FUN3(VAR2) != VAR19);

for (int VAR20 = 0; VAR20 < FUN3(VAR2); VAR20++) {
struct VAR21 *VAR22 = &VAR2[VAR20];
struct open_how_ext VAR23 = VAR22->VAR4;

for (int VAR24 = 0; VAR24 < FUN3(VAR1); VAR24++) {
int VAR25, VAR26 = VAR1[VAR24];
char *VAR27 = NULL;
bool VAR28;
void (*VAR29)(const char *VAR30, ...) = VAR31;

void *copy = NULL, *VAR32 = &VAR23;

if (!VAR33) {
FUN4("");
VAR29 = VAR34;
goto VAR35;
}

if (VAR26) {

copy = malloc(VAR26 + sizeof(VAR23));
VAR32 = copy + VAR26;
memset(copy, 0xff, VAR26);
memcpy(VAR32, &VAR23, sizeof(VAR23));
}

VAR25 = FUN5(VAR36, "", VAR32, VAR22->VAR8);
if (VAR22->VAR11 >= 0)
VAR28 = (VAR25 < 0);
else
VAR28 = (VAR25 != VAR22->VAR11);
if (VAR25 >= 0) {
VAR27 = FUN6(VAR25);
close(VAR25);
}

if (VAR28) {
VAR29 = VAR37;

FUN4("");
if (VAR27)
FUN4("", VAR25, VAR27);
else
FUN4("", VAR25, strerror(-VAR25));
}

VAR35:
if (VAR22->VAR11 >= 0)
FUN7("",
VAR22->VAR3, VAR26);
else
FUN7("",
VAR22->VAR3, VAR26, VAR22->VAR11,
strerror(-VAR22->VAR11));

free(copy);
free(VAR27);
FUN8(VAR38);
}
}
}