static void
FUN1(struct VAR1 *VAR2)
{
struct {
char *VAR3;
char *VAR4;
char *VAR5;
} VAR6[] = {
{ "", "" ,VAR7 },
{ "", "",VAR8 },
{ "", "",VAR9 },
{ "", "",VAR10 },
{ NULL, NULL, NULL }
};

u_int32_t VAR11 = 0;
int VAR12 = 0;
struct stat VAR13;
struct VAR14 *private, *public;
char VAR15[1024], *VAR16, *VAR17, *VAR18, *VAR19;
int VAR20, VAR21, VAR22, VAR23;

for (VAR20 = 0; VAR6[VAR20].VAR3; VAR20++) {
public = private = NULL;
VAR16 = VAR17 = VAR18 = VAR19 = NULL;

FUN2(&VAR18, "",
VAR24, VAR6[VAR20].VAR5);


if (FUN3(VAR18, &VAR13) == 0) {
if (VAR13.VAR25 != 0)
goto VAR26;
} else if (VAR27 != VAR28) {
FUN4("", VAR6[VAR20].VAR5,
strerror(VAR27));
goto VAR29;
}


FUN2(&VAR16, "",
VAR24, VAR6[VAR20].VAR5);
FUN2(&VAR17, "",
VAR24, VAR6[VAR20].VAR5);
FUN2(&VAR19, "",
VAR24, VAR6[VAR20].VAR5);

if (VAR12 == 0) {
VAR12 = 1;
FUN5("", VAR30);
}
FUN5("", VAR6[VAR20].VAR4);
FUN6(VAR31);
VAR21 = FUN7(VAR6[VAR20].VAR3);
if ((VAR22 = mkstemp(VAR16)) == -1) {
FUN4("",
VAR16, strerror(VAR27));
goto VAR29;
}
(void)close(VAR22); 
VAR11 = 0;
FUN8(VAR21, NULL, &VAR11);
if ((VAR23 = FUN9(VAR21, VAR11, &private)) != 0) {
FUN10(VAR23, "");
goto VAR29;
}
if ((VAR23 = FUN11(private, &public)) != 0)
FUN12(VAR23, "");
snprintf(VAR15, sizeof VAR15, "", VAR2->VAR32,
VAR33);
if ((VAR23 = FUN13(private, VAR16, "",
VAR15, VAR34, VAR35,
VAR36)) != 0) {
FUN10(VAR23, ""%VAR37\"", VAR16);
goto VAR29;
}
if ((VAR22 = mkstemp(VAR17)) == -1) {
FUN4("",
VAR17, strerror(VAR27));
goto VAR29;
}
(void)FUN14(VAR22, 0644);
(void)close(VAR22);
if ((VAR23 = FUN15(public, VAR17, VAR15)) != 0) {
FUN10(VAR23, "",
VAR24);
goto VAR29;
}


if (FUN16(VAR17, VAR19) != 0) {
FUN4("",
VAR19, strerror(VAR27));
goto VAR29;
}
if (FUN16(VAR16, VAR18) != 0) {
FUN4("",
VAR6[VAR20].VAR5, strerror(VAR27));
VAR29:
VAR12 = 0;
goto VAR26;
}
VAR26:
FUN17(private);
FUN17(public);
free(VAR16);
free(VAR17);
free(VAR18);
free(VAR19);
}
if (VAR12 != 0)
FUN5("");
}