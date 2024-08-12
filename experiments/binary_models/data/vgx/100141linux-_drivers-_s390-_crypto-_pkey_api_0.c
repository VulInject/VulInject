static int FUN1(u32 VAR1,
const struct VAR2 *VAR3,
struct VAR4 *VAR5)
{

static cpacf_mask_t VAR6;

long VAR7;
int VAR8;
u8 VAR9[64];

switch (VAR1) {
case VAR10:
VAR8 = 16;
VAR7 = VAR11;
break;
case VAR12:
VAR8 = 24;
VAR7 = VAR13;
break;
case VAR14:
VAR8 = 32;
VAR7 = VAR15;
break;
default:
FUN2("",
VAR16, VAR1);
return -VAR17;
}


if (!VAR6.VAR18[0]) {

if (!FUN3(VAR19, &VAR6))
return -VAR20;
}

if (!FUN4(&VAR6, VAR7)) {
FUN2("", VAR16);
return -VAR20;
}


memset(VAR9, 0, sizeof(VAR9));
memcpy(VAR9, VAR3->VAR3, VAR8);


FUN5(VAR7, VAR9);


VAR5->VAR21 = VAR1;
VAR5->VAR22 = VAR8 + 32;
memcpy(VAR5->VAR5, VAR9, VAR8 + 32);

return 0;
}