static VAR1 FUN1(struct VAR2 *VAR3,
struct VAR4 *VAR5,
const char *VAR6, size_t VAR7)
{
struct VAR8 *VAR9 = FUN2(VAR3);
struct VAR10 *VAR11 = FUN3(VAR9);
unsigned long VAR12;
bool VAR13;
u8 VAR14;
int VAR15;

if (!VAR11->VAR16)
return -VAR17;

if (FUN4(VAR6, 0, &VAR12))
return -VAR18;

VAR13 = FUN5(VAR19, &VAR11->VAR20);

if (VAR12 && !VAR13) {
VAR15 = FUN6(VAR9, &VAR14);
if (VAR15)
return VAR15;

FUN7(&VAR11->VAR14, VAR14);

FUN8(VAR19, &VAR11->VAR20);
}

VAR15 = FUN9(VAR9, VAR12);
if (VAR15) {
if (!VAR13)
FUN10(VAR19, &VAR11->VAR20);

return VAR15;
}

if (!VAR12)
FUN10(VAR19, &VAR11->VAR20);

return VAR7;
}