static VAR1 FUN1(struct VAR2 *VAR2, const char VAR3 *VAR4,
size_t VAR5, VAR6 *VAR7)
{
struct VAR8 *VAR9 = VAR2->VAR10;
const char *VAR11;
int VAR12;

if (VAR5 == 0)
return 0;

VAR12 = FUN2(&VAR9->mutex);
if (VAR12)
return VAR12;

if (VAR9->VAR13 == VAR14) {
VAR12 = -VAR15;
goto VAR16;
}

if (VAR5 != sizeof(struct VAR17)) {
VAR12 = -VAR18;
goto VAR16;
}

if (FUN3(&VAR9->VAR19, VAR4,
sizeof(struct VAR17))) {
VAR12 = -VAR20;
goto VAR16;
}

VAR11 = VAR9->VAR19.VAR11;
if (!VAR11[0] || !strcmp(VAR11, "") || !strcmp(VAR11, "") ||
strchr(VAR11, '')) {
VAR12 = -VAR18;
goto VAR16;
}

if (VAR9->VAR19.VAR21 <= 0) {
VAR12 = -VAR18;
goto VAR16;
}
VAR9->VAR22.VAR21 = VAR9->VAR19.VAR21;

VAR12 = FUN4(VAR23.VAR24,
&VAR9->VAR22);
if (VAR12 < 0)
goto VAR16;

VAR9->VAR25 = true;
VAR9->VAR13 = VAR14;
VAR12 = VAR5;

VAR16:
FUN5(&VAR9->mutex);

return VAR12;
}