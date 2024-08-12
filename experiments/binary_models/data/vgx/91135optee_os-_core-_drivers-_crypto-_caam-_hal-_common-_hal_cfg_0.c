enum VAR1 FUN1(struct VAR2 *VAR3)
{
enum caam_status VAR4 = VAR5;
vaddr_t VAR6 = 0;
void *VAR7 = NULL;

VAR7 = FUN2();


if (VAR7)
FUN3(VAR7, &VAR6);

if (!VAR6) {
VAR6 = (VAR8)FUN4(VAR9,
VAR10, VAR11);
if (!VAR6) {
FUN5("");
goto VAR12;
}
}

VAR3->VAR13 = VAR6;


if (VAR7)
FUN6(VAR7, VAR3);

if (!VAR3->VAR14) {
VAR3->VAR14 = (VAR15 + 1) * VAR16;
VAR3->VAR17 = VAR18;

if (FUN7(VAR19) &&
!FUN8(VAR7)) {
if (VAR7) {

FUN9(VAR7, VAR3);
}
}
}

VAR3->VAR20 = VAR21;

VAR4 = VAR22;

VAR12:
FUN10("", VAR4);
return VAR4;
}