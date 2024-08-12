int FUN1(struct VAR1 *VAR2, void *VAR3, struct VAR4 *VAR5)
{
struct VAR6 *VAR7 = FUN2(VAR2);
struct VAR8 *VAR9 = VAR3;

return FUN3(VAR5, &VAR7->VAR10, VAR9->VAR11,
&VAR9->VAR12);
}

struct VAR13 {
int VAR14;
struct VAR15 *VAR16;
uint32_t VAR17;
struct VAR15 *VAR18;
int VAR19;
};