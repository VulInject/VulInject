static void FUN1(void)
{
int VAR1 = 0xbeef;
struct bpf_dummy_ops_state VAR2 = {
.VAR3 = VAR1,
};
__u64 VAR4[1] = {(unsigned long)&VAR2};
FUN2(VAR5, VAR6,
.VAR7 = VAR4,
.VAR8 = sizeof(VAR4),
);
struct VAR9 *VAR10;
struct VAR11 *VAR12;
int VAR13, VAR14;

VAR12 = FUN3();
if (!FUN4(VAR12, ""))
return;

VAR13 = FUN5(VAR12->VAR15.VAR16);

VAR10 = FUN6();
if (!FUN4(VAR10, ""))
goto VAR17;

VAR14 = FUN7(VAR10->VAR15.VAR18,
VAR13, "");
if (!FUN8(VAR14, ""))
goto VAR17;

VAR14 = FUN9(VAR10);
if (!FUN8(VAR14, ""))
goto VAR17;

VAR14 = FUN10(VAR10);
if (!FUN8(VAR14, ""))
goto VAR17;

VAR14 = FUN11(VAR13, &VAR6);
FUN8(VAR14, "");
FUN12(VAR2.VAR3, 0x5a, "");
FUN12(VAR6.VAR19, VAR1, "");
FUN12(VAR10->VAR20->VAR3, VAR1, "");

VAR17:
FUN13(VAR12);
FUN14(VAR10);
}