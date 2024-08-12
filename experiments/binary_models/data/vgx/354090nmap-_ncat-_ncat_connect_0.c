static int FUN1(void)
{
char VAR1[8];
struct socks4_data VAR2;
size_t VAR3;
char *VAR4 = VAR5.VAR6 != NULL ? VAR5.VAR6 : "";
union sockaddr_u VAR7;
size_t VAR8;
int VAR9;

if (FUN2(VAR5.VAR10) == 2) {
FUN3("");
return -1;
}

VAR9 = FUN4(VAR11);
if (VAR9 == -1) {
FUN3("", FUN5(FUN6()));
return VAR9;
}

if (VAR5.VAR12) {
FUN3("", FUN7(&VAR13->VAR7),
FUN8(&VAR13->VAR7));
}


FUN9(&VAR2, sizeof(VAR2));
VAR2.VAR14 = VAR15;
VAR2.VAR16 = VAR17;
VAR2.VAR18 = FUN10(VAR5.VAR19);

if (strlen(VAR4) >= sizeof(VAR2.VAR20)) {
FUN3("");
close(VAR9);
return -1;
}
strcpy(VAR2.VAR20, VAR4);
VAR3 = strlen(VAR4) + 1;

if (FUN11(VAR5.VAR10, 0, &VAR7.VAR21, &VAR8, VAR22)) {

if (!(VAR5.VAR23 & VAR24)) {
FUN3("", VAR5.VAR10);
close(VAR9);
return -1;
}
if (VAR5.VAR12)
FUN3("", VAR5.VAR10);
VAR2.VAR25 = FUN12("");
if (VAR3 + strlen(VAR5.VAR10) >= sizeof(VAR2.VAR20)) {
FUN3("");
close(VAR9);
return -1;
}
strcpy(VAR2.VAR20 + VAR3, VAR5.VAR10);
VAR3 += strlen(VAR5.VAR10) + 1;
} else {

VAR2.VAR25 = VAR7.VAR26.VAR27.VAR28;
if (VAR5.VAR12 && FUN2(VAR5.VAR10) == -1)
FUN3("", VAR5.VAR10,
FUN7(&VAR7));
}

if (send(VAR9, (char *)&VAR2, FUN13(struct VAR29, VAR20) + VAR3, 0) < 0) {
FUN3("", FUN5(FUN6()));
close(VAR9);
return -1;
}


if (recv(VAR9, VAR1, 8, 0) < 0) {
FUN3("");
close(VAR9);
return -1;
}

if (VAR9 != -1 && VAR1[1] != VAR30) {
FUN3("");
close(VAR9);
return -1;
}

return VAR9;
}