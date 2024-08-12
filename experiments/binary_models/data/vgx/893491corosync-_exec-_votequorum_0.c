static void FUN1(
int32_t VAR1,
const char *VAR2,
struct icmap_notify_value VAR3,
struct icmap_notify_value VAR4,
void *VAR5)
{
int VAR6, VAR7;
uint8_t VAR8;
uint8_t VAR9;
int32_t VAR10;

FUN2();


if (FUN3("", &VAR8) == VAR11 && VAR8) {
return;
}


if ( (strcmp(VAR2, "") == 0) &&
(FUN4("", &VAR10) == VAR11) &&
(VAR10 != VAR11) ) {
return;
}

(void)FUN3("", &VAR9);
if (strcmp(VAR2, "") == 0 &&
VAR9 >= 1) {
FUN5("", 0);
if (FUN6(VAR12,
VAR13->VAR14, 0)) {
FUN7(VAR15, "");
}
return;
}

VAR6 = VAR13->VAR16;
VAR7 = VAR13->VAR17;


FUN8(VAR18);


FUN9(VAR13->VAR14);
FUN9(VAR19);
if (VAR13->VAR16 != VAR6) {
if (FUN6(VAR20,
VAR13->VAR14, VAR13->VAR16)) {
FUN7(VAR15, "");
}
}
if (VAR13->VAR17 != VAR7) {
if (FUN6(VAR21,
VAR13->VAR14, VAR13->VAR17)) {
FUN7(VAR15, "");
}
}

FUN10();
}