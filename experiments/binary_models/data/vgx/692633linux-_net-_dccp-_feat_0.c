int FUN1(struct VAR1 *VAR2, u8 VAR3, u64 VAR4)
{
struct VAR5 *VAR6 = &FUN2(VAR2)->VAR7;
dccp_feat_val VAR8 = { .VAR9 = VAR4 };
struct VAR10 *VAR11;

if (VAR2->VAR12 != VAR13 && VAR2->VAR12 != VAR14)
return 0;

if (FUN3(VAR3) != VAR15 ||
!FUN4(VAR3, VAR4))
return -VAR16;

if (VAR4 == FUN5(VAR2, VAR3))
return 0;	

VAR11 = FUN6(VAR6, VAR3, 1);
if (VAR11 != NULL) {
FUN7("",
(unsigned long long)VAR11->VAR17.VAR9,
(unsigned long long)VAR4);
FUN8(VAR11);
}

FUN9(VAR2);
return FUN10(VAR6, VAR3, 1, 0, &VAR8);
}