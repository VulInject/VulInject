}
FUN1(VAR1);

static void FUN2(struct VAR2 *VAR3)
{
uint32_t VAR4;

for (VAR4 = 0; VAR4 < VAR5; VAR4++) {
struct VAR6 *VAR7 = VAR3->VAR7;
struct VAR8 *VAR9 = VAR7->VAR10;
struct VAR11 *VAR12 = &VAR3->VAR13[VAR4];

if (VAR3->VAR14 & (1 << VAR4))
FUN3(VAR12);

if (VAR9->VAR15 & (1 << VAR4))
FUN4(VAR12->VAR16);
}
FUN5(VAR3);
memset(VAR3, 0, sizeof(*VAR3));
}