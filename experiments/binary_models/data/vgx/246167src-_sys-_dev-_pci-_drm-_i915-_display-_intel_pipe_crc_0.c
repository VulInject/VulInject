int FUN1(struct VAR1 *VAR2, const char *VAR3)
{
struct VAR4 *VAR5 = FUN2(VAR2);
struct VAR6 *VAR7 = FUN3(VAR5->VAR8.VAR9);
struct VAR10 *VAR11 = &VAR5->VAR11;
enum intel_display_power_domain VAR12;
enum intel_pipe_crc_source VAR13;
enum pipe VAR14 = VAR5->VAR14;
intel_wakeref_t VAR15;
u32 VAR16 = 0; 
int VAR17 = 0;
bool VAR18;

if (FUN4(VAR3, &VAR13) < 0) {
FUN5(&VAR7->VAR19, "", VAR3);
return -VAR20;
}

VAR12 = FUN6(VAR14);
VAR15 = FUN7(VAR7, VAR12);
if (!VAR15) {
FUN8(&VAR7->VAR19,
"");
return -VAR21;
}

VAR18 = VAR13 != VAR22;
if (VAR18)
FUN9(VAR5, true);

VAR17 = FUN10(VAR7, VAR14, &VAR13, &VAR16);
if (VAR17 != 0)
goto VAR23;

VAR11->VAR13 = VAR13;
FUN11(VAR7, FUN12(VAR14), VAR16);
FUN13(VAR7, FUN12(VAR14));

if (!VAR13) {
if (FUN14(VAR7) || FUN15(VAR7))
FUN16(VAR7, VAR14);
}

VAR11->VAR24 = 0;

VAR23:
if (!VAR18)
FUN9(VAR5, false);

FUN17(VAR7, VAR12, VAR15);

return VAR17;
}