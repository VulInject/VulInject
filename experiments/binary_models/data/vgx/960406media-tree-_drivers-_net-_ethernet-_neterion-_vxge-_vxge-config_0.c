enum VAR1
FUN1(void VAR2 *VAR3,
struct VAR4 *VAR5)
{
u32 VAR6;
u64 VAR7;
struct vxge_hw_toc_reg VAR2 *VAR8;
struct vxge_hw_mrpcim_reg VAR2 *VAR9;
struct vxge_hw_common_reg VAR2 *VAR10;
struct vxge_hw_vpmgmt_reg VAR2 *VAR11;
enum vxge_hw_status VAR12;
struct __vxge_hw_virtualpath VAR13;

memset(VAR5, 0, sizeof(struct VAR4));

VAR8 = FUN2(VAR3);
if (VAR8 == NULL) {
VAR12 = VAR14;
goto VAR15;
}

VAR7 = FUN3(&VAR8->VAR16);
VAR10 = VAR3 + VAR7;

VAR12 = FUN4(
(u64 VAR2 *)&VAR10->VAR17);
if (VAR12 != VAR18)
goto VAR15;

VAR5->VAR19 = FUN3(&VAR10->VAR20);

VAR7 = FUN3(&VAR10->VAR21);

VAR5->VAR22 =
(VAR23)FUN5(VAR7);

for (VAR6 = 0; VAR6 < VAR24; VAR6++) {
if (!((VAR5->VAR19) & FUN6(VAR6)))
continue;

VAR7 = FUN3(&VAR8->VAR25[VAR6]);

VAR11 = VAR3 + VAR7;

VAR5->VAR26 = FUN7(VAR11);
if (FUN8(VAR5->VAR22,
VAR5->VAR26) &
VAR27) {

VAR7 = FUN3(&VAR8->VAR28);

VAR9 = VAR3 + VAR7;

FUN9(0, &VAR9->VAR29);
FUN10();
}

VAR7 = FUN3(&VAR8->VAR30[VAR6]);

FUN11(&VAR13.VAR31);
VAR13.VAR32 = VAR3 + VAR7;
VAR13.VAR33 = VAR34;

VAR12 = FUN12(&VAR13, VAR5);
if (VAR12 != VAR18)
goto VAR15;

VAR12 = FUN13(&VAR13, VAR5);
if (VAR12 != VAR18)
goto VAR15;

VAR12 = FUN14(&VAR13, VAR5);
if (VAR12 != VAR18)
goto VAR15;

break;
}

for (VAR6 = 0; VAR6 < VAR24; VAR6++) {
if (!((VAR5->VAR19) & FUN6(VAR6)))
continue;

VAR7 = FUN3(&VAR8->VAR30[VAR6]);
VAR13.VAR32 = VAR3 + VAR7;
VAR13.VAR33 = VAR34;

VAR12 =  FUN15(&VAR13,
VAR5->VAR35[VAR6],
VAR5->VAR36[VAR6]);
if (VAR12 != VAR18)
goto VAR15;
}
VAR15:
return VAR12;
}