static void FUN1(
struct VAR1 *VAR2,
struct VAR3 *VAR4,
enum engine_id VAR5)
{
int VAR6;
int VAR7;

if (VAR5 != VAR8) {
VAR6 = VAR5 - VAR9;


for (VAR7 = 0; VAR7 < VAR10; VAR7++) {
struct link_enc_assignment VAR11 = VAR2->VAR12.VAR13.VAR14[VAR7];

if (VAR11.VAR15 && VAR11.VAR4 == VAR4) {
VAR2->VAR12.VAR13.VAR14[VAR7].VAR15 = false;

if (FUN2(VAR2, VAR5) == NULL)
VAR2->VAR12.VAR13.VAR16[VAR6] = VAR5;

VAR4->VAR17 = NULL;
VAR2->VAR12.VAR13.VAR14[VAR7].VAR5 = VAR8;
VAR2->VAR12.VAR13.VAR14[VAR7].VAR4 = NULL;
FUN3(VAR4);
break;
}
}
}
}