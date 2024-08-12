static int
FUN1(struct VAR1 *VAR2,
void *VAR3, unsigned int VAR4, bool VAR5)
{
struct VAR6 *VAR7 = VAR2->VAR7;
struct VAR8 *VAR9;

if (VAR7->VAR10 >= VAR11 ||
FUN2()) {
FUN3("");
return -VAR12;
} else if (VAR4 > 7 || VAR4 < 1) {
return -VAR13;
}
VAR9 = &VAR7->VAR14[VAR7->VAR10++];
memset(VAR9, 0, sizeof(*VAR9));

VAR9->VAR15.VAR16 = 1;
VAR9->VAR15.VAR17 = VAR4;
VAR9->VAR15.VAR5 = VAR5;
memcpy(VAR9->VAR18.VAR19, VAR3, VAR4);
return 0;
}