FUN1("");
FUN2("");

static int VAR1;			
static struct cdev VAR2;
static struct VAR3 *VAR4;
static struct class *VAR5;
static struct VAR6 *VAR7;



static VAR8 FUN3(int VAR9, void *VAR10,
loff_t VAR11, size_t VAR12)
{
int VAR13, VAR14 = VAR15;
for (;;) {
VAR13 = FUN4(VAR9, 0, (VAR16)VAR10,
VAR12, VAR11);
if (VAR13 >= 0)
return VAR13;
if (VAR13 == VAR17)
continue;
if (VAR13 == VAR18 && --VAR14 > 0) {
FUN5(VAR19);
continue;
}
FUN6("", VAR13);
return -VAR20;
}
}