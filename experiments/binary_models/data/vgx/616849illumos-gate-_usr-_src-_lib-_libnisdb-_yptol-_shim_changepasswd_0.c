int FUN1(struct VAR1 *, struct VAR2 *VAR3, VAR4, char *);
int FUN2(struct VAR1 *, struct VAR2 *);
struct VAR2 *FUN3(char *, char *);
static char *FUN4(char *, char **, char *);
void FUN5(struct VAR2 *);
struct VAR5 *FUN6(char *, char *);
VAR6 FUN7(VAR7 *, struct VAR5 *);
void FUN8(struct VAR5 *);
int FUN9(char *, struct VAR2 *);
int FUN10(char **, char *, struct VAR2 *, VAR4);
int FUN11(char *, struct VAR2 *, VAR4);
VAR4 FUN12(char *VAR8, char *VAR9);


void
FUN13(VAR10 *VAR11)
{
struct yppasswd VAR12;
bool_t	VAR13 = VAR14;
char VAR15[VAR16+1];
char **VAR17;
int VAR18, VAR19;

int	VAR20, VAR21 = 2;	


memset(&VAR12, 0, sizeof (struct VAR1));


if (!FUN14(VAR11, VAR22, (VAR23)&VAR12)) {
FUN15(VAR11);
return;
}


if ((!FUN16(VAR12.VAR24.VAR25, VAR26)) ||
(!FUN16(VAR12.VAR24.VAR27, VAR28)) ||
(!FUN16(VAR12.VAR24.VAR29, VAR30)) ||
(!FUN16(VAR12.VAR24.VAR31, VAR32))) {
FUN15(VAR11);
return;
}


if (strcmp(VAR11->VAR33, "") == 0) {
svc_local_cred_t VAR34;
if (!FUN17(VAR11, &VAR34)) {
FUN18(VAR35, VAR36,
"");
} else if (VAR34.VAR37 == 0)
VAR13 = VAR38;
}


if (0 !=
(VAR18 = FUN19(&VAR17))) {

for (VAR19 = 0; VAR19 < VAR18; VAR19 ++) {
VAR20 = FUN20(&VAR12, VAR13,
VAR17[VAR19]);


if (0 != VAR21)
VAR21 = VAR20;
}
}
else
{

if (0 > FUN21(VAR15, VAR16+1)) {
FUN18(VAR35, VAR36,
"");
} else {

VAR21 = FUN20(&VAR12, VAR13, VAR15);
}
}


if (!FUN22(VAR11, VAR39, (char *)&VAR21))
FUN18(VAR35, VAR40,
"");
}