}
FUN1(VAR1);

static void VAR2 FUN2(const struct VAR3 *VAR4)
{

int VAR5 = (VAR4->VAR6-11)/sizeof(struct VAR7)-1;
struct VAR7 *VAR8;
struct VAR9 *VAR10 =
FUN3(VAR4, struct VAR9, VAR11);



if (VAR4->VAR6 < 17)
return;

VAR12 = VAR10->VAR13;
VAR14 = VAR10->VAR15;

VAR8 = FUN4(VAR16, (VAR17 + VAR5) *
sizeof(struct VAR7),
VAR18);

if (!VAR8)
return;
VAR16 = VAR8;

memcpy(VAR16+VAR17, VAR10->VAR5,
sizeof(struct VAR7) * VAR5);

VAR17 += VAR5;
}