static void FUN1(struct VAR1* VAR2,
struct VAR3* VAR4, struct VAR5* VAR5, int VAR6,
struct VAR7* VAR7, const char* VAR8, uint32_t VAR9)
{
char VAR10[1024], VAR11[128];

time_t VAR12 = FUN2(NULL);
if(VAR4->VAR13 || FUN3(VAR2, VAR4)) {

FUN4(VAR5, VAR8, 0);
return;
}
snprintf(VAR11, sizeof(VAR11), "", FUN5(&VAR12));
if(strchr(VAR11, ''))
*strchr(VAR11, '') = 0;
snprintf(VAR10, sizeof(VAR10),
"",
VAR14, FUN6(VAR2->VAR15),
(unsigned)VAR2->VAR16, (unsigned)VAR2->VAR17,
(unsigned)FUN7(VAR4->VAR18), VAR11);
VAR4->VAR18->VAR19 = strdup(VAR10);
if(!VAR4->VAR18->VAR19) {
FUN8(VAR20, "");
FUN9(VAR4);
return;
}
if(!FUN10(
FUN6(VAR2->VAR15), VAR5->VAR21->VAR22, VAR8,
VAR9, VAR2->VAR23, FUN7(VAR4->VAR18))) {
FUN8(VAR20, "");
FUN9(VAR4);
return;
}
if(!FUN11(VAR5, VAR4->VAR18, VAR8, 1)) {
FUN8(VAR20, "");
FUN9(VAR4);
return;
}
if(VAR6) {
FUN12(VAR4, VAR7, VAR10);
}
}