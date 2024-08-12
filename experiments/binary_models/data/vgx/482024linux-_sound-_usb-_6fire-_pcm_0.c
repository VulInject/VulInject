static VAR1 FUN1(
struct VAR2 *VAR3)
{
struct VAR4 *VAR5 = FUN2(VAR3);
struct VAR6 *VAR7 = FUN3(VAR3);
unsigned long VAR8;
snd_pcm_uframes_t VAR9;

if (VAR7->VAR10 || !VAR5)
return VAR11;

FUN4(&VAR5->VAR12, VAR8);
VAR9 = VAR5->VAR13;
FUN5(&VAR5->VAR12, VAR8);
return VAR9;
}