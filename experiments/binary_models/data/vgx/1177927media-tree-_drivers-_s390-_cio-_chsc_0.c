static void FUN1(struct VAR1 *VAR2, u64 VAR3)
{
static int VAR4;

while (true) {
memset(VAR2, 0, sizeof(*VAR2));
VAR2->VAR5.VAR6 = 0x0010;
VAR2->VAR5.VAR7 = 0x000e;
if (!VAR4)
VAR2->VAR3 = VAR3;

if (FUN2(VAR2))
break;

if (VAR2->VAR8.VAR7 != 0x0001) {
FUN3(2, "",
VAR2->VAR8.VAR7, VAR2->VAR3);

if (VAR2->VAR8.VAR7 == 3 && VAR2->VAR3) {

VAR4 = 1;
continue;
}
break;
}

FUN3(2, "", VAR2->VAR9);
switch (VAR2->VAR9) {
case 0:
FUN4(&VAR2->VAR10.VAR11);
break;
case 2:
FUN5(&VAR2->VAR10.VAR12);
break;
default:
FUN3(2, "", VAR2->VAR9);
break;
}

if (!(VAR2->VAR10.VAR11.VAR13 & 0x80))
break;
}
}