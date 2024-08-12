FUN1(VAR1, "");
FUN2(VAR2, VAR3, 0);
FUN1(VAR2, "");


static struct VAR4 *VAR4;

static int FUN3(struct VAR4 *VAR5, loff_t VAR6, uint64_t VAR7)
{
int VAR8 = 0;


if (FUN4(VAR6, VAR5)) {
FUN5("", VAR9);
VAR8 = -VAR10;
}


if (FUN4(VAR7, VAR5)) {
FUN5("", VAR9);
VAR8 = -VAR10;
}

return VAR8;
}