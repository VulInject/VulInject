void FUN1(struct VAR1 *VAR2, void *VAR3,
int VAR4, const void *VAR5,
unsigned int VAR6, int VAR7);
void FUN2(struct VAR1 *VAR2, void *VAR3,
int VAR4, const void *VAR5,
unsigned int VAR6, int VAR7);
void FUN3(struct VAR1 *VAR2, void *VAR3,
int VAR4, const void *VAR5,
unsigned int VAR6, int VAR7);
void FUN4(struct VAR1 *VAR2, void *VAR3,
int VAR4, const void *VAR5,
unsigned int VAR6, int VAR7);

av_cold void FUN5(VAR1 *VAR2,
enum AVSampleFormat VAR8)
{
int VAR9 = FUN6();

if (FUN7(VAR9)) {
if (!VAR2->VAR10) {
switch (VAR8) {
case VAR11:
VAR2->VAR12  = VAR13;
break;
case VAR14:
VAR2->VAR12  = VAR15;
break;
case VAR16:
VAR2->VAR12  = VAR17;
break;
case VAR18:
VAR2->VAR12  = VAR19;
break;
}
}
}
}