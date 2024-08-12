static unsigned char VAR1[VAR2] = {[0 ... (VAR2 - 1)] = 0xff};
static int VAR3[VAR2] = {[0 ... (VAR2 - 1)] = -1};
static spinlock_t VAR4[VAR2];  

FUN1(VAR5, VAR6, VAR7, NULL, VAR8);
FUN2(VAR5, "");

FUN1(VAR9, VAR6, VAR10, NULL, VAR8);
FUN2(VAR9, "");

FUN1(VAR3, int, VAR7, NULL, VAR8);
FUN2(VAR3, "");

FUN1(VAR11, int, VAR11, NULL, VAR8);
FUN2(VAR11, "");

FUN3(VAR12, int, NULL, VAR8);
FUN2(VAR12, ""
"");

FUN3(VAR13, VAR14, NULL, VAR8);
FUN2(VAR13, ""
"");

FUN3(VAR1, VAR14, NULL, VAR8);
FUN2(VAR1, ""
"");


static struct VAR15 *VAR16[VAR2];

static VAR17 FUN4(const struct VAR18 *VAR19, int VAR20)
{
return FUN5(VAR19->VAR21 + VAR20);
}