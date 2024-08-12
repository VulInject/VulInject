int FUN1(struct VAR1 *VAR2, struct VAR3 *VAR3)
{
struct bvec_iter VAR4;
struct bio_vec VAR5;
unsigned int VAR6 = 0;

FUN2(VAR5, VAR3, VAR4)
VAR6++;

if (!VAR2->VAR3) {
FUN3(VAR2, VAR3, VAR6);
} else {
if (!FUN4(VAR2, VAR3, VAR6))
return -VAR7;
VAR2->VAR8->VAR9 = VAR3;
VAR2->VAR8 = VAR3;
VAR2->VAR10 += (VAR3)->VAR11.VAR12;
FUN5(VAR3);
}

return 0;
}