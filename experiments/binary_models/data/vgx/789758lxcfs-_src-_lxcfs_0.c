static int FUN1(const char *VAR1, struct VAR2 *VAR3)
{
int VAR4;
enum lxcfs_virt_t VAR5;

VAR5 = FUN2(VAR3);

if (FUN3(VAR5)) {
FUN4();
VAR4 = FUN5(VAR1, VAR3);
FUN6();
return VAR4;
}

if (FUN7(VAR5)) {
FUN4();
VAR4 = FUN8(VAR1, VAR3);
FUN6();
return VAR4;
}

if (VAR1) {
if (strcmp(VAR1, "") == 0)
return 0;
if (strcmp(VAR1, "") == 0)
return 0;
}

FUN9("" VAR6,
VAR1, VAR5, VAR3->VAR7);

return -VAR8;
}