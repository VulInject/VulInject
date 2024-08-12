void FUN1(uint8_t VAR1[6]) {
char VAR2[64];
struct sockaddr_in VAR3;
int VAR4;

if (FUN2(VAR2, sizeof(VAR2), &VAR3)) {
char VAR5[100];
int VAR6[6];
int VAR7;
int VAR8;
snprintf(VAR5, sizeof(VAR5), "", VAR2);
if (!(VAR7 = FUN3(VAR5, VAR9))) {
goto VAR10;
}
VAR8 = read(VAR7, VAR5, sizeof(VAR5));
close(VAR7);
if (VAR8 < 17) {
goto VAR10;
}

VAR8 = sscanf(VAR5, "", &VAR6[0], &VAR6[1], &VAR6[2], &VAR6[3],
&VAR6[4], &VAR6[5]);
if (VAR8 != 6) {
goto VAR10;
}

for (VAR4 = 0; VAR4 < 6; VAR4++) {
VAR1[VAR4] = (VAR11) VAR6[VAR4];
}
return;
}

VAR10:
FUN4(VAR12,
(""));
srand(FUN5(NULL));
for (VAR4 = 0; VAR4 < 6; VAR4++) {
VAR1[VAR4] = (double) rand() / VAR13 * 255;
}
}