static const FUN1(VAR1, -7300, 600, 0);

static const FUN1(VAR2, -7163, 0, 0);

static const FUN1(VAR3, -7163, 1763, 0);

static const FUN1(VAR4, -3600, 0, 0);

static int FUN2(struct VAR5 *VAR6,
struct VAR7 *VAR8)
{
struct VAR9 *VAR10 = FUN3(VAR6);
struct VAR11 *VAR12 =
(struct VAR11 *)VAR6->VAR13;
int VAR14 = VAR12->VAR14;
int VAR15;
u16 VAR16;

VAR15 = FUN4(VAR6, VAR8);
if (VAR15 < 0)
return VAR15;


VAR16 = FUN5(VAR10, VAR14);
return FUN6(VAR10, VAR14, VAR16 | 0x0100);
}