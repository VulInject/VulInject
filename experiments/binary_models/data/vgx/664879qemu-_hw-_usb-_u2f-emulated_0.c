static VAR1 FUN1(VAR2 *VAR3)
{
ssize_t VAR4;
char VAR5[4096], VAR6[2048];
struct u2f_emu_vdev_setup VAR7;


VAR4 = FUN2(VAR3->VAR8, VAR5, sizeof(VAR5));
if (VAR4 < 0) {
return -1;
}


VAR4 = FUN2(VAR3->VAR9, VAR6, sizeof(VAR6));
if (VAR4 < 0) {
return -1;
}


VAR4 = FUN2(VAR3->VAR10, (char *)&VAR7.VAR10,
sizeof(VAR7.VAR10));
if (VAR4 < 0) {
return -1;
}


if (!FUN3(VAR3->VAR11, &VAR3->VAR12)) {
return -1;
}


VAR7.VAR13 = VAR5;
VAR7.VAR14 = VAR6;
VAR7.VAR11 = (struct VAR15 *)&VAR3->VAR12;

return FUN4(&VAR3->VAR16, &VAR7);
}