static struct VAR1 *FUN1(VAR2 *VAR3, char *VAR4)
{
VAR2 *VAR5;
struct VAR1 *VAR6;
unsigned char VAR7[sizeof(VAR6->VAR7) + 1], *VAR8;
const VAR9 *VAR10;
const VAR11 *VAR12;
uint64_t VAR13, VAR14;

VAR4[0] = '';

if (VAR3->VAR15 != VAR16) {
strcpy(VAR4, "");
return NULL;
}

do {                                                                                                                           \
if ((VAR5 = FUN2(VAR3, VAR17)) == NULL) {                                                                                  \
strcpy(VAR4, "" VAR17 "");                                                             \
return NULL;                                                                                                           \
}                                                                                                                          \
if (VAR5->VAR15 != VAR18) {                                                                                         \
strcpy(VAR4, "" VAR17 "");                                                                   \
return NULL;                                                                                                           \
}                                                                                                                          \
VAR19                                                                                                                       \
} while (0)

FUN3("", {
if (strlen(VAR5->VAR20.VAR21) != sizeof(VAR6->VAR7) * 2) {
strcpy(VAR4, "");
return NULL;
}
if (FUN4(VAR7, VAR5->VAR20.VAR21, sizeof(VAR6->VAR7) * 2) != 0) {
strcpy(VAR4, "");
return NULL;
}
});
FUN3("", {
if ((VAR10 = FUN5(VAR5->VAR20.VAR21)) == NULL) {
strcpy(VAR4, "");
return NULL;
}
});
FUN3("", {
if ((VAR12 = FUN6(VAR5->VAR20.VAR21)) == NULL) {
strcpy(VAR4, "");
return NULL;
}
});
FUN3("", {
size_t VAR22 = FUN7(VAR10) + FUN8(VAR12);
if (strlen(VAR5->VAR20.VAR21) != VAR22 * 2) {
sprintf(VAR4, "", strlen(VAR5->VAR20.VAR21),
VAR22 * 2);
return NULL;
}
VAR8 = alloca(VAR22 + 1);
if (FUN4(VAR8, VAR5->VAR20.VAR21, VAR22 * 2) != 0) {
strcpy(VAR4, "");
return NULL;
}
});
FUN3("", {
if (sscanf(VAR5->VAR20.VAR21, "" VAR23, &VAR13) != 1) {
strcpy(VAR4, "");
return NULL;
}
});
FUN3("", {
if (sscanf(VAR5->VAR20.VAR21, "" VAR23, &VAR14) != 1) {
strcpy(VAR4, "");
return NULL;
}
});
if (!(VAR13 <= VAR14)) {
strcpy(VAR4, "");
return NULL;
}


VAR6 = FUN9(VAR10, VAR12, VAR13, VAR14, 0);
memcpy(VAR6->VAR7, VAR7, sizeof(VAR6->VAR7));
memcpy(VAR6->VAR24, VAR8, FUN7(VAR10) + FUN8(VAR12));
return VAR6;
}