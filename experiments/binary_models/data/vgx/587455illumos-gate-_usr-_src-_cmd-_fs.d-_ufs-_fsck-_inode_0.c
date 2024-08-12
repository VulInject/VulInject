static int
FUN1(fsck_ino_t VAR1)
{
struct inodesc VAR2;

FUN2(&VAR2);
VAR2.VAR3 = VAR4;
VAR2.VAR5 = VAR6;
VAR2.VAR7 = "";
VAR2.VAR8 = VAR1;
VAR2.VAR9 = VAR10;

if ((FUN3(FUN4(VAR1), &VAR2, VAR11) & VAR12) != 0) {
return (VAR2.VAR13);
}

return (0);
}