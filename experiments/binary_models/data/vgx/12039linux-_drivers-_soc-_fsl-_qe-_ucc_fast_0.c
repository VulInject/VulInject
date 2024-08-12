}
FUN1(VAR1);

void FUN2(struct VAR2 * VAR3, enum comm_dir VAR4)
{
struct ucc_fast VAR5 *VAR6;
u32 VAR7;

VAR6 = VAR3->VAR6;


VAR7 = FUN3(&VAR6->VAR7);
if (VAR4 & VAR8) {
VAR7 |= VAR9;
VAR3->VAR10 = 1;
}
if (VAR4 & VAR11) {
VAR7 |= VAR12;
VAR3->VAR13 = 1;
}
FUN4(VAR7, &VAR6->VAR7);
}