static int FUN1(struct VAR1 *VAR2)
{
struct VAR1 *VAR3;
struct VAR4 *VAR5;
u32 VAR6[2];
int VAR7;

if (!FUN2()) {
FUN3(&VAR2->VAR8, "");
FUN3(&VAR2->VAR8, "");
return -VAR9;
}

if (FUN4("")) {
VAR6[0] = FUN5(VAR10.VAR11);
VAR6[1] = FUN5(VAR10.VAR12);
} else {
VAR6[0] = FUN5(VAR10.VAR11);
VAR6[1] = FUN5(VAR10.VAR13);
}

FUN6(&VAR2->VAR8, "",
VAR6[0], VAR6[1]);

VAR5 = FUN7(0);
if (FUN8(!VAR5))
return -VAR9;

VAR7 = FUN9(VAR5, VAR6, 2);
if (VAR7 < 0) {
FUN3(&VAR2->VAR8, "", VAR7);
return VAR7;
}

VAR7 = FUN10(&VAR2->VAR8,
VAR14,
(void *)((unsigned long) VAR7));
if (VAR7)
return VAR7;

VAR3 = FUN11("", -1, NULL, 0);
VAR7 = FUN12(VAR3);
if (VAR7) {
FUN3(&VAR2->VAR8,
"", VAR7);
return VAR7;
}

VAR7 = FUN10(&VAR2->VAR8,
VAR15,
VAR3);
if (VAR7)
return VAR7;

return 0;
}

static struct platform_driver VAR16 = {
.VAR17		= VAR18,
.VAR19		= {
.VAR20	= "",
},
};