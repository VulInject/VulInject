static int FUN1(struct VAR1 *VAR1)
{
struct VAR2 *VAR3 = FUN2(VAR1);
struct VAR4 *VAR5 = FUN3(VAR1->VAR6);

FUN4(0, "", VAR5->VAR7);
FUN5(&VAR3->VAR8);


FUN6(VAR5->VAR9);
FUN7(VAR5);

FUN8(&VAR5->VAR10);
FUN9(&VAR5->VAR10);
FUN10(&VAR5->VAR11);

FUN11(&VAR5->VAR12);
FUN12(VAR5);
FUN13(&VAR3->VAR8);
return 0;
}

static const struct v4l2_file_operations VAR13 = {
.VAR14		= VAR15,
.open		= VAR16,
.VAR17	= VAR18,
.VAR19		= VAR20,
.VAR21	= VAR22,
.VAR23		= VAR24,
};