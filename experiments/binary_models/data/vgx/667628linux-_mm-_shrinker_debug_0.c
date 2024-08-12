static VAR1 FUN1(struct VAR2 *VAR2,
const char VAR3 *VAR4,
size_t VAR5, VAR6 *VAR7)
{
struct VAR8 *VAR8 = VAR2->VAR9;
unsigned long VAR10 = 0, VAR11, VAR12;
struct shrink_control VAR13 = {
.VAR14 = VAR15,
};
struct VAR16 *VAR17 = NULL;
int VAR18;
char VAR19[72];
ssize_t VAR20;

VAR12 = VAR5 < (sizeof(VAR19) - 1) ? VAR5 : (sizeof(VAR19) - 1);
if (FUN2(VAR19, VAR4, VAR12))
return -VAR21;
VAR19[VAR12] = '';

if (sscanf(VAR19, "", &VAR11, &VAR18, &VAR10) != 3)
return -VAR22;

if (VAR18 < 0 || VAR18 >= VAR23)
return -VAR22;

if (VAR10 == 0)
return VAR5;

if (VAR8->VAR24 & VAR25) {
VAR17 = FUN3(VAR11);
if (!VAR17 || FUN4(VAR17))
return -VAR26;

if (!FUN5(VAR17)) {
FUN6(VAR17);
return -VAR26;
}
} else if (VAR11 != 0) {
return -VAR22;
}

VAR20 = FUN7(&VAR27);
if (VAR20) {
FUN6(VAR17);
return VAR20;
}

VAR13.VAR18 = VAR18;
VAR13.VAR17 = VAR17;
VAR13.VAR10 = VAR10;
VAR13.VAR28 = VAR10;

VAR8->FUN8(VAR8, &VAR13);

FUN9(&VAR27);
FUN6(VAR17);

return VAR5;
}