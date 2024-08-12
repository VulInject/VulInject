static void FUN1(struct VAR1 *VAR2,
enum led_brightness VAR3)
{
int VAR4;
struct VAR5 *VAR6 = VAR2->VAR6->VAR7;
struct VAR8 *VAR9 = FUN2(VAR6);
struct VAR10 *VAR11 = FUN3(VAR9);

for (VAR4 = 0; VAR4 < VAR12; VAR4++) {
if (VAR2 == &VAR11->VAR13[VAR4])
break;
}

if (VAR4 < VAR12) {
VAR11->VAR14[VAR4] = VAR3;
FUN4(&VAR11->VAR15);
}
}