VAR1 FUN1(struct VAR2 *VAR3, void **VAR4, snd_pcm_uframes_t VAR5, int VAR6)
{
struct VAR7 *VAR8 = VAR3->VAR8;
int VAR9;
while (1) {
if (VAR8->VAR10->VAR11 == VAR12 ||
VAR8->VAR10->VAR11 == VAR13) {
FUN2(VAR3->VAR14,
"",
VAR8->VAR10->VAR11 == VAR12 ?
"" : "");
VAR9 = FUN3(VAR3, VAR15, NULL);
if (VAR9 < 0)
break;
} else if (VAR8->VAR10->VAR11 == VAR16) {
VAR9 = FUN4(VAR3);
if (VAR9 < 0)
break;
}
if (VAR6) {
mm_segment_t VAR17;
VAR17 = FUN5();
VAR9 = FUN6(VAR3, (void VAR18 **)VAR4, VAR5);
FUN7(VAR17);
} else {
VAR9 = FUN6(VAR3, (void VAR18 **)VAR4, VAR5);
}
if (VAR9 != -VAR19 && VAR9 != -VAR20)
break;
}
return VAR9;
}