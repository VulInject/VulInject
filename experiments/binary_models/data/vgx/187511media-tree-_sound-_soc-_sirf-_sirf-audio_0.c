static int FUN1(struct VAR1 *VAR2,
struct VAR3 *VAR4, int VAR5)
{
struct VAR6 *VAR7 = VAR2->VAR7;
struct VAR8 *VAR9 = VAR7->VAR9;
struct VAR10 *VAR10 = FUN2(VAR9);
int VAR11 = !FUN3(VAR5);

if (FUN4(VAR10->VAR12))
FUN5(VAR10->VAR12, VAR11);

return 0;
}
static const struct snd_soc_dapm_widget VAR13[] = {
FUN6("", VAR14),
FUN7("", VAR15),
FUN8("", NULL),
};