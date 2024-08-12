static int FUN1(struct VAR1 *VAR2,
struct VAR3 *VAR4)
{
struct VAR5 *VAR6 = &VAR2->VAR7.VAR8;
u32 VAR9[2];
enum of_gpio_flags VAR10;
int VAR11;

VAR6->VAR10 = 0;
VAR2->VAR12 = -VAR13;

if (!VAR4)
return 0;

if (FUN2(VAR4, ""))
VAR6->VAR10 |= VAR14;
else
VAR6->VAR10 |= VAR15;


VAR2->VAR12 = FUN3(VAR4, "", 0, &VAR10);
if (FUN4(VAR2->VAR12)) {
VAR11 = FUN5(VAR2->VAR16, VAR2->VAR12, "");
if (VAR11 < 0)
return VAR11;
VAR11 = FUN6(VAR2->VAR12,
VAR10 & VAR15);
if (VAR11 < 0)
return VAR11;
} else if (VAR2->VAR12 == -VAR17) {
return -VAR17;
} else {
VAR2->VAR12 = -VAR13;
}

if (FUN7(VAR4, "",
VAR9, 2) == 0) {
VAR6->VAR18 = VAR9[0];
VAR6->VAR19 = VAR9[1];
}

if (FUN2(VAR4, ""))
VAR6->VAR10 |= VAR20;

if (FUN2(VAR4, ""))
VAR6->VAR10 |= VAR21;

return 0;
}