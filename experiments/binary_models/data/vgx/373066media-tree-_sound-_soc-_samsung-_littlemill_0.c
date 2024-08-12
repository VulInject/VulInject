static int FUN1(struct VAR1 *VAR2,
struct VAR3 *VAR4)
{
struct VAR5 *VAR6 = VAR2->VAR7;
struct VAR8 *VAR9 = VAR6->VAR9;
int VAR10;

VAR11 = FUN2(VAR4);

VAR10 = FUN3(VAR9, VAR12,
VAR13, 32768,
VAR11 * 512);
if (VAR10 < 0) {
FUN4("", VAR10);
return VAR10;
}

VAR10 = FUN5(VAR9,
VAR14,
VAR11 * 512,
VAR15);
if (VAR10 < 0) {
FUN4("", VAR10);
return VAR10;
}

return 0;
}

static struct snd_soc_ops VAR16 = {
.VAR17 = VAR18,
};