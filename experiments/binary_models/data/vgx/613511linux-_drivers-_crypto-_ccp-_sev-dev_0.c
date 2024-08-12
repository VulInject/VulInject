static int FUN1(struct VAR1 *VAR2)
{
struct sev_user_data_get_id2 VAR3;
struct sev_data_get_id VAR4;
void VAR5 *VAR6;
void *VAR7 = NULL;
int VAR8;


if (!FUN2(0, 16))
return -VAR9;

if (FUN3(&VAR3, (void VAR5 *)VAR2->VAR4, sizeof(VAR3)))
return -VAR10;

VAR6 = (void VAR5 *)VAR3.VAR11;

if (VAR3.VAR11 && VAR3.VAR12) {

VAR7 = FUN4(VAR3.VAR12, VAR13 | VAR14);
if (!VAR7)
return -VAR15;

VAR4.VAR11 = FUN5(VAR7);
VAR4.VAR16 = VAR3.VAR12;
} else {
VAR4.VAR11 = 0;
VAR4.VAR16 = 0;
}

VAR8 = FUN6(VAR17, &VAR4, &VAR2->VAR18);


VAR3.VAR12 = VAR4.VAR16;

if (FUN7((void VAR5 *)VAR2->VAR4, &VAR3, sizeof(VAR3))) {
VAR8 = -VAR10;
goto VAR19;
}

if (VAR7) {
if (FUN7(VAR6, VAR7, VAR4.VAR16)) {
VAR8 = -VAR10;
goto VAR19;
}
}

VAR19:
FUN8(VAR7);

return VAR8;
}