static int FUN1(struct VAR1 *VAR2,
__u32 VAR3 *VAR4)
{
struct VAR5 *VAR6 = VAR2->VAR6;
struct VAR7 *VAR8 = &VAR6->VAR9->VAR8;
int VAR10;
u32 VAR11;
unsigned long VAR12;

if (!VAR6->VAR13) {
FUN2(VAR8, "");
return -VAR14;
}

if (FUN3(VAR11, VAR4))
return -VAR14;

VAR12 = FUN4(VAR11);

FUN5(&VAR6->VAR15);

VAR10 = FUN6(
VAR6->VAR16,
FUN7(&VAR2->VAR17) != 0 ||
FUN7(&VAR2->VAR18),
VAR12);

FUN8(&VAR6->VAR15);


if (FUN7(&VAR2->VAR18) || VAR6->VAR19)
VAR10 = -VAR20;

if (VAR10 < 0) {

FUN9("", VAR21, VAR10);
return VAR10;
}

if (VAR10 == 0) {
FUN2(VAR8, "", VAR21);
return -VAR22;
}

FUN2(VAR8, "", VAR21);
return 0;
}