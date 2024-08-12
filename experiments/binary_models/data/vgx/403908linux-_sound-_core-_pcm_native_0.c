int FUN1(struct VAR1 *VAR2,
struct snd_pcm_info VAR3 * VAR4)
{
struct VAR5 *VAR6;
int VAR7;

VAR6 = FUN2(sizeof(*VAR6), VAR8);
if (! VAR6)
return -VAR9;
VAR7 = FUN3(VAR2, VAR6);
if (VAR7 >= 0) {
if (FUN4(VAR4, VAR6, sizeof(*VAR6)))
VAR7 = -VAR10;
}
FUN5(VAR6);
return VAR7;
}