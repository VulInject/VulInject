static void FUN1(struct VAR1 *VAR2, int VAR3,
const unsigned char *VAR4, int VAR5);
static int FUN2(struct VAR1 *VAR2);

static u32 VAR6;






static int VAR7 FUN3(struct VAR1 *VAR2)
{
int VAR8;
struct VAR9 *VAR10;
int VAR11 = VAR2->VAR11;
int VAR12 = VAR2->VAR12;
int VAR13 = VAR2->VAR13;
int VAR14 = VAR2->VAR14;

if (VAR11 > 0x1ff) {	
VAR10 = FUN4(VAR11, VAR15, "");
if ( VAR10 == NULL)
return -VAR16;
VAR8 = FUN5(VAR2, VAR11);
if (VAR8 != 0)
FUN6(VAR11, VAR15);
else
VAR10->VAR17 = VAR2->VAR17;
return VAR8;
}
else if (VAR11 != 0)	
return -VAR18;

for (VAR8 = 0; VAR19[VAR8]; VAR8++) {
int VAR20 = VAR19[VAR8];
VAR10 = FUN4(VAR20, VAR15, "");
if (VAR10 == NULL)
continue;
if (FUN5(VAR2, VAR20) == 0) {
VAR10->VAR17 = VAR2->VAR17;
return 0;
}
FUN6(VAR20, VAR15);
VAR2->VAR12 = VAR12;
VAR2->VAR13 = VAR13;
VAR2->VAR14 = VAR14;
}

return -VAR21;
}