int FUN1(struct VAR1 *VAR2, unsigned int VAR3)
{
struct VAR4 *VAR5 = FUN2(VAR2, struct VAR4);
struct VAR6 *VAR7 = VAR2->VAR7;
int VAR8;

if (!(VAR5->VAR9 & VAR10)) {
struct io_cancel_data VAR11 = { .VAR12 = VAR5->VAR13, };

FUN3(&VAR7->VAR14);
VAR8 = FUN4(VAR7, &VAR11);
FUN5(&VAR7->VAR14);
} else {
enum hrtimer_mode VAR15 = FUN6(VAR5->VAR9);

FUN7(&VAR7->VAR16);
if (VAR5->VAR17)
VAR8 = FUN8(VAR7, VAR5->VAR13, &VAR5->VAR18, VAR15);
else
VAR8 = FUN9(VAR7, VAR5->VAR13, &VAR5->VAR18, VAR15);
FUN10(&VAR7->VAR16);
}

if (VAR8 < 0)
FUN11(VAR2);
FUN12(VAR2, VAR8, 0);
return VAR19;
}