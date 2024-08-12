struct VAR1 *FUN1(const void *VAR2, int VAR3,
vrf_id_t VAR4)
{
struct VAR5 *VAR5 = FUN2(VAR4);
struct VAR6 *VAR7;
struct VAR1 *VAR8, *VAR9 = NULL;
struct VAR10 *VAR11;
struct VAR12 *VAR13;

if (VAR3 != VAR14 && VAR3 != VAR15)
return NULL;

FUN3 (VAR5, VAR8) {
for (FUN4(VAR8->VAR12, VAR7, VAR13)) {
VAR11 = VAR13->VAR16;

if (!VAR11 || VAR11->VAR3 != VAR3)
continue;

if (VAR3 == VAR14) {
if (!FUN5(&VAR11->VAR17.VAR18,
(struct VAR19 *)VAR2))
continue;
} else if (VAR3 == VAR15) {
if (!FUN6(&VAR11->VAR17.VAR20,
(struct VAR21 *)VAR2))
continue;
}

if (FUN7(VAR8))
return VAR8;
if (!VAR9)
VAR9 = VAR8;
}
}
return VAR9;
}